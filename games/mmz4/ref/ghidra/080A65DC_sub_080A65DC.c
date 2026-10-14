// sub_080A65DC at 0x080A65DC (thumb)

undefined4 sub_080A65DC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0802B3CC(*(undefined4 *)(param_1 + 0x2c));
  if (iVar1 != 0) {
    sub_08005784(param_1 + 0x74,&DAT_0885ef58);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

