// sub_08024360 at 0x08024360 (thumb)

undefined4 sub_08024360(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(byte *)(param_1 + 0x121) - 1;
  *(byte *)(param_1 + 0x121) = (byte)iVar1;
  if (iVar1 == 0) {
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 2;
    sub_08018C20(param_1,0x21,0,1);
    sub_08027188(param_1,8,0);
  }
  return in_lr;
}

