// sub_080DD448 at 0x080DD448 (thumb)

undefined4 sub_080DD448(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x8602);
  sub_0801CFF0(param_1);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    uVar1 = 0x1c0;
  }
  else {
    uVar1 = 0xfffffe40;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  *(undefined4 *)(param_1 + 0x60) = 0xfffffc00;
  *(undefined *)(param_1 + 0x12) = 0x14;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  sub_080DD2D4(param_1);
  return in_lr;
}

