// sub_08027140 at 0x08027140 (thumb)

undefined4 sub_08027140(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082aa198)[*(byte *)(param_1 + 9)] + 0x10);
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  iVar2 = *(int *)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if ((*(int *)(iVar2 + 0x24) == param_1) && (*(int *)(iVar2 + 0x24) = iVar1, iVar1 != 0)) {
    *(int *)(iVar1 + 0x20) = iVar2;
  }
  return in_lr;
}

