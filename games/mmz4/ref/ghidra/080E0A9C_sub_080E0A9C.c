// sub_080E0A9C at 0x080E0A9C (thumb)

undefined4 sub_080E0A9C(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10);
  sub_0801CFF0(param_1);
  iVar6 = *(int *)(param_1 + 0x58);
  iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar4 = *(int *)(param_1 + 0x60);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if ((cVar2 == '\0') ||
     (sVar3 = sub_08007C7C(iVar5 + ((bVar1 >> 4 & 1) * 2 + -1) * -0xc00), sVar3 != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
    sub_080E0B1C(param_1);
  }
  else {
    *(int *)(param_1 + 0x54) = iVar5;
    *(int *)(param_1 + 0x58) = iVar4 + iVar6;
    iVar4 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar4;
    if (0x700 < iVar4) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
  }
  return in_lr;
}

