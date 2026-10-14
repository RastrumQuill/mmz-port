// sub_08098814 at 0x08098814 (thumb)

undefined4 sub_08098814(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  sub_08088120();
  uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar2 & 0x7fffffff;
  uVar2 = uVar2 * 2 >> 0x11 & 1;
  *(char *)(param_1 + 0x44) = (char)uVar2;
  if (uVar2 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar2 & 0x7fffffff;
  uVar2 = uVar2 * 2 >> 0x11 & 1;
  *(char *)(param_1 + 0x45) = (char)uVar2;
  if (uVar2 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar1;
  uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar2 & 0x7fffffff;
  if ((uVar2 * 2 >> 0x11 & 3) == 0) {
    sub_080033F0(param_1 + 0x6c,4);
  }
  else {
    sub_080033F0(param_1 + 0x6c,10);
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_08098900(param_1);
  return in_lr;
}

