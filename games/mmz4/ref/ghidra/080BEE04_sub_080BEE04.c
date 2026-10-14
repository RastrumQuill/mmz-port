// sub_080BEE04 at 0x080BEE04 (thumb)

undefined4 sub_080BEE04(int param_1)

{
  short sVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    cVar2 = -1;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      cVar2 = '\x01';
    }
    *(int *)(param_1 + 0x5c) = cVar2 * 0x240;
    *(undefined4 *)(param_1 + 0x60) = 0x240;
    sub_0801CF00(param_1,0x2508);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_0801CFF0(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sVar1 = sub_08007C7C();
  if (sVar1 != 0) {
    sub_080BEA4C(param_1 + 0x54,param_1 + 0x5c,*(byte *)(param_1 + 10) >> 4 & 1,
                 *(undefined *)(param_1 + 0x11));
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
    sub_080BEBDC(param_1);
  }
  return in_lr;
}

