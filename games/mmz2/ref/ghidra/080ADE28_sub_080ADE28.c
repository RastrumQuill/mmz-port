// sub_080ADE28 at 0x080ADE28 (thumb)

undefined4 sub_080ADE28(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0xd);
  sub_080128D4(param_1);
  uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
  *(byte *)(param_1 + 0x12) = ((byte)(uVar1 * 2 >> 0x11) & 7) + 0x3c;
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + ((uVar1 * 2 >> 0x11 & 3) - 2) * 0x100;
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar1 & 0x7fffffff;
  *(uint *)(param_1 + 0x60) = (uVar1 * 2 >> 0x11 & 0x3f) + 0xc0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080AD86C(param_1);
  return in_lr;
}

