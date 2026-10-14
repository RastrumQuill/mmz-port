// sub_0801C160 at 0x0801C160 (thumb)

longlong sub_0801C160(int param_1)

{
  int iVar1;
  uint in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0xc) + 1) == '\0') {
    iVar1 = *(int *)(param_1 + 0x10);
    if (DAT_0202ed30 == '\0') {
      sub_08008188();
      sub_08014FBC(&DAT_0202ed18,3);
      DAT_0202ed31 = 8;
      DAT_0202ed3a = 0;
    }
    DAT_0202ed60 = iVar1 + 0x54;
    DAT_0202ed50 = *(undefined4 *)(iVar1 + 0x54);
    DAT_0202ed54 = *(undefined4 *)(iVar1 + 0x58);
    DAT_030032e0 = DAT_030032e0 & 0x7f;
    DAT_0202ed64 = 0;
    DAT_0202ed6c = 0;
  }
  else {
    DAT_030032e0 = DAT_030032e0 & 0x7f;
  }
  DAT_030032e1 = 0;
  return (ulonglong)in_lr << 0x20;
}

