// sub_080D83A0 at 0x080D83A0 (thumb)

undefined4 sub_080D83A0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x5c) + 0x30;
  *(int *)(param_1 + 0x5c) = iVar1;
  if (0x27ff < iVar1) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined4 *)(param_1 + 0x5c) = 0x2800;
    *(undefined *)(param_1 + 0xb7) = 1;
  }
  return in_lr;
}

