// sub_080E3F9C at 0x080E3F9C (thumb)

undefined4 sub_080E3F9C(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar2 & 0x7fffffff;
  cVar1 = sub_08128A9C(uVar2 * 2 >> 0x11,3);
  sub_0801CC9C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (cVar1 == '\0') {
    uVar3 = 0xd806;
  }
  else {
    if (cVar1 != '\x01') {
      sub_0801CF00(param_1,0xd808);
      goto LAB_080e4004;
    }
    uVar3 = 0xd807;
  }
  sub_0801CF00(param_1,uVar3);
LAB_080e4004:
  sub_0801CFF0(param_1);
  *(undefined *)(param_1 + 0x25) = 0x17;
  uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  *(uint *)(param_1 + 0x5c) = 0x40 - (uVar2 * 0x80 >> 0x17);
  uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar2 & 0x7fffffff;
  *(uint *)(param_1 + 0x60) = ((uVar2 * 2 >> 0x11 & 7) + 8) * -0x40;
  *(undefined *)(param_1 + 0x12) = 0x40;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  sub_080E3D88(param_1);
  return in_lr;
}

