// sub_08028D58 at 0x08028D58 (thumb)

void sub_08028D58(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082aa198)[*(byte *)(param_1 + 9)] + 0x10);
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  iVar1 = *(int *)(param_1 + 0x20);
  if (param_1 == *(int *)(iVar1 + 0x24)) {
    *(undefined4 *)(iVar1 + 0x24) = 0;
  }
  if (param_1 == *(int *)(iVar1 + 0xe8)) {
    *(int *)(iVar1 + 0xe8) = 0;
  }
  return;
}

