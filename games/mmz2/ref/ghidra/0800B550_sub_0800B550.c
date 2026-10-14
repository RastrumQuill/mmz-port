// sub_0800B550 at 0x0800B550 (thumb)

undefined4 sub_0800B550(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  iVar1 = param_1 + 0x14;
  local_18 = (*(int *)(param_1 + 0x2c) >> 8) + *(int *)(param_1 + 0x34);
  local_14 = (*(int *)(param_1 + 0x30) >> 8) + *(int *)(param_1 + 0x38) + -0x280;
  if ((((*(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x3c)) + 0xfU < 0x1f) &&
      ((*(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x40)) + 0xfU < 0x1f)) &&
     ((char)DAT_0202e028 == '\0')) {
    sub_080067A8(iVar1,&local_18,
                 ((ushort)(&DAT_02000f94)[*(uint *)(param_1 + 0x5c) >> 4] & 0x1f00) * 8 + 0x6000000,
                 &DAT_020017e0);
  }
  else {
    sub_080066D4(iVar1,&local_18,
                 ((ushort)(&DAT_02000f94)[*(uint *)(param_1 + 0x5c) >> 4] & 0x1f00) * 8 + 0x6000000,
                 &DAT_020017e0);
  }
  DAT_0202e028._0_1_ = 0;
  sub_080069A0(iVar1,&DAT_02000f9c + (*(uint *)(param_1 + 0x5c) >> 4));
  return in_lr;
}

