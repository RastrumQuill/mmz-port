#ifndef LINK_H
#define LINK_H

#include "global.h"

// Two-player link state. Only the fields the input code reads are known.
struct LinkState {
    u16 active;      // 1 while linked
    u8 playerId;     // which player this GBA is
    u8 unk_03[9];
    u16 keys[2];     // buttons received from each player
};

extern struct LinkState gLinkState;

#endif
