// sub_080CAE50 at 0x080CAE50 (thumb)

undefined4 sub_080CAE50(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar2 & 0x7fffffff;
  sub_0801CF00(param_1,(uVar2 * 2 >> 0x11 & 1) + 0x8f03 & 0xffff);
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
  *(undefined *)(param_1 + 0x25) = 0x12;
  uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  *(byte *)(param_1 + 0x12) = (byte)(uVar2 * 2 >> 0x11) & 1;
  *(undefined4 *)(param_1 + 0x60) = 0;
  uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar2 & 0x7fffffff;
  *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + ((uVar2 * 2 >> 0x11 & 0x1f) - 0x10) * 0x100
  ;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 4);
  sub_080CAD4C(param_1);
  return in_lr;
}

