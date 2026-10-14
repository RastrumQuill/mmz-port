// sub_080B8410 at 0x080B8410 (thumb)

undefined4 sub_080B8410(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 in_lr;
  
  sub_080128D4();
  bVar1 = *(byte *)(param_1 + 0x12);
  if ((0x10 < bVar1) && ((bVar1 & 1) != 0)) {
    uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar3 & 0x7fffffff;
    sub_080B7F60(param_1 + 0x54,4,
                 (((uint)bVar1 << 0x18) >> 0x19 & 3) << 6 | uVar3 * 2 >> 0x11 & 0x3f);
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
    sub_080B7FE8(param_1);
  }
  return in_lr;
}

