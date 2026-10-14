// sub_0804CDD8 at 0x0804CDD8 (thumb)

undefined4 sub_0804CDD8(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 4);
  sVar1 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (sVar1 == 0) {
    sub_0801CC9C(param_1);
    sub_0801CEEC(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    sub_0801CF00(param_1,0x841b);
    sub_0801CFF0(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08005760(param_1 + 0x74,&DAT_08854314,param_1 + 0x54,8);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x804d06d;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar2 = 0xfffffc40;
    }
    else {
      uVar2 = 0x3c0;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar2;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffe00;
    *(undefined4 *)(param_1 + 0x68) = 0x40;
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
    *(undefined *)(param_1 + 0x12) = 0xc4;
    sub_0804CEE4(param_1);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08005760(param_1 + 0x74,&DAT_08854314,param_1 + 0x54,8);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    sub_080D0894(2,param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

