// sub_080E09EC at 0x080E09EC (thumb)

undefined4 sub_080E09EC(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = (uint)*(byte *)(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(uint *)(param_1 + 0x5c) = -(uVar3 * 0x100 + -0x80);
  *(undefined4 *)(param_1 + 0x60) = 0xfffffe80;
  uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar2 & 0x7fffffff;
  *(byte *)(param_1 + 0x12) = ((byte)(uVar2 * 2 >> 0x11) & 3) + 0x10;
  sub_0801CC9C(param_1);
  if (uVar3 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)(uVar3 & 1);
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((uVar3 & 1) << 4);
  sub_0801CF00(param_1,0x8205);
  sub_080E0A9C(param_1);
  return in_lr;
}

