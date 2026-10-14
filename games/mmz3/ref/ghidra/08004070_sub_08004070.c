// sub_08004070 at 0x08004070 (thumb)

undefined4 sub_08004070(void)

{
  short *psVar1;
  short *psVar2;
  int iVar3;
  undefined4 in_lr;
  
  psVar1 = &DAT_02002260;
  psVar2 = &DAT_02002290;
  iVar3 = 0xf;
  do {
    if (*psVar1 != 0) {
      if (*psVar2 == 0) {
        *psVar1 = 0;
      }
      else {
        *psVar2 = 0;
      }
    }
    psVar1 = psVar1 + 1;
    psVar2 = psVar2 + 10;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  return in_lr;
}

