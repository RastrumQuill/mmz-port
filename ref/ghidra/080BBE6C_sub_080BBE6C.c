// sub_080BBE6C at 0x080BBE6C (thumb)

undefined4 sub_080BBE6C(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  short sVar3;
  int iVar4;
  undefined4 in_lr;
  
  DAT_02023630 = (undefined4 *)0x0;
  iVar4 = 0x4f;
  sVar3 = 0x37e;
  puVar1 = &DAT_02023620;
  do {
    puVar2 = puVar1;
    *(short *)((int)puVar2 + 6) = sVar3;
    *puVar2 = DAT_02023630;
    DAT_02023630 = puVar2;
    sVar3 = sVar3 + -2;
    iVar4 = iVar4 + -1;
    puVar1 = puVar2 + -2;
  } while (-1 < iVar4);
  DAT_02023628 = 0;
  DAT_0202362c = 0;
  DAT_02023224 = 0;
  return in_lr;
}

