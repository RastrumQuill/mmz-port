// sub_0802282C at 0x0802282C (thumb)

undefined4 sub_0802282C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(byte *)(param_1 + 0x121) - 1;
  *(byte *)(param_1 + 0x121) = (byte)iVar1;
  if (iVar1 == 0) {
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 1;
    sub_08018C20(param_1,0x87,(int)*(char *)(param_1 + 0x71),(int)*(char *)(param_1 + 0x72));
  }
  return in_lr;
}

