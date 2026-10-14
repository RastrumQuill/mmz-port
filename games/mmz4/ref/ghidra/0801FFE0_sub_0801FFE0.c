// sub_0801FFE0 at 0x0801FFE0 (thumb)

undefined8 sub_0801FFE0(void)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  undefined4 in_lr;
  
  piVar2 = &DAT_0202ec70;
  uVar3 = (uint)DAT_0202ed46;
  if (DAT_0202ec70 != 0) {
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
  DAT_0202ed46 = (short)((int)(uVar3 * 0xf) >> 4);
  DAT_0202ed44 = 0;
  DAT_0202ec70 = 0;
  return CONCAT44(in_lr,(int)uVar3 >> 8);
}

