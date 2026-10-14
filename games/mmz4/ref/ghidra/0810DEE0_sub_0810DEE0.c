// sub_0810DEE0 at 0x0810DEE0 (thumb)

undefined4 sub_0810DEE0(int param_1,uint param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  DAT_0202f390 = param_2 & 0xffff;
  iVar1 = ((uint)(param_1 << 0x10) >> 0x18) * 4;
  DAT_0202f3a0 = *(int *)(&DAT_0886e04c + iVar1) +
                 (uint)*(ushort *)
                        (((param_1 << 0x10 & 0xff0000U) >> 0xf) + *(int *)(&DAT_0886dff4 + iVar1));
  sub_0810E024(&DAT_0202f388);
  sub_0810E048(&DAT_0202f388);
  if (DAT_0202f38c == '\0') {
    DAT_0202f394 = 2;
  }
  else {
    DAT_0202f394 = 1;
  }
  return in_lr;
}

