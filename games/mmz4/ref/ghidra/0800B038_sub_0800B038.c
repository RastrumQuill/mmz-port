// sub_0800B038 at 0x0800B038 (thumb)

undefined4 sub_0800B038(int param_1)

{
  ushort uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    (&DAT_02000a04)[*(uint *)(param_1 + 0x5c) >> 4] =
         (&DAT_02000a04)[*(uint *)(param_1 + 0x5c) >> 4] & 0xfffc | 1;
    DAT_02000a40 = 0x3748;
    DAT_02000a42 = 0x10;
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (((*(char *)(param_1 + 0xe) == '\x01') && ((DAT_0202dad5 & 1) != 0)) &&
     (uVar1 = *(short *)(param_1 + 0x10) - 1, *(ushort *)(param_1 + 0x10) = uVar1, (uVar1 & 1) == 0)
     ) {
    if ((DAT_02000a42 & 0x1f) != 0) {
      if (*(int *)(DAT_020359b8 + 0x54) < 0x1c6000) {
        DAT_02000a42 = (DAT_02000a42 & 0x1f) - 1 & 0x1f | (0x10 - (DAT_02000a42 & 0x1f)) * 0x100;
        goto LAB_0800b0ea;
      }
      DAT_02000a42 = 0x1000;
    }
    *(undefined *)(param_1 + 0xe) = 2;
  }
LAB_0800b0ea:
  if (*(char *)(param_1 + 0xe) == '\x02') {
    DAT_02000a00 = DAT_02000a00 & ~(ushort)(*(int *)(param_1 + 0x5c) << 8);
    DAT_02000a40 = 0;
    *(undefined *)(param_1 + 0xe) = 3;
  }
  return in_lr;
}

