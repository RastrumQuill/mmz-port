// sub_080142BC at 0x080142BC (thumb)

int sub_080142BC(void)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  piVar2 = &DAT_02022db0;
  uVar3 = (uint)DAT_02022e86;
  if (DAT_02022db0 != 0) {
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
  DAT_02022e86 = (short)((int)(uVar3 * 0xf) >> 4);
  DAT_02022e84 = 0;
  DAT_02022db0 = 0;
  return (int)uVar3 >> 8;
}

