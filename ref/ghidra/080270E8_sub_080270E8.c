// sub_080270E8 at 0x080270E8 (thumb)

undefined4 sub_080270E8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x24);
  while (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x24);
    sub_08027140(iVar1);
    iVar1 = iVar2;
  }
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082aa198)[*(byte *)(param_1 + 9)] + 0x10);
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  if (param_1 == *(int *)(*(int *)(param_1 + 0x20) + 0x24)) {
    *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x24) = 0;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return in_lr;
}

