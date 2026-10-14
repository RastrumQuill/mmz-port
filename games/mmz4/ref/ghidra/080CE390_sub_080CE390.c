// sub_080CE390 at 0x080CE390 (thumb)

undefined4 sub_080CE390(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  sub_0801CC9C();
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 3;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 4);
  *(byte *)(param_1 + 10) = bVar1 | 7;
  sub_08005760(param_1 + 0x74,&DAT_088636cc,param_1 + 0x54,0xff);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x80ce579;
  *(undefined *)(param_1 + 0xb9) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined *)(param_1 + 0xb8) = 1;
  *(undefined *)(param_1 + 0xba) = 0;
  *(undefined *)(param_1 + 0x12) = 0xc4;
  sub_0801CF00(param_1,0xbb07);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar2 = *(int *)(param_1 + 0x54);
    iVar3 = -0xd00;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x54);
    iVar3 = 0xd00;
  }
  *(int *)(param_1 + 0x54) = iVar2 + iVar3;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x1300;
  *(undefined4 *)(param_1 + 0x5c) = 0x200;
  *(undefined4 *)(param_1 + 0x60) = 0xfffffe96;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffe00;
  }
  sub_080CE464(param_1);
  return in_lr;
}

