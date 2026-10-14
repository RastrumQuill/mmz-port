// sub_0810DFC0 at 0x0810DFC0 (thumb)

undefined4 sub_0810DFC0(int param_1,short param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = ((uint)(param_1 << 0x10) >> 0x18) * 4;
  uVar1 = *(ushort *)(((param_1 << 0x10 & 0xff0000U) >> 0xf) + *(int *)(&DAT_0886dff4 + iVar2));
  iVar2 = *(int *)(&DAT_0886e04c + iVar2);
  if (param_2 == 0) {
    sub_08002B10(6);
  }
  else {
    sub_08002B10(4);
  }
  DAT_0202f390 = 0;
  DAT_0202f3a0 = iVar2 + (uint)uVar1;
  sub_0810E024(&DAT_0202f388);
  sub_0810E048(&DAT_0202f388);
  DAT_0202f394 = 3;
  return in_lr;
}

