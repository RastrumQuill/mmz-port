// sub_0801A67C at 0x0801A67C (thumb)

undefined4 sub_0801A67C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    (&DAT_02000a04)[*(uint *)(param_1 + 0x5c) >> 4] =
         (&DAT_02000a04)[*(uint *)(param_1 + 0x5c) >> 4] & 0xfffc | 2;
    DAT_02000a40 = 0x3b44;
    DAT_0202dae5 = 0x10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  DAT_02000a42 = DAT_0202dae5 & 0x1f | (0x10 - (ushort)DAT_0202dae5) * 0x100;
  return in_lr;
}

