// sub_080B484C at 0x080B484C (thumb)

undefined4 sub_080B484C(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  sub_0801CC9C();
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 3;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(byte *)(param_1 + 10) = bVar1 | 7;
  sub_08005760(param_1 + 0x74,&DAT_0886046c,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x80b4a71;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined *)(param_1 + 0xb4) = 0;
  *(undefined *)(param_1 + 0xb6) = 0;
  *(undefined *)(param_1 + 0xb5) = 0;
  *(undefined *)(param_1 + 0xb7) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  sub_080B5268(param_1);
  sVar2 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (sVar2 == 0) {
    uVar3 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    *(undefined *)(param_1 + 0xd) = 0;
  }
  else {
    uVar3 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    *(undefined *)(param_1 + 0xd) = 3;
  }
  *(undefined *)(param_1 + 0xe) = 0;
  sub_080B48FC(param_1);
  return in_lr;
}

