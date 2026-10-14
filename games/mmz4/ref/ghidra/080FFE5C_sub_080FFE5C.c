// sub_080FFE5C at 0x080FFE5C (thumb)

undefined4 sub_080FFE5C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (((DAT_02000a76 & 0x40) == 0) &&
     (iVar1 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54), iVar1 == 0)) {
    sub_08006984(0x36);
  }
  sub_08128884(param_1,*(undefined4 *)(&DAT_088681f8 + (uint)*(byte *)(param_1 + 0xd) * 4));
  sub_0801CFF0(param_1);
  *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  return in_lr;
}

