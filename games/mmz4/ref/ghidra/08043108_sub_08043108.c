// sub_08043108 at 0x08043108 (thumb)

undefined4 sub_08043108(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0801CC9C(param_1);
  sub_0801CEEC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | 2;
  sub_0801CF00(param_1,0x8201);
  *(undefined *)(param_1 + 0x12) = 8;
  *(undefined *)(param_1 + 0x13) = 0;
  *(undefined *)(param_1 + 0xbd) = 0;
  sub_08043160(param_1);
  return in_lr;
}

