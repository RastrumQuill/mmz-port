// sub_080A3B74 at 0x080A3B74 (thumb)

undefined4 sub_080A3B74(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  sub_080128D4();
  iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar4;
  iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar3;
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if ((cVar1 == -1) || ((*(uint *)(param_1 + 0x8c) & 0x400104) != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    sub_080A36BC(param_1);
  }
  else {
    sVar2 = sub_08008CFC(iVar4,iVar3);
    if (sVar2 != 0) {
      if (*(char *)(param_1 + 0x11) != '\0') {
        *(undefined *)(param_1 + 0x11) = 2;
      }
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_080A36BC(param_1);
    }
  }
  return in_lr;
}

