// sub_080B3D2C at 0x080B3D2C (thumb)

undefined4 sub_080B3D2C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x1a0e);
  sub_080128D4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
  iVar1 = (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x11) + 0x40 & 0xff] * 0xc0;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar1 >> 8;
  iVar1 = (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x11)] * 0xc0;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar1 >> 8;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080B3B44(param_1);
  return in_lr;
}

