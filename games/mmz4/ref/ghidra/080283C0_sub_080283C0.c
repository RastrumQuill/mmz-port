// sub_080283C0 at 0x080283C0 (thumb)

longlong sub_080283C0(int param_1)

{
  int iVar1;
  uint in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0xc) + 1) == '\0') {
    iVar1 = *(int *)(param_1 + 0x10);
    if (DAT_0202ea10 == '\0') {
      sub_08006D80();
      sub_0801F908(&DAT_0202e9f8,6);
      DAT_0202ea11 = 8;
      DAT_0202ea1a = 0;
    }
    DAT_0202ea40 = iVar1 + 0x54;
    DAT_0202ea30 = *(undefined4 *)(iVar1 + 0x54);
    DAT_0202ea34 = *(undefined4 *)(iVar1 + 0x58);
    DAT_030032e0 = DAT_030032e0 & 0x7f;
    DAT_0202ea44 = 0;
    DAT_0202ea4c = 0;
  }
  else {
    DAT_030032e0 = DAT_030032e0 & 0x7f;
  }
  DAT_030032e1 = 0;
  return (ulonglong)in_lr << 0x20;
}

