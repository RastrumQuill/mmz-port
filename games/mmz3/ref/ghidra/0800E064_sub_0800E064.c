// sub_0800E064 at 0x0800E064 (thumb)

undefined4 sub_0800E064(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  iVar1 = param_1 + 0x14;
  local_18 = (*(int *)(param_1 + 0x2c) >> 8) + *(int *)(param_1 + 0x34);
  local_14 = (*(int *)(param_1 + 0x30) >> 8) + *(int *)(param_1 + 0x38) + 0x640;
  if ((((*(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x3c)) + 0xfU < 0x1f) &&
      ((*(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x40)) + 0xfU < 0x1f)) &&
     ((char)DAT_0202f4ac == '\0')) {
    sub_08006D30(iVar1,&local_18,
                 ((ushort)(&DAT_020023c4)[*(uint *)(param_1 + 0x5c) >> 4] & 0x1f00) * 8 + 0x6000000,
                 &DAT_02002c60);
  }
  else {
    sub_08006C5C(iVar1,&local_18,
                 ((ushort)(&DAT_020023c4)[*(uint *)(param_1 + 0x5c) >> 4] & 0x1f00) * 8 + 0x6000000,
                 &DAT_02002c60);
  }
  DAT_0202f4ac._0_1_ = 0;
  sub_08006F28(iVar1,&DAT_020023cc + (*(uint *)(param_1 + 0x5c) >> 4));
  return in_lr;
}

