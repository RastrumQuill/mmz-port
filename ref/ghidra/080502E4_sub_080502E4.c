// sub_080502E4 at 0x080502E4 (thumb)

undefined4 sub_080502E4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  iVar1 = sub_08008360(*(int *)(param_1 + 0x4c) + -0x800,*(undefined4 *)(param_1 + 0x50));
  iVar2 = sub_08008360(*(int *)(param_1 + 0x4c) + 0x800,*(undefined4 *)(param_1 + 0x50));
  iVar3 = *(int *)(param_1 + 0x50) + 0x800;
  if ((iVar3 < iVar1) && (iVar3 < iVar2)) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else if (iVar1 < iVar2) {
    *(int *)(param_1 + 0x50) = iVar1;
  }
  else {
    *(int *)(param_1 + 0x50) = iVar2;
  }
  return in_lr;
}

