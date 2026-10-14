// sub_080B251C at 0x080B251C (thumb)

void sub_080B251C(int param_1)

{
  DAT_03002ac0 = 0;
  DAT_02000fe0 = DAT_02000fe0 & 0xbfff;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 0x10);
  return;
}

