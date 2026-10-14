// sub_08089400 at 0x08089400 (thumb)

undefined8 sub_08089400(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  bool local_14;
  bool local_13;
  
  if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
    iVar3 = *(int *)(param_1 + 0x58) + 0x800;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x58) + -0x800;
  }
  iVar1 = sub_08008F50(*(int *)(param_1 + 0x54) + -0x800,iVar3);
  iVar2 = sub_08008F50(*(undefined4 *)(param_1 + 0x54),iVar3);
  local_14 = 0 < iVar2 || 0 < iVar1;
  iVar3 = sub_08008F50(*(int *)(param_1 + 0x54) + 0x800,iVar3);
  local_14 = 0 < iVar3 || local_14;
  uVar4 = *(undefined4 *)(param_1 + 0x58);
  iVar3 = sub_08008DE8(*(int *)(param_1 + 0x54) + -0x800,uVar4);
  iVar1 = sub_08008DE8(*(undefined4 *)(param_1 + 0x54),uVar4);
  local_13 = iVar1 < 0 || iVar3 < 0;
  iVar3 = sub_08008DE8(*(int *)(param_1 + 0x54) + 0x800,uVar4);
  local_13 = iVar3 < 0 || local_13;
  return CONCAT44(in_lr,(uint)(local_14 && local_13));
}

