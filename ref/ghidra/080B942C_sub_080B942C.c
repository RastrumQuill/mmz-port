// sub_080B942C at 0x080B942C (thumb)

undefined4 sub_080B942C(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  
  iVar2 = sub_080B9B78();
  uVar6 = (uint)*(byte *)(param_1 + 0x12);
  *(uint *)(param_1 + 0x4c) = uVar6 * 0x800 + 0x3800;
  iVar5 = (int)*(short *)(*(int *)(iVar2 + 0x10) + 0x8c);
  bVar1 = *(byte *)(*(int *)(iVar2 + 0x10) + 0x183);
  iVar3 = sub_080C8C38(iVar5,bVar1);
  iVar4 = sub_080C8CB0(iVar5,bVar1);
  iVar5 = iVar4;
  if (iVar4 < 0) {
    iVar5 = iVar4 + 3;
  }
  if (uVar6 == iVar5 >> 2) {
    iVar4 = iVar4 + uVar6 * -4;
  }
  else {
    iVar4 = 0;
    if (uVar6 < (uint)(iVar5 >> 2)) {
      iVar4 = 4;
    }
  }
  sub_080033F0(param_1 + 0x6c,(&DAT_082b8698)[(iVar3 * 5 + iVar4) * 2]);
  if ((uVar6 + 1 < (uint)(bVar1 >> 2)) && (*(int *)(param_1 + 0x24) == 0)) {
    sub_080B9860(iVar2,param_1);
  }
  return in_lr;
}

