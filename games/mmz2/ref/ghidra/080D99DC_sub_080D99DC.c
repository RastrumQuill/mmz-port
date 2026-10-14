// sub_080D99DC at 0x080D99DC (thumb)

undefined4 sub_080D99DC(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x14) & 1) != 0) &&
      (iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c), *(char *)(iVar2 + 8) == '\x04')) &&
     ((*(char *)(iVar2 + 9) == '\0' || (*(char *)(iVar2 + 9) == '?')))) {
    iVar3 = *(int *)(param_1 + 0x2c);
    if (*(char *)(iVar3 + 0x11) != '\0') {
      iVar3 = *(int *)(iVar3 + 0x2c);
    }
    sVar1 = *(short *)(iVar3 + 0xa4);
    if (sVar1 != 0) {
      *(short *)(iVar3 + 0xa4) = sVar1 + -1;
      *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfc;
      *(undefined4 *)(iVar2 + 0x8c) = 0;
      *(undefined4 *)(iVar2 + 0x90) = 0;
      *(undefined *)(iVar2 + 0x94) = 0;
      *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfb;
      *(undefined4 *)(iVar2 + 0xc) = 3;
      *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(iVar2 + 9)] + 0xc);
    }
  }
  return in_lr;
}

