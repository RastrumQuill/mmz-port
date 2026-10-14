// sub_080E60B0 at 0x080E60B0 (thumb)

undefined4 sub_080E60B0(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    if (*(char *)(param_1 + 0x12) == '\0') {
      local_14 = *(undefined4 *)(param_1 + 0x54);
      local_10 = *(int *)(param_1 + 0x58) + -0xa00;
      sub_080D0894(1,&local_14);
      sub_08002B10(0x2a);
      sub_080E5D14(param_1 + 0x54,0x102,*(byte *)(param_1 + 10) >> 4 & 1);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8)
      ;
    }
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    if (*(int *)(param_1 + 0x78) < 0x100) {
      iVar2 = *(int *)(param_1 + 100);
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + iVar2;
      if (iVar2 < 0) {
        iVar2 = -iVar2;
      }
      iVar2 = *(int *)(param_1 + 0x78) + iVar2;
      *(int *)(param_1 + 0x78) = iVar2;
      if (0xff < iVar2) {
        *(undefined4 *)(param_1 + 0x68) = 0x40;
      }
    }
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
    sVar1 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0xc00);
    if (sVar1 != 0) {
      local_14 = *(undefined4 *)(param_1 + 0x54);
      local_10 = *(int *)(param_1 + 0x58) + -0xc00;
      sub_080D0894(1,&local_14);
      sub_08002B10(0x2a);
      sub_080E5D14(&local_14,0x101,*(byte *)(param_1 + 10) >> 4 & 1);
      sub_080E5D14(&local_14,0x103,*(byte *)(param_1 + 10) >> 4 & 1);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8)
      ;
    }
  }
  return in_lr;
}

