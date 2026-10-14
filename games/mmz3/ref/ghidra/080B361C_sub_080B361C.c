// sub_080B361C at 0x080B361C (thumb)

undefined4 sub_080B361C(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  sub_0801749C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08017700(param_1,0xf);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    uVar1 = DAT_0202f608 * 0x343fd + 0x269ec3;
    uVar2 = -(uVar1 * 0x80 >> 0x17);
  }
  else {
    uVar1 = DAT_0202f608 * 0x343fd + 0x269ec3;
    uVar2 = uVar1 * 0x80 >> 0x17;
  }
  DAT_0202f608 = uVar1 & 0x7fffffff;
  *(uint *)(param_1 + 0x5c) = uVar2;
  uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar2 & 0x7fffffff;
  *(uint *)(param_1 + 0x60) = ((uVar2 * 2 >> 0x11 & 0xf) + 0xd) * -0x40;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 4);
  sub_080B33E8(param_1);
  return in_lr;
}

