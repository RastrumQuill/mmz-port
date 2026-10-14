// sub_0801AE74 at 0x0801AE74 (thumb)

undefined8 sub_0801AE74(void)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  undefined4 in_lr;
  
  piVar2 = &DAT_02030500;
  uVar3 = (uint)DAT_020305d6;
  if (DAT_02030500 != 0) {
    do {
      uVar1 = *piVar2 * 0x100;
      if ((int)(uVar3 + *piVar2 * -0x100) < 0 != SBORROW4(uVar3,uVar1)) {
        uVar3 = uVar1;
      }
      piVar2 = piVar2 + 3;
    } while (*piVar2 != 0);
  }
  if (0x2000 < (int)uVar3) {
    uVar3 = 0x2000;
  }
  DAT_020305d6 = (short)((int)(uVar3 * 0xf) >> 4);
  DAT_020305d4 = 0;
  DAT_02030500 = 0;
  return CONCAT44(in_lr,(int)uVar3 >> 8);
}

