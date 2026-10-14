// sub_080E0020 at 0x080E0020 (thumb)

undefined4 sub_080E0020(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  undefined4 in_lr;
  undefined4 local_20 [3];
  
  local_20[0] = 0x6a00;
  local_20[1] = 0x6a01;
  local_20[2] = 0x6a02;
  bVar1 = *(byte *)(param_1 + 0x10);
  bVar2 = *(byte *)(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined4 *)(param_1 + 0x60) = 0x100;
  *(undefined *)(param_1 + 0x12) = 0x40;
  sub_0801CC9C(param_1);
  if (bVar2 == 0) {
    bVar3 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar3 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar3;
  uVar4 = bVar2 & 1;
  *(char *)(param_1 + 0x4c) = (char)uVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
  sub_0801CF00(param_1,*(undefined2 *)(local_20 + bVar1));
  sub_080E00B8(param_1);
  return in_lr;
}

