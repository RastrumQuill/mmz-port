// sub_080DD5F0 at 0x080DD5F0 (thumb)

undefined4 sub_080DD5F0(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0xba13);
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x11) == '\0') {
    uVar1 = 0x180;
  }
  else {
    uVar1 = 0xfffffe80;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  *(undefined4 *)(param_1 + 0x60) = 0xfffffd00;
  *(undefined *)(param_1 + 0x12) = 0x14;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  sub_080DD2D4(param_1);
  return in_lr;
}

