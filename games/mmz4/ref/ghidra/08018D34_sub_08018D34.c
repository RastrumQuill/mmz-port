// sub_08018D34 at 0x08018D34 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_08018D34(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  undefined4 local_24 [2];
  
  uVar1 = *(uint *)(param_1 + 0x5c) & 0xffff;
  if (((DAT_0202e8b4 & 0x20) == 0) && ((char)DAT_0202dada != '\x01')) {
    DAT_02000a00 = (ushort)(uVar1 << 8) | DAT_02000a00;
  }
  else {
    DAT_02000a00 = DAT_02000a00 & ~(ushort)(uVar1 << 8);
  }
  uVar1 = uVar1 >> 4;
  if (DAT_0202cab2 != 0) {
    local_24[0] = 0;
    sub_081284E4(local_24,((ushort)(&DAT_02000a04)[uVar1] & 0x1f00) * 8 + 0x6000000,0x1000200);
    sub_081284E4(&DAT_08b4af50,&DAT_06000800 + ((ushort)(&DAT_02000a04)[uVar1] & 0x1f00) * 8,0x200);
  }
  (&DAT_02000a0c)[uVar1 * 2] =
       ((short)*(undefined4 *)(param_1 + 0x34) - (short)((uint)DAT_0202dae0 >> 8)) + 0x50 +
       (short)DAT_0202dae8 + (short)((uint)*(undefined4 *)(param_1 + 0x2c) >> 8);
  (&DAT_02000a0e)[uVar1 * 2] =
       ((short)*(undefined4 *)(param_1 + 0x38) - (short)((uint)_DAT_0202dae4 >> 8)) +
       DAT_0202dae8._2_2_ + (short)((uint)*(undefined4 *)(param_1 + 0x30) >> 8);
  return in_lr;
}

