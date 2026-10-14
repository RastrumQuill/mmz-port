// sub_080B0D88 at 0x080B0D88 (thumb)

undefined4 sub_080B0D88(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x7c);
  sub_080128D4();
  if ((*(byte *)(iVar6 + 3) & 0x10) != 0) {
    if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar1;
  }
  iVar4 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x60) = iVar4;
  iVar5 = *(int *)(param_1 + 0x58) + iVar4;
  *(int *)(param_1 + 0x58) = iVar5;
  bVar1 = *(byte *)(iVar6 + 3);
  if ((bVar1 & 0x20) == 0) {
    if (iVar4 < 1) {
      iVar6 = -(int)*(short *)(param_1 + 0x76);
    }
    else {
      iVar6 = (int)*(short *)(param_1 + 0x76);
    }
    sVar3 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),iVar5 + iVar6);
    if (sVar3 != 0) {
      *(byte *)(param_1 + 0x12) = bVar1 & 0x20;
    }
    iVar6 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = iVar6;
    iVar4 = *(int *)(param_1 + 0x54) + iVar6;
    *(int *)(param_1 + 0x54) = iVar4;
    if (iVar6 < 1) {
      iVar6 = -(int)*(short *)(param_1 + 0x74);
    }
    else {
      iVar6 = (int)*(short *)(param_1 + 0x74);
    }
    sVar3 = sub_08008CFC(iVar4 + iVar6,*(undefined4 *)(param_1 + 0x58));
    if (sVar3 != 0) {
      *(undefined *)(param_1 + 0x12) = 0;
    }
  }
  else {
    iVar6 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = iVar6;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar6;
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
    sub_080B0D08(param_1);
  }
  return in_lr;
}

