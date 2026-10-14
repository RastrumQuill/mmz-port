// sub_080A2BF4 at 0x080A2BF4 (thumb)

undefined4 sub_080A2BF4(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  sub_080128D4();
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -0x10;
  *(ushort *)(param_1 + 0x50) = (ushort)*(byte *)(param_1 + 0x12);
  *(ushort *)(param_1 + 0x52) = (ushort)*(byte *)(param_1 + 0x12);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  bVar1 = *(byte *)(param_1 + 0x12);
  uVar2 = (uint)bVar1;
  if (uVar2 == 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc)
    ;
    return in_lr;
  }
  if (uVar2 < 0x40) {
    if ((bVar1 & 0x1f) != 0) {
      bVar1 = *(byte *)(param_1 + 10) | 1;
      goto LAB_080a2c92;
    }
  }
  else {
    if ((int)(uVar2 * 0x1000000) < 0) {
      return in_lr;
    }
    if ((bVar1 & 0x3f) != 0) {
      bVar1 = *(byte *)(param_1 + 10) | 1;
      goto LAB_080a2c92;
    }
  }
  bVar1 = *(byte *)(param_1 + 10) & 0xfe;
LAB_080a2c92:
  *(byte *)(param_1 + 10) = bVar1;
  return in_lr;
}

