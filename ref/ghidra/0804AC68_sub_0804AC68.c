// sub_0804AC68 at 0x0804AC68 (thumb)

undefined8 sub_0804AC68(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  bool local_14;
  bool local_13;
  
  if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
    iVar3 = *(int *)(param_1 + 0x50) + 0x800;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x50) + -0x800;
  }
  iVar1 = sub_08007CF8(*(int *)(param_1 + 0x4c) + -0x800,iVar3);
  iVar2 = sub_08007CF8(*(undefined4 *)(param_1 + 0x4c),iVar3);
  local_14 = 0 < iVar2 || 0 < iVar1;
  iVar3 = sub_08007CF8(*(int *)(param_1 + 0x4c) + 0x800,iVar3);
  local_14 = 0 < iVar3 || local_14;
  uVar4 = *(undefined4 *)(param_1 + 0x50);
  iVar3 = sub_08007B30(*(int *)(param_1 + 0x4c) + -0x800,uVar4);
  iVar1 = sub_08007B30(*(undefined4 *)(param_1 + 0x4c),uVar4);
  local_13 = iVar1 < 0 || iVar3 < 0;
  iVar3 = sub_08007B30(*(int *)(param_1 + 0x4c) + 0x800,uVar4);
  local_13 = iVar3 < 0 || local_13;
  return CONCAT44(in_lr,(uint)(local_13 && local_14));
}

