// sub_0800F890 at 0x0800F890 (thumb)

undefined4 sub_0800F890(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined4 local_20 [2];
  
  uVar1 = *(uint *)(param_1 + 0x5c);
  uVar2 = uVar1 & 0xffff;
  if (DAT_0202f4a6 == '\0') {
    DAT_020023c0 = DAT_020023c0 & ~(ushort)(uVar2 << 8);
  }
  else {
    DAT_020023c0 = (ushort)(uVar2 << 8) | DAT_020023c0;
  }
  uVar2 = uVar2 >> 4;
  if (DAT_0202e482 != 0) {
    local_20[0] = 0;
    sub_080FE110(local_20,((ushort)(&DAT_020023c4)[uVar2] & 0x1f00) * 8 + 0x6000000,0x1000400);
    sub_08004340(uVar1 & 0xff,&DAT_085222a0,0x59,0,0);
  }
  if (DAT_0202f4b8 != 0) {
    DAT_0202f4bc = *(undefined4 *)(DAT_0202f4b8 + 0x54);
    DAT_0202f4c0 = *(undefined4 *)(DAT_0202f4b8 + 0x58);
    if ((*(uint *)(&DAT_0202f5e0 + (uint)(*(byte *)(DAT_0202f4b8 + 0x1d) >> 5) * 4) &
        1 << (*(byte *)(DAT_0202f4b8 + 0x1d) & 0x1f)) != 0) {
      DAT_03002ec4 = 0x180;
      DAT_03002ec6 = 0x20;
    }
  }
  *(short *)(&DAT_020023cc + uVar2) =
       ((short)*(undefined4 *)(param_1 + 0x34) - (short)((uint)DAT_0202f4bc >> 8)) + 0x30 +
       (short)((uint)*(undefined4 *)(param_1 + 0x2c) >> 8);
  *(short *)((int)&DAT_020023cc + uVar2 * 4 + 2) =
       ((short)*(undefined4 *)(param_1 + 0x38) - (short)((uint)DAT_0202f4c0 >> 8)) + 0x90 +
       (short)((uint)*(undefined4 *)(param_1 + 0x30) >> 8);
  return in_lr;
}

