// sub_080D8244 at 0x080D8244 (thumb)

undefined4 sub_080D8244(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 in_lr;
  
  bVar2 = *(byte *)(param_1 + 0x11);
  uVar5 = bVar2 & 1;
  bVar1 = bVar2 >> 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if ((bVar1 & 1) == 0) {
    *(uint *)(param_1 + 0x5c) = (uVar5 * -2 + 1) * 0x40;
    uVar3 = 0xfffffec0;
  }
  else {
    *(uint *)(param_1 + 0x5c) = (uVar5 * -2 + 1) * 0x40;
    uVar3 = 0;
  }
  *(undefined4 *)(param_1 + 0x60) = uVar3;
  *(undefined *)(param_1 + 0x12) = 0xff;
  *(char *)(param_1 + 0x74) = (char)uVar5;
  sub_0801CC9C(param_1);
  sub_0801CF00(param_1,0x1d13);
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(char *)(param_1 + 0x4c) = (char)uVar5;
  pbVar4 = (byte *)(param_1 + 0x4a);
  *pbVar4 = *pbVar4 & 0xef | (byte)(uVar5 << 4);
  if ((bVar1 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(char *)(param_1 + 0x4d) = (char)(bVar1 & 1);
  *pbVar4 = *pbVar4 & 0xdf | (byte)((bVar1 & 1) << 5);
  sub_080D831C(param_1);
  return in_lr;
}

