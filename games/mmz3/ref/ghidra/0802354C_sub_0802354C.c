// sub_0802354C at 0x0802354C (thumb)

longlong sub_0802354C(int param_1)

{
  int iVar1;
  uint in_lr;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (*(char *)(iVar1 + 1) == '\0') {
    sub_08008F34();
    sub_08008BEC((int)*(short *)(*(int *)(param_1 + 0xc) + 2),&DAT_02002648);
  }
  else if (*(char *)(iVar1 + 1) == '\x01') {
    (&DAT_0202f4a4)[*(short *)(iVar1 + 2)] = (char)*(undefined4 *)(iVar1 + 4);
  }
  return (ulonglong)in_lr << 0x20;
}

