// sub_0804591C at 0x0804591C (thumb)

undefined4 sub_0804591C(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0801CC9C(param_1);
  sub_0801CEEC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0803AD90(param_1,1);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x58);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 100)) {
      *(uint *)(param_1 + 100) = *(byte *)(param_1 + 10) & 0x10;
    }
  }
  else if (*(int *)(param_1 + 100) < *(int *)(param_1 + 0x54)) {
    *(undefined4 *)(param_1 + 100) = 0;
  }
  sub_0801CF00(param_1,0x8406);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_088536e8,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    uVar1 = 0xfffffa00;
  }
  else {
    uVar1 = 0x600;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  *(undefined4 *)(param_1 + 0x60) = 0;
  sub_0801CFF0(param_1);
  *(undefined4 *)(param_1 + 0x98) = 0x80461ad;
  sub_080457E0(*(undefined4 *)(param_1 + 0x2c),param_1);
  sub_080458A0(param_1);
  return in_lr;
}

