// sub_0810DF3C at 0x0810DF3C (thumb)

undefined4 sub_0810DF3C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = ((uint)(param_1 << 0x10) >> 0x18) * 4;
  DAT_0202f3a0 = *(int *)(&DAT_0886e04c + iVar1) +
                 (uint)*(ushort *)
                        (((param_1 << 0x10 & 0xff0000U) >> 0xf) + *(int *)(&DAT_0886dff4 + iVar1));
  DAT_0202f390 = 1;
  if ((char)DAT_0202f394 == '\x01') {
    DAT_0202f38a = 1;
    DAT_0202f394 = CONCAT22(DAT_0202f394._2_2_,0x501);
    DAT_0202f3a8 = DAT_0202f3a0;
  }
  else {
    sub_0810E024(&DAT_0202f388);
    sub_0810E048(&DAT_0202f388);
    if (DAT_0202f38c == '\0') {
      DAT_0202f394 = 2;
    }
    else {
      DAT_0202f394 = 1;
    }
  }
  DAT_0202f388 = 1;
  return in_lr;
}

