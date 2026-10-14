// sub_0802C07C at 0x0802C07C (thumb)

undefined4 sub_0802C07C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(byte *)(param_1 + 0x2b9) - 1;
  *(byte *)(param_1 + 0x2b9) = (byte)iVar1;
  if (iVar1 == 0) {
    sub_0803508C(param_1);
    sub_08035410(param_1);
  }
  return in_lr;
}

