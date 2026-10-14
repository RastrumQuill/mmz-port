// sub_080D1E8C at 0x080D1E8C (thumb)

undefined4 sub_080D1E8C(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,5);
  *(undefined *)(param_1 + 0x12) = 4;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  sub_080D19DC(param_1);
  return in_lr;
}

