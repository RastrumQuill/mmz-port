// sub_080B88EC at 0x080B88EC (thumb)

undefined4 sub_080B88EC(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  sub_080126A0();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x6800);
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
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar2 << 4);
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3;
  uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
  uVar3 = (uVar2 * 2 >> 0x11 & 0x7f) + 0x100;
  uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
  *(short *)(param_1 + 0x50) = (short)uVar3;
  *(short *)(param_1 + 0x52) = (short)(uVar3 >> 1);
  *(byte *)(param_1 + 0x24) = *(char *)(param_1 + 0x11) * '@' + ((byte)(uVar2 * 2 >> 0x11) & 0x3f);
  uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar2 & 0x7fffffff;
  *(byte *)(param_1 + 0x12) = (byte)(uVar2 * 2 >> 0x11) & 3;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080B8854(param_1);
  return in_lr;
}

