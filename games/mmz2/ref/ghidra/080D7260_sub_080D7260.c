// sub_080D7260 at 0x080D7260 (thumb)

undefined4 sub_080D7260(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 in_lr;
  
  uVar7 = *(undefined4 *)(param_1 + 0x28);
  iVar4 = *(int *)(param_1 + 0xb4);
  iVar2 = *(int *)(param_1 + 0xb8);
  iVar5 = *(int *)(param_1 + 0xbc);
  iVar6 = *(int *)(param_1 + 0xc0);
  iVar3 = sub_080378D8(uVar7,2);
  iVar3 = iVar3 - (iVar5 + iVar4);
  iVar5 = sub_0803792C(uVar7,2);
  iVar5 = iVar5 - (iVar6 + iVar2);
  if (((iVar3 + 0xa0U < 0x141) && (iVar5 + 0xa0U < 0x141)) &&
     (iVar3 * iVar3 + iVar5 * iVar5 < 0x6401)) {
    *(undefined *)(param_1 + 0xd) = 4;
  }
  bVar1 = sub_08038E6C(iVar3,iVar5);
  *(byte *)(param_1 + 200) = bVar1;
  *(int *)(param_1 + 0xb4) = ((short)(&DAT_080ef450)[(byte)(bVar1 + 0x40)] * 5 >> 3) + iVar4;
  *(int *)(param_1 + 0xb8) = ((short)(&DAT_080ef450)[bVar1] * 5 >> 3) + iVar2;
  return in_lr;
}

