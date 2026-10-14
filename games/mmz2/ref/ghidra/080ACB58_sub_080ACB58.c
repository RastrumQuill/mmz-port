// sub_080ACB58 at 0x080ACB58 (thumb)

undefined4 sub_080ACB58(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_080127E4(param_1,0xc);
  *(undefined4 *)(param_1 + 0x5c) = 0x200;
  uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
  *(uint *)(param_1 + 0x60) = (uVar1 * 2 >> 0x11 & 0xff) + 0x400;
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x54);
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  *(char *)(param_1 + 0x12) = (char)(uVar1 * 2 >> 0x11);
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar1 & 0x7fffffff;
  *(char *)(param_1 + 0x13) = (char)(uVar1 * 2 >> 0x11);
  *(undefined4 *)(param_1 + 0x78) = 0x80;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080AC908(param_1);
  return in_lr;
}

