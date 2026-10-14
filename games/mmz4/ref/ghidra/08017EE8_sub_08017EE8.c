// sub_08017EE8 at 0x08017EE8 (thumb)

undefined4 sub_08017EE8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  undefined4 local_18 [2];
  
  iVar1 = *(int *)(param_1 + 0x5c);
  if (DAT_0202cab2 != 0) {
    sub_081284E4(&DAT_08b44ef0,
                 ((ushort)(&DAT_02000a04)[(uint)(iVar1 << 0x10) >> 0x14] & 0x1f00) * 8 + 0x6000000,
                 0x200);
    local_18[0] = 0;
    sub_081284E4(local_18,&DAT_06000800 +
                          ((ushort)(&DAT_02000a04)[(uint)(iVar1 << 0x10) >> 0x14] & 0x1f00) * 8,
                 0x1000200);
  }
  return in_lr;
}

