// sub_080B6250 at 0x080B6250 (thumb)

undefined4 sub_080B6250(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 in_lr;
  
  uVar6 = *(undefined4 *)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0xbc);
  iVar1 = *(int *)(param_1 + 0xc0);
  iVar4 = *(int *)(param_1 + 0xc4);
  iVar5 = *(int *)(param_1 + 200);
  iVar2 = sub_0801901C(uVar6,1);
  iVar2 = iVar2 - (iVar4 + iVar3);
  iVar4 = sub_08019068(uVar6,1);
  iVar4 = iVar4 - (iVar5 + iVar1);
  if (((iVar2 + 0xa0U < 0x141) && (iVar4 + 0xa0U < 0x141)) &&
     (iVar2 * iVar2 + iVar4 * iVar4 < 0x6401)) {
    *(undefined *)(param_1 + 0xd) = 1;
  }
  iVar2 = sub_08025930(iVar2,iVar4);
  *(char *)(param_1 + 0xd0) = (char)iVar2;
  *(int *)(param_1 + 0xbc) = ((short)(&DAT_080c8e24)[iVar2 + 0x40] * 5 >> 3) + iVar3;
  *(int *)(param_1 + 0xc0) = ((short)(&DAT_080c8e24)[iVar2] * 5 >> 3) + iVar1;
  return in_lr;
}

