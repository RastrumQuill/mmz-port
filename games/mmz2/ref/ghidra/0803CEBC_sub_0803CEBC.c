// sub_0803CEBC at 0x0803CEBC (thumb)

undefined4 sub_0803CEBC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08336060)[*(byte *)(param_1 + 9)] + 0x10);
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  iVar1 = *(int *)(param_1 + 0x28);
  if (param_1 == *(int *)(iVar1 + 0x2c)) {
    *(undefined4 *)(iVar1 + 0x2c) = 0;
  }
  if (param_1 == *(int *)(iVar1 + 0x2a0)) {
    *(int *)(iVar1 + 0x2a0) = 0;
  }
  return in_lr;
}

