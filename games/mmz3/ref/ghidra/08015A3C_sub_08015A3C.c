// sub_08015A3C at 0x08015A3C (thumb)

undefined4 sub_08015A3C(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_lr;
  undefined4 local_20 [2];
  
  uVar1 = *(uint *)(param_1 + 0x5c);
  uVar4 = uVar1 << 0x10;
  uVar5 = uVar1 & 0xffff;
  if (DAT_0202f4a4 == '\0') {
    if ((DAT_0202e482 != 0) || (uVar1 = uVar4 >> 0x14, *(char *)(param_1 + 0x68) != DAT_0202f4a5)) {
      if (DAT_0202f4a5 == '\x01') {
        sub_08003B28(&DAT_08533170,((ushort)(&DAT_020023c4)[uVar4 >> 0x14] & 0x1f00) << 3,0x4c0);
      }
      else {
        sub_08003B28(&DAT_08532ca8,((ushort)(&DAT_020023c4)[uVar4 >> 0x14] & 0x1f00) << 3,0x4c0);
      }
      uVar1 = uVar5 >> 4;
      sub_08003B84(0,((ushort)(&DAT_020023c4)[uVar1] & 0x1f00) << 3,0x1000);
      *(char *)(param_1 + 0x68) = DAT_0202f4a5;
    }
    if (DAT_0202f4b4 != 0) {
      DAT_0202f4b8 = *(undefined4 *)(DAT_0202f4b4 + 0x54);
      DAT_0202f4bc = *(int *)(DAT_0202f4b4 + 0x58);
      if ((*(uint *)(&DAT_0202f5e0 + (uint)(*(byte *)(DAT_0202f4b4 + 0x1d) >> 5) * 4) &
          1 << (*(byte *)(DAT_0202f4b4 + 0x1d) & 0x1f)) != 0) {
        DAT_03002ec4 = 0x120;
        DAT_03002ec6 = 0x20;
      }
    }
    *(short *)(&DAT_020023cc + uVar1) =
         ((short)*(undefined4 *)(param_1 + 0x34) - (short)((uint)DAT_0202f4b8 >> 8)) + 0x30 +
         (short)((uint)*(undefined4 *)(param_1 + 0x2c) >> 8);
    iVar3 = *(int *)(param_1 + 0x38) - ((DAT_0202f4bc + -0x50000 >> 8) + 0x500);
    iVar2 = (*(int *)(param_1 + 0x30) >> 8) + 0x90;
  }
  else {
    if (DAT_0202e482 != 0) {
      local_20[0] = 0;
      sub_080FE110(local_20,((ushort)(&DAT_020023c4)[uVar4 >> 0x14] & 0x1f00) * 8 + 0x6000000,
                   0x1000400);
      sub_08004340(uVar1 & 0xff,&DAT_085222a0,0x4a,0,0);
    }
    if (DAT_0202f4c0 != 0) {
      DAT_0202f4cc = *DAT_0202f4c4;
      DAT_0202f4d0 = DAT_0202f4c4[1];
      if ((*(uint *)(&DAT_0202f5e0 + (uint)(*(byte *)(DAT_0202f4c0 + 0x1d) >> 5) * 4) &
          1 << (*(byte *)(DAT_0202f4c0 + 0x1d) & 0x1f)) != 0) {
        DAT_03002ec4 = 0x40;
        DAT_03002ec6 = 0x40;
      }
    }
    uVar1 = uVar5 >> 4;
    *(short *)(&DAT_020023cc + uVar1) =
         ((short)*(undefined4 *)(param_1 + 0x34) - (short)((uint)DAT_0202f4cc >> 8)) + 0x50 +
         (short)((uint)*(undefined4 *)(param_1 + 0x2c) >> 8);
    iVar3 = *(int *)(param_1 + 0x38) - ((DAT_0202f4d0 + -0x50000 >> 8) + 0x500);
    iVar2 = (*(int *)(param_1 + 0x30) >> 8) + 0x80;
  }
  *(short *)((int)&DAT_020023cc + uVar1 * 4 + 2) = (short)(iVar3 + iVar2);
  if (DAT_0202f4a5 != '\0') {
    iVar2 = (iVar3 + iVar2) * 0x10000;
    iVar3 = iVar2 >> 0x10;
    if (-0xa0 < iVar3) {
      DAT_020023c0 = (ushort)(uVar5 << 8) | DAT_020023c0;
      if (iVar3 < -0x20) {
        if (*(char *)(param_1 + 0x69) == '\0') {
          DAT_02002410 = DAT_02002410 | 0x4000;
          DAT_0200241e = DAT_0200241e | 0xe;
          DAT_02002416 = 0xff;
          if (DAT_0202f4a4 == '\0') {
            DAT_0200241d = 0xfb;
          }
          else {
            DAT_0200241d = 0xf3;
          }
          *(char *)(param_1 + 0x69) = '\x01';
        }
        DAT_0200241a = -(short)((uint)iVar2 >> 0x10) & 0xff;
        return in_lr;
      }
      if (*(char *)(param_1 + 0x69) == '\0') {
        return in_lr;
      }
      DAT_02002410 = DAT_02002410 & 0xbfff;
      DAT_0200241e = DAT_0200241e | 0xe;
      *(char *)(param_1 + 0x69) = '\0';
      return in_lr;
    }
  }
  DAT_020023c0 = DAT_020023c0 & ~(ushort)(uVar5 << 8);
  if (*(char *)(param_1 + 0x69) != '\0') {
    DAT_02002410 = DAT_02002410 & 0xbfff;
    DAT_0200241e = DAT_0200241e | 0xe;
    *(char *)(param_1 + 0x69) = '\0';
  }
  return in_lr;
}

