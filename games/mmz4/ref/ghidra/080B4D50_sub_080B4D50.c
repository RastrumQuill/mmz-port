// sub_080B4D50 at 0x080B4D50 (thumb)

undefined4 sub_080B4D50(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x1e00;
    sub_0801CF00(param_1,0xca00);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    uVar3 = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 10) = (char)uVar3;
    uVar2 = sub_080E6B38(param_1 + 0x54,0x400,uVar3 >> 4 & 1);
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sVar1 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (sVar1 == 0) {
    iVar4 = *(int *)(param_1 + 0x2c);
    *(byte *)(iVar4 + 10) = *(byte *)(iVar4 + 10) & 0xfc;
    *(undefined4 *)(iVar4 + 0xc) = 3;
    *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(iVar4 + 9)] + 0xc);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    uVar2 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 5;
    sub_08005760(param_1 + 0x74,&DAT_0886046c,param_1 + 0x54,8);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x80b4a71;
    *(undefined *)(param_1 + 0xd) = 0;
  }
  else if (*(int *)(DAT_0202dbf0 + 0x58) < *(int *)(param_1 + 0x58)) {
    iVar4 = *(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54);
    if (iVar4 < 0) {
      iVar4 = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202dbf0 + 0x54);
    }
    if (iVar4 < 0x4000) {
      iVar4 = *(int *)(param_1 + 0x2c);
      *(undefined4 *)(iVar4 + 0xc) = 2;
      *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(iVar4 + 9)] + 8);
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined *)(param_1 + 0xd) = 4;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

