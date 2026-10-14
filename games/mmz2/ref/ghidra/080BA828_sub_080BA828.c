// sub_080BA828 at 0x080BA828 (thumb)

undefined4 sub_080BA828(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x2605);
  sub_080128D4(param_1);
  bVar1 = *(byte *)(param_1 + 0x11);
  if (bVar1 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(byte *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar1 & 1) << 4);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
    iVar4 = -0x80 - (uVar3 * 2 >> 0x11 & 0xff);
  }
  else {
    uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
    iVar4 = (uVar3 * 2 >> 0x11 & 0xff) + 0x80;
  }
  DAT_0202e188 = uVar3 & 0x7fffffff;
  *(int *)(param_1 + 0x5c) = iVar4;
  uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar3 & 0x7fffffff;
  *(uint *)(param_1 + 0x60) = 0xff - (uVar3 * 0x80 >> 0x17);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080BA7F8(param_1);
  return in_lr;
}

