// sub_080D6FE0 at 0x080D6FE0 (thumb)

undefined4 sub_080D6FE0(int param_1)

{
  undefined4 in_lr;
  
  *(bool *)(param_1 + 0x11) = 5 < *(byte *)(param_1 + 0x10) - 10;
  sub_080378B4(*(undefined4 *)(param_1 + 0x28),param_1 + 0x54,0);
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined *)(param_1 + 0x13) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_08012580(param_1);
  sub_080127D0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_080127E4(param_1,0x9004);
  sub_080D7058(param_1);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834a1a0)[*(byte *)(param_1 + 9)] + 4);
  return in_lr;
}

