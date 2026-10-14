// sub_080373DC at 0x080373DC (thumb)

undefined4 sub_080373DC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(byte *)(param_1 + 0x12) - 1;
  *(char *)(param_1 + 0x12) = (char)iVar1;
  if (iVar1 == 0) {
    *(undefined2 *)(param_1 + 0xe) = 1;
    sub_08038A5C(param_1,5);
  }
  return in_lr;
}

