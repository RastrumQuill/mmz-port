// sub_080503A4 at 0x080503A4 (thumb)

undefined4 sub_080503A4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar1 = sub_08008360(*(int *)(param_1 + 0x4c) + -0x800,*(undefined4 *)(param_1 + 0x50));
  iVar2 = sub_08008360(*(int *)(param_1 + 0x4c) + 0x800,*(undefined4 *)(param_1 + 0x50));
  iVar3 = *(int *)(param_1 + 0x50) + 0x800;
  if ((iVar3 < iVar1) && (iVar3 < iVar2)) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_0800561C(param_1 + 0x74,&DAT_082af358);
  }
  else if (iVar1 < iVar2) {
    *(int *)(param_1 + 0x50) = iVar1;
  }
  else {
    *(int *)(param_1 + 0x50) = iVar2;
  }
  return in_lr;
}

