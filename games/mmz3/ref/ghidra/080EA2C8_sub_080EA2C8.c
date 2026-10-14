// sub_080EA2C8 at 0x080EA2C8 (thumb)

undefined4 sub_080EA2C8(int param_1,short param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = ((uint)(param_1 << 0x10) >> 0x18) * 4;
  uVar1 = *(ushort *)(((param_1 << 0x10 & 0xff0000U) >> 0xf) + *(int *)(&DAT_08373644 + iVar2));
  iVar2 = *(int *)(&DAT_08373694 + iVar2);
  if (param_2 == 0) {
    sub_0800471C(6);
  }
  else {
    sub_0800471C(4);
  }
  DAT_02030c20 = 0;
  DAT_02030c30 = iVar2 + (uint)uVar1;
  sub_080EA32C(&DAT_02030c18);
  sub_080EA350(&DAT_02030c18);
  DAT_02030c24 = 3;
  return in_lr;
}

