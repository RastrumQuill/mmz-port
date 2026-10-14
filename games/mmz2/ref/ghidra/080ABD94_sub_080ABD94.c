// sub_080ABD94 at 0x080ABD94 (thumb)

undefined4 sub_080ABD94(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    sub_080128D4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if ((cVar1 != '\0') && ((*(uint *)(param_1 + 0x8c) & 4) == 0)) {
      iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x54) = iVar3;
      sVar2 = sub_08008CFC(iVar3,*(undefined4 *)(param_1 + 0x58));
      if (sVar2 == 0) {
        return in_lr;
      }
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8)
      ;
      *(undefined *)(param_1 + 0xd) = 0;
      sub_080ABE38(param_1);
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    *(undefined *)(param_1 + 0xd) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    *(undefined *)(param_1 + 0xd) = 0;
  }
  sub_080ABE38(param_1);
  return in_lr;
}

