// sub_080C7F44 at 0x080C7F44 (thumb)

undefined4 sub_080C7F44(int param_1)

{
  undefined4 in_lr;
  
  if ((uint)*(byte *)(*(int *)(param_1 + 0x28) + 0xb4) == *(byte *)(param_1 + 0x11) + 1) {
    sub_08002B10(0x3f);
  }
  sub_080DE438(param_1 + 0x54,0,0);
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

