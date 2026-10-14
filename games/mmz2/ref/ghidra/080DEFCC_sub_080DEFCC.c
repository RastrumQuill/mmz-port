// sub_080DEFCC at 0x080DEFCC (thumb)

undefined4 sub_080DEFCC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = ((uint)(param_1 << 0x10) >> 0x18) * 4;
  DAT_0202f670 = *(int *)(&DAT_0834f364 + iVar1) +
                 (uint)*(ushort *)
                        (((param_1 << 0x10 & 0xff0000U) >> 0xf) + *(int *)(&DAT_0834f314 + iVar1));
  DAT_0202f660 = 1;
  if ((char)DAT_0202f664 == '\x01') {
    DAT_0202f65a = 1;
    DAT_0202f664 = CONCAT22(DAT_0202f664._2_2_,0x501);
    DAT_0202f678 = DAT_0202f670;
  }
  else {
    sub_080DF050(&DAT_0202f658);
    sub_080DF074(&DAT_0202f658);
    if (DAT_0202f65c == '\0') {
      DAT_0202f664 = 2;
    }
    else {
      DAT_0202f664 = 1;
    }
  }
  DAT_0202f658 = 1;
  return in_lr;
}

