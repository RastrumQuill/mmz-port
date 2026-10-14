// sub_080E6990 at 0x080E6990 (thumb)

undefined4 sub_080E6990(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    if (*(char *)(param_1 + 0x12) == '\0') {
      local_18 = *(undefined4 *)(param_1 + 0x54);
      local_14 = *(int *)(param_1 + 0x58) + -0xa00;
      sub_080D0894(1,&local_18);
      sub_08002B10(0xa7);
      iVar2 = param_1 + 0x54;
      sub_080E65E0(iVar2,0x103,*(byte *)(param_1 + 10) >> 4 & 1);
      sub_080E65E0(iVar2,0x104,*(byte *)(param_1 + 10) >> 4 & 1);
      sub_080E65E0(iVar2,0x105,*(byte *)(param_1 + 10) >> 4 & 1);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8)
      ;
    }
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    if (*(int *)(param_1 + 0x78) < 0x180) {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
      iVar2 = *(int *)(param_1 + 0x78) + 0x10;
      *(int *)(param_1 + 0x78) = iVar2;
      if (0x17f < iVar2) {
        *(undefined4 *)(param_1 + 0x68) = 0x40;
        *(undefined4 *)(param_1 + 0x60) = 0;
        *(undefined4 *)(param_1 + 0x5c) = 0;
      }
    }
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
    sVar1 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x1400);
    if (sVar1 != 0) {
      local_18 = *(undefined4 *)(param_1 + 0x54);
      local_14 = *(int *)(param_1 + 0x58) + -0x1400;
      sub_080D0894(1,&local_18);
      sub_08002B10(0xa7);
      sub_080E65E0(&local_18,0x101,*(byte *)(param_1 + 10) >> 4 & 1);
      sub_080E65E0(&local_18,0x106,*(byte *)(param_1 + 10) >> 4 & 1);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8)
      ;
    }
  }
  return in_lr;
}

