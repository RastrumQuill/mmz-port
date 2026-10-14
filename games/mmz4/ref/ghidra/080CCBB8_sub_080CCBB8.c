// sub_080CCBB8 at 0x080CCBB8 (thumb)

undefined4 sub_080CCBB8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 7;
  sub_08005760(param_1 + 0x74,&DAT_0886339c,param_1 + 0x54,0xff);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  sub_0801CF00(param_1,0x9a0b);
  *(undefined4 *)(param_1 + 0x5c) = 0x180;
  *(undefined4 *)(param_1 + 0x60) = 0x100;
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080CCB68(param_1 + 0x54,1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    iVar1 = *(int *)(param_1 + 0x54);
    iVar2 = 0xa00;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffe80;
    iVar1 = *(int *)(param_1 + 0x54);
    iVar2 = -0xa00;
  }
  *(int *)(param_1 + 0x54) = iVar1 + iVar2;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x2600;
  sub_080D0894(3,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 4);
  sub_080CCC9C(param_1);
  return in_lr;
}

