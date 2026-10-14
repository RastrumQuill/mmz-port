// sub_080D1DB8 at 0x080D1DB8 (thumb)

undefined4 sub_080D1DB8(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  DAT_0202dc38 = DAT_0202dc38 * 0x343fd + 0x269ec3 & 0x7fffffff;
  sub_0801CF00(param_1,0x1b);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
  *(undefined *)(param_1 + 0x4d) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf;
  uVar1 = (DAT_0202dc38 * 0x343fd + 0x269ec3 & 0x7fffffff) * 0x343fd + 0x269ec3;
  *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + ((uVar1 * 2 >> 0x11 & 3) - 2) * 0x100;
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar1 & 0x7fffffff;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + ((uVar1 * 2 >> 0x11 & 7) - 4) * 0x100;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  sub_080D19DC(param_1);
  return in_lr;
}

