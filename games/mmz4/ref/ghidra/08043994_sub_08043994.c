// sub_08043994 at 0x08043994 (thumb)

undefined4 sub_08043994(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0801CC9C(param_1);
  sub_0801CEEC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x8110);
  sub_0801CFF0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_08852794,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  sub_08005794(param_1 + 0x74,&DAT_08852794,4,0xffffffff,0xffffffff,0xffffffff);
  *(undefined4 *)(param_1 + 0x98) = 0x8043ba5;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    uVar1 = 0xfffffc00;
  }
  else {
    uVar1 = 0x400;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  sub_08043A44(param_1);
  return in_lr;
}

