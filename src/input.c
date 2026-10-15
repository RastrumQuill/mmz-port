#include "global.h"
#include "input.h"
#include "link.h"

static void ReadKeyInput(struct KeyState *k, s32 player);
static void ResetKeyState(struct KeyState *k);

void InitInput(void) {
    ResetKeyStates();
    PollKeyInput();
}

void ResetKeyStates(void) {
    s32 i;

    gInput.linkMode = 0;
    for (i = 0; i < 2; i++) {
        ResetKeyState(&gInput.keys[i]);
        gInput.keys[i].repeatDelay = 24;
        gInput.keys[i].repeatInterval = 4;
    }
}

void PollKeyInput(void) {
    s32 i = 0;
    struct KeyState *k = gInput.keys;

    for (i = 0; i < 2; i++) {
        ReadKeyInput(k, i);
        k++;
    }
}

NONMATCH("asm/nonmatching/input/ReadKeyInput.inc", static void ReadKeyInput(struct KeyState *k, s32 player)) {
    vu16 *src;
    s16 i;

    k->prevHeld = k->held;
    if (gInput.linkMode == 1 && gLinkState.active == 1) {
        if (gLinkState.playerId == player)
            k->source = 1;
        else
            k->source = 2;
        src = &gLinkState.keys[player];
    } else {
        if (player != 0) {
            k->source = 0;
            return;
        }
        k->source = 1;
        src = &REG_KEYINPUT;
    }
    k->held = ~*src;
    k->pressed = (k->held ^ k->prevHeld) & k->held;
    k->repeated = 0;
    for (i = 0; i < 10; i++) {
        if ((k->held >> i) & 1) {
            if (k->repeatTimer[i] == 0) {
                k->repeated |= 1 << i;
                if ((k->pressed >> i) & 1)
                    k->repeatTimer[i] = k->repeatDelay;
                else
                    k->repeatTimer[i] = k->repeatInterval;
            }
            k->repeatTimer[i]--;
        } else {
            k->repeatTimer[i] = 0;
        }
    }
}
END_NONMATCH

static void ResetKeyState(struct KeyState *k) {
    k->source = 0;
    k->repeated = 0;
    k->pressed = 0;
    k->prevHeld = 0;
    k->held = 0;
    *(u32 *)&k->repeatTimer[0] = *(u32 *)&k->repeatTimer[4] = 0;
    *(u16 *)&k->repeatTimer[8] = 0;
}

// On the PC these replace the lifted versions (see global.h).
LIFT_EXPORT_VOID(InitInput)
LIFT_EXPORT_VOID(ResetKeyStates)
LIFT_EXPORT_VOID(PollKeyInput)
LIFT_EXPORT_VOID(ReadKeyInput)
LIFT_EXPORT_VOID(ResetKeyState)
