#ifndef CAMERA_H
#define CAMERA_H

#include "global.h"

// The stage camera (gCamera, 0x02022C44). Positions are 24.8 fixed point;
// the viewport position is the centre of the screen.
// Addresses in game structures are u32 (GBA addresses), not pointers, so the
// layout is the same in the 64-bit PC build.
struct Camera {
    u8 unk_00[0x14];
    u32 update;          // code address of the mode's update, from sCameraModes
    u8 mode;
    u8 chaseMode;        // how the viewport follows the target; bit 3: ease
    u16 unk_1A;
    u8 started;          // set once the mode's update has run
    u8 unk_1D[3];
    u16 unk_20;
    s16 easeTimer;       // steps done of a timed ease
    u8 unk_24[0xC];
    s32 targetX, targetY;
    s32 x, y;            // the viewport
    s32 speedX, speedY;  // forced scrolling, per frame
    u32 follow;          // address of the followed position
    s32 dx, ddx, dy, ddy;
    s32 left, right, top, bottom;
};

// How a stage or event sets up the camera.
struct CameraTemplate {
    u8 mode;
    u8 chaseMode;
    u8 unk_02[2];
    s32 targetX, targetY;
    s32 speedX, speedY;
    s16 dx, ddx, dy, ddy;
    s32 left, right, top, bottom;
};

// chase modes (Camera_MoveToTarget)
#define CHASE_JUMP 0      // the viewport is the target
#define CHASE_QUARTER 1   // close a quarter of the distance each frame
#define CHASE_SLOW 2      // ease over 1024 frames
#define CHASE_EASE 4      // ease over 256 frames
#define CHASE_EASING 8    // flag: still easing

void Camera_SetMode(struct Camera *cam, u32 mode);
void Camera_Init(struct Camera *cam, const struct CameraTemplate *t);
void Camera_MoveToTarget(struct Camera *cam, u8 chaseMode);
void Camera_ForcedScroll(struct Camera *cam);

#endif
