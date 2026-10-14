// sub_080C5AE0 at 0x080C5AE0 (thumb)

void sub_080C5AE0(int param_1)

{
  short *psVar1;
  
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  psVar1 = (short *)(*(int *)(param_1 + 0x28) + 0xb4);
  *psVar1 = *psVar1 + -1;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 0x10);
  return;
}

