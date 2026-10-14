// sub_080DF6DC at 0x080DF6DC (thumb)

undefined4 sub_080DF6DC(int param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  sub_0801CC9C();
  sub_0801CEEC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x7c00);
  uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar2 & 0x7fffffff;
  uVar2 = uVar2 * 2 >> 0x11 & 1;
  if (uVar2 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(undefined *)(param_1 + 0x4c) = (char)uVar2;
  pbVar3 = (byte *)(param_1 + 0x4a);
  *pbVar3 = *pbVar3 & 0xef | (byte)(uVar2 << 4);
  uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar2 & 0x7fffffff;
  uVar2 = uVar2 * 2 >> 0x11 & 1;
  if (uVar2 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(undefined *)(param_1 + 0x4d) = (char)uVar2;
  *pbVar3 = *pbVar3 & 0xdf | (byte)(uVar2 << 5);
  *(byte *)(param_1 + 0x49) =
       *(byte *)(param_1 + 0x49) & 0xf3 | (byte)((*(byte *)(param_1 + 0x11) & 3) << 2);
  if (*(char *)(param_1 + 0x11) == '\x01') {
    *(undefined *)(param_1 + 0x25) = 0x1e;
  }
  *(undefined *)(param_1 + 0x12) = 10;
  *(undefined *)(param_1 + 0x13) = 10;
  sub_08128884(param_1,*(undefined4 *)(&DAT_0886533c + (uint)*(byte *)(param_1 + 0x10) * 4));
  uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  *(char *)(param_1 + 0x76) = (char)(uVar2 * 2 >> 0x11);
  uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar2 & 0x7fffffff;
  uVar2 = uVar2 * 2 >> 0x11 & 1;
  if (uVar2 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(undefined *)(param_1 + 0x4c) = (char)uVar2;
  *pbVar3 = *pbVar3 & 0xef | (byte)(uVar2 << 4);
  uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar2 & 0x7fffffff;
  uVar2 = uVar2 * 2 >> 0x11 & 1;
  if (uVar2 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(undefined *)(param_1 + 0x4d) = (char)uVar2;
  *pbVar3 = *pbVar3 & 0xdf | (byte)(uVar2 << 5);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  sub_080DF8C8(param_1);
  return in_lr;
}

