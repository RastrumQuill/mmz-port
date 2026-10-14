// sub_08039D50 at 0x08039D50 (thumb)

undefined4 sub_08039D50(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08336060)[*(byte *)(param_1 + 9)] + 0x10);
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  sub_0803A248(param_1);
  if (param_1 == *(int *)(*(int *)(param_1 + 0x28) + 0x2c)) {
    *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x2c) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  while (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x2c);
    sub_08039DB4(iVar1);
    iVar1 = iVar2;
  }
  return in_lr;
}

