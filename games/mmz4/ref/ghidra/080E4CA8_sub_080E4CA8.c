// sub_080E4CA8 at 0x080E4CA8 (thumb)

undefined4 sub_080E4CA8(int param_1)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  sVar2 = sub_08007C7C();
  if ((sVar2 != 0) || (cVar1 = *(char *)(param_1 + 0x13), cVar1 == '\0')) {
    sub_080D0894(2,param_1 + 0x54);
    uVar3 = sub_08007020(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if ((uVar3 & 0x8000) == 0) {
      sub_08002B10(0x35);
    }
    else {
      sub_08002B10(0x31);
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
    cVar1 = *(char *)(param_1 + 0x13);
  }
  *(char *)(param_1 + 0x13) = cVar1 + -1;
  return in_lr;
}

