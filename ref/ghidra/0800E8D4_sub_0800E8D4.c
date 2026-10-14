// sub_0800E8D4 at 0x0800E8D4 (thumb)

undefined4 sub_0800E8D4(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 in_lr;
  
  DAT_02022aa8 = (undefined4 *)0x0;
  iVar3 = 0x1f;
  puVar1 = &DAT_02022924;
  do {
    puVar2 = puVar1;
    *puVar2 = DAT_02022aa8;
    DAT_02022aa8 = puVar2;
    iVar3 = iVar3 + -1;
    puVar1 = puVar2 + 3;
  } while (-1 < iVar3);
  DAT_02022aa4 = 0;
  DAT_02022ab6 = 0x20;
  return in_lr;
}

