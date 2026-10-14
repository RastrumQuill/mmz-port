// sub_0803F74C at 0x0803F74C (thumb)

undefined4 sub_0803F74C(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0801CC9C(param_1);
  sub_0801CEEC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CFC8(param_1,0x800c,0,4);
  sub_0801CFF0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_08851ebc,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  sub_08005794(param_1 + 0x74,&DAT_08851ebc,0xffffffff,0xffffffff,0xffffffff,
               *(undefined *)(param_1 + 0xbd));
  *(undefined4 *)(param_1 + 0x98) = 0x803f9ed;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    uVar1 = 0xfffffc40;
  }
  else {
    uVar1 = 0x3c0;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined *)(param_1 + 0x12) = 4;
  sub_0803F810(param_1);
  return in_lr;
}

