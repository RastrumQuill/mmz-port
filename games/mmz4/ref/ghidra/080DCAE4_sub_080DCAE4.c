// sub_080DCAE4 at 0x080DCAE4 (thumb)

undefined4 sub_080DCAE4(int param_1)

{
  undefined uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  sub_0801CD28();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(char *)(param_1 + 0x11) == '\0') {
    sub_0801CF00(param_1,0x3c04);
    uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar2 & 0x7fffffff;
    *(uint *)(param_1 + 0x5c) = -0x100 - (uVar2 * 2 >> 0x11 & 0x3f);
    uVar1 = 0xfb;
  }
  else {
    sub_0801CF00(param_1,0x3c05);
    uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar2 & 0x7fffffff;
    *(uint *)(param_1 + 0x5c) = (uVar2 * 2 >> 0x11 & 0x3f) + 0x100;
    uVar1 = 5;
  }
  *(undefined *)(param_1 + 0x12) = uVar1;
  sub_0801CFF0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar2 & 0x7fffffff;
  *(uint *)(param_1 + 0x60) = ((uVar2 * 2 >> 0x11 & 3) + 8) * -0x40;
  *(undefined *)(param_1 + 0x13) = 0;
  *(undefined *)(param_1 + 0x7d) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  sub_080DC9E4(param_1);
  return in_lr;
}

