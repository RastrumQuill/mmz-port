// sub_080DA744 at 0x080DA744 (thumb)

undefined4 sub_080DA744(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(uint *)(param_1 + 0x5c) = (uVar2 * -2 + 1) * 0x40;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined *)(param_1 + 0x12) = 0x14;
  sub_0801CC9C(param_1);
  if (uVar2 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)(uVar2 & 1);
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((uVar2 & 1) << 4);
  sub_0801CF00(param_1,0x3904);
  sub_080DA7CC(param_1);
  return in_lr;
}

