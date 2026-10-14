// sub_080BD0A0 at 0x080BD0A0 (thumb)

void sub_080BD0A0(int param_1)

{
  DAT_03002ac0 = 0;
  DAT_02002410 = DAT_02002410 & 0xbfff;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 0x10);
  return;
}

