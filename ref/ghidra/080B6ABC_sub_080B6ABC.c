// sub_080B6ABC at 0x080B6ABC (thumb)

void sub_080B6ABC(int param_1)

{
  int iVar1;
  
  if (((*(ushort *)(param_1 + 0x1a) & 1) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x40), *(char *)(iVar1 + 8) == '\x04')) {
    if (*(char *)(iVar1 + 9) == '\0') {
      if ((*(uint *)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 0xc) & 0xffff00) != 0x20600) {
        DAT_02022888 = DAT_02022888 + 4;
      }
      *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfc;
      *(undefined4 *)(iVar1 + 0x90) = 0;
      *(undefined *)(iVar1 + 0x94) = 0;
      *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfb;
      *(undefined4 *)(iVar1 + 0xc) = 3;
      *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(iVar1 + 9)] + 0xc);
    }
  }
  return;
}

