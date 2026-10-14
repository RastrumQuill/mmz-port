// sub_08079610 at 0x08079610 (thumb)

void sub_08079610(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (((*(ushort *)(param_1 + 0x1a) & 0x40) != 0) ||
     (*(char *)(*(int *)(*(int *)(param_1 + 0x10) + 0x40) + 8) != '\x01')) {
    *(undefined4 *)(iVar1 + 0xc) = 2;
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(iVar1 + 9)] + 8);
  }
  return;
}

