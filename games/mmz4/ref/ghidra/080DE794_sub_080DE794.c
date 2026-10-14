// sub_080DE794 at 0x080DE794 (thumb)

void sub_080DE794(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(int *)(param_1 + 0x28) + 0xb6);
  *pcVar1 = *pcVar1 + -1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 0x10);
  return;
}

