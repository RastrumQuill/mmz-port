// sub_0809D364 at 0x0809D364 (thumb)

undefined4 sub_0809D364(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  sub_080128D4();
  cVar1 = *(char *)(param_1 + 0x13) + *(char *)(param_1 + 0x12);
  *(char *)(param_1 + 0x12) = cVar1;
  *(char *)(param_1 + 0x24) = cVar1;
  iVar4 = *(int *)(param_1 + 0x60) + 0x60;
  *(int *)(param_1 + 0x60) = iVar4;
  iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar3;
  iVar4 = *(int *)(param_1 + 0x58) + iVar4;
  *(int *)(param_1 + 0x58) = iVar4;
  sVar2 = sub_08008CFC(iVar3,iVar4 + 0x400);
  if (sVar2 != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    sub_0809CE88(param_1);
  }
  return in_lr;
}

