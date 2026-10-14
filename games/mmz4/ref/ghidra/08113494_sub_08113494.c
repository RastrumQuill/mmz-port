// sub_08113494 at 0x08113494 (thumb)

undefined4 sub_08113494(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  short *psVar3;
  undefined4 in_lr;
  
  sub_0801F4A4();
  if ((DAT_0202e8b4 & 0x40) != 0) {
    sub_08001354();
    return in_lr;
  }
  if ((DAT_0202e918 & 8) == 0) {
    DAT_0202e8e0[0x42] = DAT_0202e8e0[0x42] + '\x01';
    psVar3 = (short *)(param_1 + 0x6260);
    sVar1 = *psVar3;
    if (sVar1 != 0x12) {
      if ((DAT_0202e8b4 & 0x20) == 0) {
        if (sVar1 == 1) {
          *psVar3 = 0x11;
          sub_0801F134(0x11,7);
        }
        else {
          if (sVar1 == 2) {
            *psVar3 = 0x11;
          }
          else if ((DAT_0202e8b6 & 0x20) == 0) {
            *psVar3 = 0x11;
          }
          else if ((DAT_0202e8b6 & 0x60) == 0x20) {
            *psVar3 = 0x11;
          }
          else if (sVar1 == 0xb) {
            *psVar3 = 0x11;
          }
          else if (sVar1 == 0xc) {
            *psVar3 = 0x11;
          }
          else if ((DAT_0202e8b7 & 1) == 0) {
            *psVar3 = 0x11;
          }
          else {
            if (sVar1 == 0xd) {
              *psVar3 = 0x11;
              sub_0801F134(0x11,8);
              goto LAB_081135d2;
            }
            psVar3 = (short *)(param_1 + 0x6260);
            sVar1 = *psVar3;
            if ((sVar1 != 0xe) && (sVar1 != 0xf)) {
              if (sVar1 == 0x10) {
                *psVar3 = 0x12;
                sub_0801F134(0x12,0);
              }
              else {
                *psVar3 = 0x11;
                sub_0801F134(0x11,4);
              }
              goto LAB_081135d2;
            }
            *psVar3 = 0x11;
          }
          sub_0801F134(0x11,4);
        }
      }
      else {
        *psVar3 = 0x11;
        sub_0801F134(0x11,6);
      }
LAB_081135d2:
      sub_08112080(param_1,0x300);
      return in_lr;
    }
    uVar2 = 0xb00;
  }
  else if (*DAT_0202e8e0 == '\0') {
    uVar2 = 0x900;
  }
  else {
    if (DAT_0202e8f2 < 99) {
      DAT_0202e8f2 = DAT_0202e8f2 + 1;
    }
    *DAT_0202e8e0 = *DAT_0202e8e0 + -1;
    uVar2 = 0x300;
  }
  sub_08112080(param_1,uVar2);
  return in_lr;
}

