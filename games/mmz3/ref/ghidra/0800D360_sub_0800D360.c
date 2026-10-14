// sub_0800D360 at 0x0800D360 (thumb)

undefined4 sub_0800D360(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = (*(int *)(param_1 + 0x38) - (DAT_0202e48c >> 8)) -
          (((int)((uint)(ushort)(&DAT_080fe64c)[*(byte *)(param_1 + 0x68)] << 0x10) >> 0x16) + -5);
  if (iVar2 < -0xb4) {
    iVar2 = -0xb4;
  }
  if (iVar2 < 0) {
    DAT_02002410 = DAT_02002410 | 0x4000;
    DAT_0200241d = 0xfb;
    DAT_0200241e = DAT_0200241e | 0xe;
    DAT_02002416 = 0xff;
    DAT_0200241a = -(short)iVar2 & 0xff;
  }
  else {
    DAT_0200241a = 0;
  }
  uVar1 = (*(uint *)(param_1 + 0x5c) & 0xffff) >> 4;
  *(short *)(&DAT_020023cc + uVar1) = (short)*(undefined4 *)(param_1 + 0x34);
  *(short *)((int)&DAT_020023cc + uVar1 * 4 + 2) = (short)iVar2;
  return in_lr;
}

