// sub_080DE998 at 0x080DE998 (thumb)

undefined4 sub_080DE998(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | 2;
  sub_0801CEEC(param_1);
  sub_0801CF00(param_1,0xc500);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  sub_080DE8EC(param_1);
  return in_lr;
}

