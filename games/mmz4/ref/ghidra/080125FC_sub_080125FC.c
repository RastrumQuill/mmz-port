// sub_080125FC at 0x080125FC (thumb)

undefined4 sub_080125FC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  iVar1 = param_1 + 0x14;
  local_18 = (*(int *)(param_1 + 0x2c) >> 8) + *(int *)(param_1 + 0x34);
  local_14 = (*(int *)(param_1 + 0x30) >> 8) + *(int *)(param_1 + 0x38) + 800;
  if ((((*(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x3c)) + 0xfU < 0x1f) &&
      ((*(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x40)) + 0xfU < 0x1f)) &&
     (DAT_0202dada._1_1_ == '\0')) {
    sub_08005124(iVar1,&local_18,
                 ((ushort)(&DAT_02000a04)[*(uint *)(param_1 + 0x5c) >> 4] & 0x1f00) * 8 + 0x6000000,
                 &DAT_02001290);
  }
  else {
    sub_08005050(iVar1,&local_18,
                 ((ushort)(&DAT_02000a04)[*(uint *)(param_1 + 0x5c) >> 4] & 0x1f00) * 8 + 0x6000000,
                 &DAT_02001290);
  }
  DAT_0202dada._1_1_ = 0;
  sub_0800531C(iVar1,&DAT_02000a0c + (*(uint *)(param_1 + 0x5c) >> 4) * 2);
  return in_lr;
}

