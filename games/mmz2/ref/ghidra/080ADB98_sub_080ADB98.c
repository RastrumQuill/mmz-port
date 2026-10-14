// sub_080ADB98 at 0x080ADB98 (thumb)

undefined4 sub_080ADB98(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,*(undefined2 *)(&DAT_08345bca + (*(byte *)(param_1 + 0x78) & 1) * 2));
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
  if (*(char *)(param_1 + 0x11) == '\0') {
    uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
    iVar4 = -((uVar3 * 0x80 >> 0x17) + 0x100);
  }
  else {
    uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
    iVar4 = (uVar3 * 2 >> 0x11 & 0xff) + 0x100;
  }
  DAT_0202e188 = uVar3 & 0x7fffffff;
  *(int *)(param_1 + 0x5c) = iVar4;
  uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar3 & 0x7fffffff;
  *(uint *)(param_1 + 0x60) = ((uVar3 * 2 >> 0x11 & 0xf) + 8) * -0x40;
  *(undefined *)(param_1 + 0x12) = 0x40;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080AD86C(param_1);
  return in_lr;
}

