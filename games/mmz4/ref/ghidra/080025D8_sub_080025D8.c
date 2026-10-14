// sub_080025D8 at 0x080025D8 (thumb)

undefined8 sub_080025D8(int param_1)

{
  uint uVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 in_lr;
  
  iVar2 = 0;
  puVar3 = &DAT_020008a0;
  do {
    if ((uint)*puVar3 == param_1 * 0x10000 + 0x10000U >> 0x10) break;
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  if (iVar2 == 0x10) {
    uVar1 = 3;
  }
  else {
    sub_08003518(&DAT_020008c8 + iVar2 * 5);
    uVar1 = (uint)(byte)(&DAT_020008cf)[iVar2 * 0x14];
  }
  return CONCAT44(in_lr,uVar1);
}

