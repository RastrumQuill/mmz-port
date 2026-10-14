// sub_080F78EC at 0x080F78EC (thumb)

undefined4 sub_080F78EC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x58) + 0x120;
  *(int *)(param_1 + 0x58) = iVar1;
  if (*(int *)(param_1 + 0x68) < iVar1) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x68);
    *(undefined *)(param_1 + 0xd) = 0;
  }
  return in_lr;
}

