// sub_0800F128 at 0x0800F128 (thumb)

undefined4 sub_0800F128(int param_1)

{
  undefined4 in_lr;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    local_18 = 0;
    local_14 = 0;
    sub_08005664(param_1 + 0x14,&local_18,
                 ((ushort)(&DAT_02000f94)[*(uint *)(param_1 + 0x5c) >> 4] & 0x1f00) * 8 + 0x6000000)
    ;
    sub_080069A0(param_1 + 0x14,&DAT_02000f9c + (*(uint *)(param_1 + 0x5c) >> 4));
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

