// sub_0802286C at 0x0802286C (thumb)

undefined4 sub_0802286C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(byte *)(param_1 + 0x121) - 1;
  *(byte *)(param_1 + 0x121) = (byte)iVar1;
  if (iVar1 == 0) {
    sub_080183BC(param_1);
    sub_08018654(param_1);
  }
  return in_lr;
}

