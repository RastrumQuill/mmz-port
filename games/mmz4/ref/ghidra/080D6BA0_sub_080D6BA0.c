// sub_080D6BA0 at 0x080D6BA0 (thumb)

undefined4 sub_080D6BA0(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x1c07);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0xffffffc0;
    uVar1 = 2;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0x40;
    uVar1 = 0xfffffffe;
  }
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0x60) = 0x40;
  *(undefined4 *)(param_1 + 0x68) = 0xfffffffe;
  *(undefined *)(param_1 + 0x12) = 0x20;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  sub_080D6B00(param_1);
  return in_lr;
}

