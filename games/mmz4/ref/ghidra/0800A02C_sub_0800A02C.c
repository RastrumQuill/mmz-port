// sub_0800A02C at 0x0800A02C (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_0800A02C(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  undefined4 local_24 [2];
  
  uVar1 = *(uint *)(param_1 + 0x5c) & 0xffff;
  if (DAT_0202dad5 == '\0') {
    DAT_02000a00 = DAT_02000a00 & ~(ushort)(uVar1 << 8);
  }
  else {
    DAT_02000a00 = (ushort)(uVar1 << 8) | DAT_02000a00;
  }
  uVar1 = uVar1 >> 4;
  if (DAT_0202cab2 != 0) {
    sub_081284E4(&DAT_08b37e88,((ushort)(&DAT_02000a04)[uVar1] & 0x1f00) * 8 + 0x6000000,0x200);
    local_24[0] = 0;
    sub_081284E4(local_24,&DAT_06000800 + ((ushort)(&DAT_02000a04)[uVar1] & 0x1f00) * 8,0x1000200);
  }
  if (_DAT_0202dad8 != 0) {
    DAT_0202dadc = *(undefined4 *)(_DAT_0202dad8 + 0x54);
    DAT_0202dae0 = *(undefined4 *)(_DAT_0202dad8 + 0x58);
    if ((*(uint *)(&DAT_0202dc10 + (uint)(*(byte *)(_DAT_0202dad8 + 0x1d) >> 5) * 4) &
        1 << (*(byte *)(_DAT_0202dad8 + 0x1d) & 0x1f)) != 0) {
      DAT_03002ec4 = 0x180;
      DAT_03002ec6 = 0x20;
    }
  }
  (&DAT_02000a0c)[uVar1 * 2] =
       ((short)*(undefined4 *)(param_1 + 0x34) - (short)((uint)DAT_0202dadc >> 8)) + 0x30 +
       (short)((uint)*(undefined4 *)(param_1 + 0x2c) >> 8);
  (&DAT_02000a0e)[uVar1 * 2] =
       ((short)*(undefined4 *)(param_1 + 0x38) - (short)((uint)DAT_0202dae0 >> 8)) + 0x90 +
       (short)((uint)*(undefined4 *)(param_1 + 0x30) >> 8);
  return in_lr;
}

