// sub_08016518 at 0x08016518 (thumb)

undefined4 sub_08016518(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    (&DAT_02000a04)[(uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14] =
         (&DAT_02000a04)[(uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14] & 0xfffc | 3;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0x100;
    *(undefined4 *)(param_1 + 0x48) = 0x100;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((((byte)DAT_0202dada & 1) == 0) && (0x880 < *(int *)(DAT_0202dbf0 + 0x54))) {
    sub_08002B10(0x175);
    DAT_0202dada._0_1_ = (byte)DAT_0202dada | 1;
  }
  *(int *)(param_1 + 0x50) = (int)((uint)(ushort)DAT_0202dadc << 0x10) >> 0x14;
  return in_lr;
}

