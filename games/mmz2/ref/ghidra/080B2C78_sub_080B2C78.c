// sub_080B2C78 at 0x080B2C78 (thumb)

undefined4 sub_080B2C78(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined *)(param_1 + 0x22) = 1;
  uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar2 & 0x7fffffff;
  if ((uVar2 * 2 >> 0x11 & 1) == 0) {
    sub_080127E4(param_1,0x1523);
  }
  else {
    sub_080127E4(param_1,0x1522);
  }
  sub_080128D4(param_1);
  uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar2 & 0x7fffffff;
  uVar2 = uVar2 * 2 >> 0x11 & 1;
  if (uVar2 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar2;
  pbVar4 = (byte *)(param_1 + 0x4a);
  *pbVar4 = *pbVar4 & 0xef | (byte)(uVar2 << 4);
  uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar2 & 0x7fffffff;
  uVar2 = uVar2 * 2 >> 0x11 & 1;
  if (uVar2 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4d) = (char)uVar2;
  *pbVar4 = *pbVar4 & 0xdf | (byte)(uVar2 << 5);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x58);
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffd60;
    uVar3 = 0xfffffd00;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0x2a0;
    uVar3 = 0x300;
  }
  *(undefined4 *)(param_1 + 0x60) = uVar3;
  uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
  *(uint *)(param_1 + 100) = ((uVar2 * 2 >> 0x11 & 0xf) + 8) * -0x40;
  uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar2 & 0x7fffffff;
  *(uint *)(param_1 + 0x68) = ((uVar2 * 2 >> 0x11 & 0xf) + 0xc) * -0x40;
  *(undefined *)(param_1 + 0x12) = 0x20;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080B2A80(param_1);
  return in_lr;
}

