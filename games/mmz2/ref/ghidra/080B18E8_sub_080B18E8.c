// sub_080B18E8 at 0x080B18E8 (thumb)

undefined4 sub_080B18E8(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(*(int *)(param_1 + 0x28) + 10) >> 4;
  uVar2 = bVar1 & 1;
  sub_08012580(param_1);
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar2;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar2 << 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined *)(param_1 + 0x25) = 0x19;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080127E4(param_1,0xa05);
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffe80;
  }
  else {
    uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
    *(uint *)(param_1 + 0x5c) =
         ((uVar2 * 2 >> 0x11 & 0xff) + 0x100) * ((uint)*(byte *)(param_1 + 0x11) * 2 + -1);
    uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar2 & 0x7fffffff;
    *(uint *)(param_1 + 0x60) = -0x400 - (uVar2 * 2 >> 0x11 & 0xff);
  }
  *(undefined *)(param_1 + 0x12) = 0xff;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080B19D4(param_1);
  return in_lr;
}

