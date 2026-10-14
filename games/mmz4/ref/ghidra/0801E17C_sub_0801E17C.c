// sub_0801E17C at 0x0801E17C (thumb)

undefined4 sub_0801E17C(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 in_lr;
  
  DAT_0202e888 = (undefined4 *)0x0;
  iVar3 = 0x2f;
  puVar1 = &DAT_0202e4c4;
  do {
    puVar2 = puVar1;
    *puVar2 = DAT_0202e888;
    DAT_0202e888 = puVar2;
    iVar3 = iVar3 + -1;
    puVar1 = puVar2 + 5;
  } while (-1 < iVar3);
  DAT_0202e884 = 0;
  DAT_0202e892 = 0x30;
  return in_lr;
}

