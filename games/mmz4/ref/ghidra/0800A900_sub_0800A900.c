// sub_0800A900 at 0x0800A900 (thumb)

undefined4 sub_0800A900(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    (&DAT_02000a04)[*(uint *)(param_1 + 0x5c) >> 4] =
         (&DAT_02000a04)[*(uint *)(param_1 + 0x5c) >> 4] & 0xfffc | 2;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (DAT_0202dad4 == 1) {
    iVar1 = *(int *)(param_1 + 0x4c) + -9;
  }
  else {
    if (DAT_0202dad4 < 3) {
      return in_lr;
    }
    if ((ushort)DAT_0202daf8 < 0x500) {
      DAT_0202daf8._0_2_ = (ushort)DAT_0202daf8 + 8;
    }
    iVar1 = *(int *)(param_1 + 0x4c) - (uint)((ushort)DAT_0202daf8 >> 8);
  }
  *(int *)(param_1 + 0x4c) = iVar1;
  return in_lr;
}

