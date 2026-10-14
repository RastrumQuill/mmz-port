// sub_080C2FDC at 0x080C2FDC (thumb)

undefined4 sub_080C2FDC(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
    pcVar1 = (char *)(*(int *)(param_1 + 0x28) + 0xb4);
    *pcVar1 = *pcVar1 + -1;
  }
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

