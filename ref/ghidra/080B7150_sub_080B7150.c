// sub_080B7150 at 0x080B7150 (thumb)

void sub_080B7150(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x54) + 0x30;
  *(int *)(param_1 + 0x54) = iVar1;
  if (0x27ff < iVar1) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined4 *)(param_1 + 0x54) = 0x2800;
    *(undefined *)(param_1 + 0xbf) = 1;
  }
  return;
}

