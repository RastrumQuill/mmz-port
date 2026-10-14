// sub_080278F4 at 0x080278F4 (thumb)

undefined4 sub_080278F4(int param_1)

{
  undefined4 in_lr;
  
  DAT_0202e914 = *(ushort *)(param_1 + 0x148);
  if (DAT_0202e914 == 0) {
    DAT_0202e914 = DAT_02000760 & 0x7fff;
    DAT_0202e916 = DAT_02000778 & 0x7fff;
  }
  else {
    DAT_0202e916 = DAT_0202e914;
    if (DAT_0202e914 == 0xffff) {
      DAT_0202e914 = 0;
      DAT_0202e916 = 0;
      if (*(int *)(param_1 + 0x10) != 0) {
        sub_0802B78C(*(int *)(param_1 + 0x10));
      }
    }
  }
  return in_lr;
}

