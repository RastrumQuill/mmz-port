#ifndef INPUT_H
#define INPUT_H

#include "global.h"

// One set of buttons. The game keeps two: the player's, and the other
// player's when two GBAs are linked.
struct KeyState {
    u16 held;            // buttons down this frame
    u16 prevHeld;        // buttons down last frame
    u16 pressed;         // buttons that went down this frame
    u16 repeated;        // pressed, or held long enough to repeat (for menus)
    u16 source;          // 0: none, 1: this GBA, 2: from the link
    s8 repeatTimer[10];  // per button: frames until the next repeat
    u8 repeatDelay;      // frames before a held button starts repeating
    u8 repeatInterval;   // frames between repeats
    u8 unk_16[2];
};

struct Input {
    u32 linkMode;        // 1 when the buttons come from the link
    struct KeyState keys[2];
};

extern struct Input gInput;

void InitInput(void);
void PollKeyInput(void);
void ResetKeyStates(void);

#endif
