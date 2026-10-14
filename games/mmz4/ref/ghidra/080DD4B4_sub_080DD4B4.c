// sub_080DD4B4 at 0x080DD4B4 (thumb)

undefined4 sub_080DD4B4(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x8b07);
  sub_0801CFF0(param_1);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(undefined4 *)(param_1 + 100) = 0xfffffff0;
  }
  else {
    *(undefined4 *)(param_1 + 100) = 0x10;
  }
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 100) * -0x10;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  sub_080DD2D4(param_1);
  return in_lr;
}

