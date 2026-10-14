// sub_080D817C at 0x080D817C (thumb)

undefined4 sub_080D817C(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  bVar2 = *(byte *)(param_1 + 0x11);
  uVar4 = bVar2 & 1;
  uVar5 = bVar2 >> 1 & 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(uint *)(param_1 + 0x5c) = (uVar4 * -2 + 1) * 0x60;
  *(uint *)(param_1 + 100) = (uVar4 * 2 + -1) * 4;
  *(undefined *)(param_1 + 0x12) = 0x18;
  *(char *)(param_1 + 0x74) = (char)uVar4;
  sub_0801CC9C(param_1);
  sub_0801CF00(param_1,0x1d13);
  if ((bVar2 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar4;
  pbVar3 = (byte *)(param_1 + 0x4a);
  *pbVar3 = *pbVar3 & 0xef | (byte)(uVar4 << 4);
  if ((bVar2 >> 1 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(char *)(param_1 + 0x4d) = (char)uVar5;
  *pbVar3 = *pbVar3 & 0xdf | (byte)(uVar5 << 5);
  sub_080D831C(param_1);
  return in_lr;
}

