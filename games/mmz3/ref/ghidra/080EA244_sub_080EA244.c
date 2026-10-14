// sub_080EA244 at 0x080EA244 (thumb)

undefined4 sub_080EA244(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = ((uint)(param_1 << 0x10) >> 0x18) * 4;
  DAT_02030c30 = *(int *)(&DAT_08373694 + iVar1) +
                 (uint)*(ushort *)
                        (((param_1 << 0x10 & 0xff0000U) >> 0xf) + *(int *)(&DAT_08373644 + iVar1));
  DAT_02030c20 = 1;
  if ((char)DAT_02030c24 == '\x01') {
    DAT_02030c1a = 1;
    DAT_02030c24 = CONCAT22(DAT_02030c24._2_2_,0x501);
    DAT_02030c38 = DAT_02030c30;
  }
  else {
    sub_080EA32C(&DAT_02030c18);
    sub_080EA350(&DAT_02030c18);
    if (DAT_02030c1c == '\0') {
      DAT_02030c24 = 2;
    }
    else {
      DAT_02030c24 = 1;
    }
  }
  DAT_02030c18 = 1;
  return in_lr;
}

