// sub_080DFD70 at 0x080DFD70 (thumb)

undefined4 sub_080DFD70(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CEEC(param_1);
  sub_0801CF00(param_1,*(undefined2 *)(param_1 + 0x80));
  sub_0801CFF0(param_1);
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
  *(char *)(param_1 + 0x4c) = (char)uVar2;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar2 << 4);
  uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  iVar3 = (*(byte *)(param_1 + 0x11) + 1) * 0x100 - (uVar2 * 0x80 >> 0x17);
  *(int *)(param_1 + 0x5c) = iVar3;
  uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
  *(uint *)(param_1 + 0x60) =
       ((uint)*(byte *)(param_1 + 0x11) * 2 - ((uVar2 * 2 >> 0x11 & 7) + 0x12)) * 0x40;
  uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar2 & 0x7fffffff;
  if ((uVar2 * 2 >> 0x11 & 1) != 0) {
    *(int *)(param_1 + 0x5c) = -iVar3;
  }
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  sub_080DFB58(param_1);
  return in_lr;
}

