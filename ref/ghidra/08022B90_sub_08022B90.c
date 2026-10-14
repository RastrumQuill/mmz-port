// sub_08022B90 at 0x08022B90 (thumb)

undefined4 sub_08022B90(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(byte *)(param_1 + 0x121) - 1;
  *(byte *)(param_1 + 0x121) = (byte)iVar1;
  if (iVar1 == 0) {
    sub_08018420(param_1);
    sub_08018670(param_1);
  }
  return in_lr;
}

