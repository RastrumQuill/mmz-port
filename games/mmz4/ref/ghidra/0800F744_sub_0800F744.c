// sub_0800F744 at 0x0800F744 (thumb)

undefined4 sub_0800F744(int param_1)

{
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  local_18 = (*(int *)(param_1 + 0x2c) >> 8) + *(int *)(param_1 + 0x34) + 0x1e0;
  local_14 = (*(int *)(param_1 + 0x30) >> 8) + *(int *)(param_1 + 0x38);
  sub_08005050(param_1 + 0x14,&local_18,
               ((ushort)(&DAT_02000a04)[*(uint *)(param_1 + 0x5c) >> 4] & 0x1f00) * 8 + 0x6000000,
               &DAT_02001290);
  sub_0800531C(param_1 + 0x14,&DAT_02000a0c + (*(uint *)(param_1 + 0x5c) >> 4) * 2);
  return in_lr;
}

