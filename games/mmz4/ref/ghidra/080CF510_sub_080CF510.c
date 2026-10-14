// sub_080CF510 at 0x080CF510 (thumb)

undefined4 sub_080CF510(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  sub_0801CC9C();
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 3;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 4);
  *(byte *)(param_1 + 10) = bVar1 | 7;
  sub_08005760(param_1 + 0x74,&DAT_0886381c,param_1 + 0x54,0x80);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x1e5;
  *(undefined4 *)(param_1 + 0x60) = 0x49c;
  *(undefined4 *)(param_1 + 0x60) = 0xfffffb64;
  *(undefined4 *)(param_1 + 0x68) = 0x40;
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080CF4B8(param_1 + 0x54,1,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffe1b;
  }
  sub_0801CF00(param_1,0xce06);
  sub_080CF5D0(param_1);
  return in_lr;
}

