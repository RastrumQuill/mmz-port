// sub_080D1ED0 at 0x080D1ED0 (thumb)

undefined4 sub_080D1ED0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0xd);
  uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  *(byte *)(param_1 + 0x12) = ((byte)(uVar1 * 2 >> 0x11) & 7) + 0x3c;
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + ((uVar1 * 2 >> 0x11 & 3) - 2) * 0x100;
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar1 & 0x7fffffff;
  *(uint *)(param_1 + 0x60) = (uVar1 * 2 >> 0x11 & 0x3f) + 0xc0;
  uVar2 = DAT_0202cabc;
  if ((DAT_02000c80 & 0x7f) == 2) {
    uVar2 = sub_08007B84(param_1 + 0x54);
  }
  *(undefined4 *)(param_1 + 0x74) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  sub_080D19DC(param_1);
  return in_lr;
}

