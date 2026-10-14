// sub_0800BB38 at 0x0800BB38 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_0800BB38(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  undefined4 local_24 [2];
  
  uVar1 = *(uint *)(param_1 + 0x5c) & 0xffff;
  if (DAT_0202f4a5 == '\0') {
    DAT_020023c0 = DAT_020023c0 & ~(ushort)(uVar1 << 8);
  }
  else {
    DAT_020023c0 = (ushort)(uVar1 << 8) | DAT_020023c0;
  }
  uVar1 = uVar1 >> 4;
  if (DAT_0202e482 != 0) {
    sub_080FE110(&DAT_08526bb8,((ushort)(&DAT_020023c4)[uVar1] & 0x1f00) * 8 + 0x6000000,0x200);
    local_24[0] = 0;
    sub_080FE110(local_24,((ushort)(&DAT_020023c4)[uVar1] & 0x1f00) * 8 + 0x6000800,0x1000200);
  }
  if (_DAT_0202f4a8 != 0) {
    DAT_0202f4ac = *(undefined4 *)(_DAT_0202f4a8 + 0x54);
    DAT_0202f4b0 = *(undefined4 *)(_DAT_0202f4a8 + 0x58);
    if ((*(uint *)(&DAT_0202f5e0 + (uint)(*(byte *)(_DAT_0202f4a8 + 0x1d) >> 5) * 4) &
        1 << (*(byte *)(_DAT_0202f4a8 + 0x1d) & 0x1f)) != 0) {
      DAT_03002ec4 = 0x180;
      DAT_03002ec6 = 0x20;
    }
  }
  *(short *)(&DAT_020023cc + uVar1) =
       ((short)*(undefined4 *)(param_1 + 0x34) - (short)((uint)DAT_0202f4ac >> 8)) + 0x30 +
       (short)((uint)*(undefined4 *)(param_1 + 0x2c) >> 8);
  *(short *)((int)&DAT_020023cc + uVar1 * 4 + 2) =
       ((short)*(undefined4 *)(param_1 + 0x38) - (short)((uint)DAT_0202f4b0 >> 8)) + 0x90 +
       (short)((uint)*(undefined4 *)(param_1 + 0x30) >> 8);
  return in_lr;
}

