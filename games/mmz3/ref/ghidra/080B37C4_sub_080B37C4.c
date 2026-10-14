// sub_080B37C4 at 0x080B37C4 (thumb)

undefined4 sub_080B37C4(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  sub_0801749C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  DAT_0202f608 = DAT_0202f608 * 0x343fd + 0x269ec3 & 0x7fffffff;
  sub_08017700(param_1,0x1b);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
  *(undefined *)(param_1 + 0x4d) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf;
  uVar1 = (DAT_0202f608 * 0x343fd + 0x269ec3 & 0x7fffffff) * 0x343fd + 0x269ec3;
  *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + ((uVar1 * 2 >> 0x11 & 3) - 2) * 0x100;
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar1 & 0x7fffffff;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + ((uVar1 * 2 >> 0x11 & 7) - 4) * 0x100;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 4);
  sub_080B33E8(param_1);
  return in_lr;
}

