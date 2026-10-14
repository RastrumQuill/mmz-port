// sub_08075228 at 0x08075228 (thumb)

void sub_08075228(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (*(char *)(*(int *)(*(int *)(param_1 + 0x10) + 0x40) + 8) == '\0') {
    *(undefined4 *)(iVar1 + 0xc) = 2;
    *(undefined4 *)(iVar1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(iVar1 + 9) * 4) + 8);
  }
  return;
}

