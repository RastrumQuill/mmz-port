// sub_080D71D0 at 0x080D71D0 (thumb)

undefined4 sub_080D71D0(int param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0xb4);
  iVar4 = *(int *)(param_1 + 0xb8);
  iVar1 = -iVar5;
  iVar2 = -iVar4;
  if (((iVar1 + 0xa0U < 0x141) && (iVar2 + 0xa0U < 0x141)) &&
     (iVar1 * iVar1 + iVar2 * iVar2 < 0x6401)) {
    *(undefined *)(param_1 + 0xd) = 3;
  }
  bVar3 = sub_08038E6C(iVar1,iVar2);
  *(byte *)(param_1 + 200) = bVar3;
  *(int *)(param_1 + 0xb4) = iVar5 + ((short)(&DAT_080ef450)[(byte)(bVar3 + 0x40)] * 5 >> 3);
  *(int *)(param_1 + 0xb8) = ((short)(&DAT_080ef450)[bVar3] * 5 >> 3) + iVar4;
  return in_lr;
}

