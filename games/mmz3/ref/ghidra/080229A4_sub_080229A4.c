// sub_080229A4 at 0x080229A4 (thumb)

longlong sub_080229A4(int param_1)

{
  int iVar1;
  uint in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0xc) + 1) == '\0') {
    iVar1 = *(int *)(param_1 + 0x10);
    if (DAT_020302a0 == '\0') {
      sub_08008E20();
      sub_0801A7D8(&DAT_02030288,6);
      DAT_020302a1 = 8;
      DAT_020302aa = 0;
    }
    DAT_020302d0 = iVar1 + 0x54;
    DAT_020302c0 = *(undefined4 *)(iVar1 + 0x54);
    DAT_020302c4 = *(undefined4 *)(iVar1 + 0x58);
    DAT_030032e0 = DAT_030032e0 & 0x7f;
    DAT_020302d4 = 0;
    DAT_020302dc = 0;
  }
  else {
    DAT_030032e0 = DAT_030032e0 & 0x7f;
  }
  DAT_030032e1 = 0;
  return (ulonglong)in_lr << 0x20;
}

