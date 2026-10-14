// sub_0805E0C0 at 0x0805E0C0 (thumb)

undefined8 sub_0805E0C0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  bool local_10;
  bool local_f;
  
  if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
    iVar3 = *(int *)(param_1 + 0x50) + -0x2e00;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x50) + 0x2e00;
  }
  iVar1 = sub_08007CF8(*(int *)(param_1 + 0x4c) + -0x700,iVar3);
  iVar2 = sub_08007CF8(*(undefined4 *)(param_1 + 0x4c),iVar3);
  local_10 = 0 < iVar2 || 0 < iVar1;
  iVar3 = sub_08007CF8(*(int *)(param_1 + 0x4c) + 0x700,iVar3);
  local_10 = 0 < iVar3 || local_10;
  if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
    iVar3 = *(int *)(param_1 + 0x50) + -0x100;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x50) + 0x100;
  }
  iVar1 = sub_08007B30(*(int *)(param_1 + 0x4c) + -0x700,iVar3);
  iVar2 = sub_08007B30(*(undefined4 *)(param_1 + 0x4c),iVar3);
  local_f = iVar2 < 0 || iVar1 < 0;
  iVar3 = sub_08007B30(*(int *)(param_1 + 0x4c) + 0x700,iVar3);
  local_f = iVar3 < 0 || local_f;
  return CONCAT44(in_lr,(uint)(local_f && local_10));
}

