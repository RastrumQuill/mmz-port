// sub_08004048 at 0x08004048 (thumb)

undefined4 sub_08004048(void)

{
  short *psVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined4 in_lr;
  
  psVar1 = &DAT_02002260;
  puVar3 = &DAT_02002260;
  iVar2 = 0xf;
  do {
    if (*psVar1 != 0) {
      puVar3[0x18] = 1;
    }
    puVar3 = puVar3 + 10;
    psVar1 = psVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return in_lr;
}

