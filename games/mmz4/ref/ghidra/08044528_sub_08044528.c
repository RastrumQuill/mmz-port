// sub_08044528 at 0x08044528 (thumb)

undefined4 sub_08044528(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0801CC9C(param_1);
  sub_0801CEEC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x8402);
  sub_0801CFF0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_088528c0,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x8044671;
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(undefined4 *)(param_1 + 0x60) = 0xfffffd00;
    iVar1 = *(int *)(param_1 + 0x58);
    iVar2 = -0xf00;
  }
  else {
    *(undefined4 *)(param_1 + 0x60) = 0x300;
    iVar1 = *(int *)(param_1 + 0x58);
    iVar2 = 0xf00;
  }
  *(int *)(param_1 + 0x58) = iVar1 + iVar2;
  sub_080445C8(param_1);
  return in_lr;
}

