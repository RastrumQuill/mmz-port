// sub_0801365C at 0x0801365C (thumb)

undefined4 sub_0801365C(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 in_lr;
  
  DAT_0202eb98 = (undefined4 *)0x0;
  iVar3 = 0x1f;
  puVar1 = &DAT_0202ea14;
  do {
    puVar2 = puVar1;
    *puVar2 = DAT_0202eb98;
    DAT_0202eb98 = puVar2;
    iVar3 = iVar3 + -1;
    puVar1 = puVar2 + 3;
  } while (-1 < iVar3);
  DAT_0202eb94 = 0;
  DAT_0202eba2 = 0x20;
  return in_lr;
}

