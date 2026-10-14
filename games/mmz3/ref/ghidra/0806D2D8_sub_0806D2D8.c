// sub_0806D2D8 at 0x0806D2D8 (thumb)

undefined4 sub_0806D2D8(int param_1)

{
  short sVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0xbe) == '\0') {
      if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
        *(undefined *)(param_1 + 0xd) = 0;
      }
      else {
        if (*(int *)(param_1 + 0x2c) == 0) {
          sVar1 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0xb00);
          if (sVar1 != 0) {
            sVar1 = 2;
          }
        }
        else {
          sVar1 = 1;
        }
        *(char *)(param_1 + 0xd) = (char)sVar1;
      }
    }
    else {
      *(undefined *)(param_1 + 0xd) = 0;
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined *)(param_1 + 0xbd) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08362e5c + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

