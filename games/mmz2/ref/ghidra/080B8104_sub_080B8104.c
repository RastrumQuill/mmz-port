// sub_080B8104 at 0x080B8104 (thumb)

undefined4 sub_080B8104(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined4 in_lr;
  
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(char *)(param_1 + 0x11) == '\0') {
    sub_080127E4(param_1,0x5c0c);
  }
  else {
    sub_080127E4(param_1,0x5c0d);
  }
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
  uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
  *(uint *)(param_1 + 0x5c) = 0x100 - (uVar3 * 0x80 >> 0x17);
  uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar3 & 0x7fffffff;
  *(uint *)(param_1 + 0x60) = ((uVar3 * 2 >> 0x11 & 7) + 2) * -0x40;
  *(undefined *)(param_1 + 0x12) = 0x30;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080B7FD0(param_1);
  return in_lr;
}

