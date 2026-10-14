// sub_080B6304 at 0x080B6304 (thumb)

undefined4 sub_080B6304(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0xbc);
  iVar4 = *(int *)(param_1 + 0xc0);
  iVar2 = -iVar3;
  iVar1 = -iVar4;
  if (((iVar2 + 0xa0U < 0x141) && (iVar1 + 0xa0U < 0x141)) &&
     (iVar2 * iVar2 + iVar1 * iVar1 < 0x6401)) {
    *(undefined *)(param_1 + 0xd) = 3;
  }
  iVar2 = sub_08025930(iVar2,iVar1);
  *(char *)(param_1 + 0xd0) = (char)iVar2;
  *(int *)(param_1 + 0xbc) = iVar3 + ((short)(&DAT_080c8e24)[iVar2 + 0x40] * 5 >> 3);
  *(int *)(param_1 + 0xc0) = iVar4 + ((short)(&DAT_080c8e24)[iVar2] * 5 >> 3);
  return in_lr;
}

