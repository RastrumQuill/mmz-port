// sub_080D4E94 at 0x080D4E94 (thumb)

void sub_080D4E94(int param_1)

{
  DAT_03002ac0 = 0;
  DAT_02000a50 = DAT_02000a50 & 0xbfff;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 0x10);
  return;
}

