// The stage camera. Not a unit of the matching build yet (it is in the
// middle of code_08000FE8): it is built for the PC and checked against the
// original by tools/lift.
#include "global.h"
#include "camera.h"

#define sCameraModes ((const u32 *)0x0829FF8C)   // code addresses

void Camera_SetMode(struct Camera *cam, u32 mode) {
    cam->mode = mode;
    *(u32 *)&cam->started = 0;
    cam->unk_20 = 0;
    cam->unk_1A = 0;
    cam->update = sCameraModes[mode];
}

void Camera_Init(struct Camera *cam, const struct CameraTemplate *t) {
    if (t == NULL) {
        Camera_SetMode(cam, 0);
        cam->follow = 0;
        cam->chaseMode = CHASE_JUMP;
        cam->easeTimer = 0;
        return;
    }
    Camera_SetMode(cam, t->mode);
    cam->chaseMode = t->chaseMode | CHASE_EASING;
    cam->easeTimer = 0;
    cam->follow = 0;
    cam->targetX = t->targetX;
    cam->targetY = t->targetY;
    cam->speedX = t->speedX;
    cam->speedY = t->speedY;
    cam->dx = t->dx;
    cam->ddx = t->ddx;
    cam->dy = t->dy;
    cam->ddy = t->ddy;
    cam->left = t->left;
    cam->right = t->right;
    cam->top = t->top;
    cam->bottom = t->bottom;
}

// a quarter of the distance, rounded away from zero
static s32 Quarter(s32 d) {
    if (d > 0)
        return (d + 1) >> 2;
    return -((1 - d) >> 2);
}

// (a * (n - t) + b * t) / 256, rounded toward zero
static s32 Blend(s32 a, s32 b, s32 n, s32 t) {
    s32 v = (n - t) * a + t * b;
    if (v < 0)
        v += 0xFF;
    return v >> 8;
}

void Camera_MoveToTarget(struct Camera *cam, u8 chaseMode) {
    s32 t;

    switch (chaseMode) {
    case CHASE_QUARTER:
        cam->x += Quarter(cam->targetX - cam->x);
        cam->y += Quarter(cam->targetY - cam->y);
        return;
    case CHASE_SLOW:
        if (cam->easeTimer >= 0x3FF)
            break;
        t = ++cam->easeTimer;
        // positions divided by 4 first so the products fit in 32 bits
        cam->x = Blend(cam->x >> 2, cam->targetX >> 2, 0x400, t);
        cam->y = Blend(cam->y >> 2, cam->targetY >> 2, 0x400, t);
        return;
    case CHASE_EASE:
        if (cam->easeTimer >= 0xFF)
            break;
        t = ++cam->easeTimer;
        cam->x = Blend(cam->x, cam->targetX, 0x100, t);
        cam->y = Blend(cam->y, cam->targetY, 0x100, t);
        return;
    case CHASE_JUMP:
        break;
    default:
        cam->chaseMode &= ~CHASE_EASING;
        break;
    }
    cam->x = cam->targetX;
    cam->y = cam->targetY;
}

void Camera_ForcedScroll(struct Camera *cam) {
    if (!cam->started) {
        cam->easeTimer = 0;
        cam->started = 1;
    }
    cam->targetX += cam->speedX;
    cam->targetY += cam->speedY;
    Camera_MoveToTarget(cam, cam->chaseMode);
}

LIFT_EXPORT_VOID(Camera_SetMode)
LIFT_EXPORT_VOID(Camera_Init)
LIFT_EXPORT_VOID(Camera_MoveToTarget)
LIFT_EXPORT_VOID(Camera_ForcedScroll)
