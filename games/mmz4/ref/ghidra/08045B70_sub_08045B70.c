// sub_08045B70 at 0x08045B70 (thumb)

undefined4 sub_08045B70(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0801CC9C(param_1);
  sub_0801CEEC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x840d);
  sub_0801CFF0(param_1);
  *(undefined *)(param_1 + 0x25) = 0xf;
  *(undefined *)(param_1 + 0x12) = 0;
  sub_080458A0(param_1);
  return in_lr;
}

