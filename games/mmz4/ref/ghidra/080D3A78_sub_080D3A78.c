// sub_080D3A78 at 0x080D3A78 (thumb)

void sub_080D3A78(int param_1)

{
  byte *pbVar1;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  pbVar1 = (byte *)(*(int *)(param_1 + 0x28) + 0x142);
  *pbVar1 = *pbVar1 & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 0x10);
  return;
}

