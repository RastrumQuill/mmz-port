// sub_080E7E48 at 0x080E7E48 (thumb)

undefined4 sub_080E7E48(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  undefined4 local_24 [4];
  
  local_24[0] = 0xffffff00;
  local_24[1] = 0;
  local_24[2] = 0;
  local_24[3] = 0;
  uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  uVar4 = uVar3 * 2 >> 0x11 & 1;
  uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar3 & 0x7fffffff;
  uVar3 = uVar3 * 2 >> 0x11 & 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined4 *)(param_1 + 0x60) = local_24[*(byte *)(param_1 + 0x10)];
  *(undefined4 *)(param_1 + 0x68) = local_24[*(byte *)(param_1 + 0x10) + 2];
  *(undefined *)(param_1 + 0x12) = 0x10;
  sub_0801CC9C(param_1);
  if (uVar4 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar4;
  pbVar2 = (byte *)(param_1 + 0x4a);
  *pbVar2 = *pbVar2 & 0xef | (byte)(uVar4 << 4);
  if (uVar3 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4d) = (char)uVar3;
  *pbVar2 = *pbVar2 & 0xdf | (byte)(uVar3 << 5);
  sub_0801CF00(param_1,0xb504);
  sub_080E7F50(param_1);
  return in_lr;
}

