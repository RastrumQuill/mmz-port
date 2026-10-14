// sub_080217D4 at 0x080217D4 (thumb)

undefined4 sub_080217D4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(byte *)(param_1 + 0x121) - 1;
  *(byte *)(param_1 + 0x121) = (byte)iVar1;
  if (iVar1 == 0) {
    sub_080183B0(param_1);
    sub_08018648(param_1);
  }
  return in_lr;
}

