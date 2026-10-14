// sub_080D7990 at 0x080D7990 (thumb)

undefined4 sub_080D7990(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x14) & 1) != 0) &&
      (iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c), *(char *)(iVar1 + 8) == '\x04')) &&
     ((*(char *)(iVar1 + 9) == '\0' || (*(char *)(iVar1 + 9) == '?')))) {
    if ((*(uint *)(*(int *)(*(int *)(param_1 + 0x2c) + 0x28) + 0xc) & 0xffff00) != 0x20700) {
      DAT_0202e180 = DAT_0202e180 + 4;
    }
    *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfc;
    *(undefined4 *)(iVar1 + 0x8c) = 0;
    *(undefined4 *)(iVar1 + 0x90) = 0;
    *(undefined *)(iVar1 + 0x94) = 0;
    *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfb;
    *(undefined4 *)(iVar1 + 0xc) = 3;
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(iVar1 + 9)] + 0xc);
  }
  return in_lr;
}

