// sub_0801CC40 at 0x0801CC40 (thumb)

longlong sub_0801CC40(int param_1)

{
  int iVar1;
  uint in_lr;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (*(char *)(iVar1 + 1) == '\0') {
    sub_0800829C();
    sub_08007F64((int)*(short *)(*(int *)(param_1 + 0xc) + 2),&DAT_020011c8);
  }
  else if (*(char *)(iVar1 + 1) == '\x01') {
    (&DAT_0202e01c)[*(short *)(iVar1 + 2)] = (char)*(undefined4 *)(iVar1 + 4);
  }
  return (ulonglong)in_lr << 0x20;
}

