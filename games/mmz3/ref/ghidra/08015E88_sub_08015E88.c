// sub_08015E88 at 0x08015E88 (thumb)

undefined4 sub_08015E88(int param_1)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  undefined4 local_20 [2];
  
  uVar2 = *(uint *)(param_1 + 0x5c);
  if (DAT_0202f4a4 == '\0') {
    sub_08009550(param_1);
  }
  else {
    if (DAT_0202e482 != 0) {
      local_20[0] = 0;
      sub_080FE110(local_20,((ushort)(&DAT_020023c4)[(uVar2 << 0x10) >> 0x14] & 0x1f00) * 8 +
                            0x6000000,0x1000400);
      sub_08004340(uVar2 & 0xff,&DAT_085222a0,0x4b,0,0);
    }
    if (DAT_0202f4c0 != 0) {
      DAT_0202f4d4 = *DAT_0202f4c8;
      DAT_0202f4d8 = DAT_0202f4c8[1];
    }
    uVar3 = (uVar2 << 0x10) >> 0x14;
    *(short *)(&DAT_020023cc + uVar3) =
         ((short)*(undefined4 *)(param_1 + 0x34) - (short)((uint)DAT_0202f4d4 >> 8)) + 0xe0 +
         (short)((uint)*(undefined4 *)(param_1 + 0x2c) >> 8);
    sVar1 = ((short)*(undefined4 *)(param_1 + 0x38) -
            ((short)((uint)(DAT_0202f4d8 + -0x50000) >> 8) + 0x500)) +
            (short)((uint)*(undefined4 *)(param_1 + 0x30) >> 8) + 0x70;
    *(short *)((int)&DAT_020023cc + uVar3 * 4 + 2) = sVar1;
    if ((DAT_0202f4a5 == '\0') || (sVar1 < -0x9f)) {
      DAT_020023c0 = DAT_020023c0 & ~(ushort)((uVar2 & 0xffff) << 8);
    }
    else {
      DAT_020023c0 = (ushort)((uVar2 & 0xffff) << 8) | DAT_020023c0;
    }
  }
  return in_lr;
}

