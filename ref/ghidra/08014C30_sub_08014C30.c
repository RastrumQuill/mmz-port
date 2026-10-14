// sub_08014C30 at 0x08014C30 (thumb)

longlong sub_08014C30(int param_1)

{
  int iVar1;
  uint in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0xc) + 1) == '\0') {
    iVar1 = *(int *)(param_1 + 0x10);
    if (DAT_02022c5c == '\0') {
      sub_08006328();
      sub_08013C0C(&DAT_02022c44,3);
      DAT_02022c5d = 8;
      DAT_02022c66 = 0;
    }
    DAT_02022c7c = *(undefined4 *)(iVar1 + 0x4c);
    DAT_02022c80 = *(undefined4 *)(iVar1 + 0x50);
    DAT_02004fa0 = DAT_02004fa0 & 0x7f;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x10);
    DAT_02004fa0 = DAT_02004fa0 & 0x7f;
  }
  DAT_02004fa1 = 0;
  DAT_02022c98 = 0;
  DAT_02022c8c = iVar1 + 0x4c;
  DAT_02022c90 = DAT_02022c98;
  return (ulonglong)in_lr << 0x20;
}

