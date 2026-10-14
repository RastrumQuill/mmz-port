// sub_080BEC1C at 0x080BEC1C (thumb)

undefined4 sub_080BEC1C(int param_1)

{
  short sVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0x2508);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0x240;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_0801CFF0(param_1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sVar1 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54));
  if (sVar1 != 0) {
    sub_080BEA4C(param_1 + 0x54,param_1 + 0x5c,0,*(undefined *)(param_1 + 0x11));
    sub_080BEA4C(param_1 + 0x54,param_1 + 0x5c,1,*(undefined *)(param_1 + 0x11));
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
    sub_080BEBDC(param_1);
  }
  return in_lr;
}

