// sub_080EA1C8 at 0x080EA1C8 (thumb)

undefined4 sub_080EA1C8(uint param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = ((param_1 << 0x10) >> 0x18) * 4;
  uVar1 = *(ushort *)((param_1 & 0xff) * 2 + *(int *)(&DAT_08373644 + iVar2));
  iVar2 = *(int *)(&DAT_08373694 + iVar2);
  if ((param_1 & 0xff00) == 0x100) {
    if ((param_1 & 0xffff) == 0x100) {
      sub_0800471C(0x24);
    }
    else {
      sub_0800471C(6);
    }
  }
  DAT_02030c20 = param_2 & 0xffff;
  DAT_02030c30 = iVar2 + (uint)uVar1;
  sub_080EA32C(&DAT_02030c18);
  sub_080EA350(&DAT_02030c18);
  if (DAT_02030c1c == '\0') {
    DAT_02030c24 = 2;
  }
  else {
    DAT_02030c24 = 1;
  }
  return in_lr;
}

