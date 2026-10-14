// sub_080D66E8 at 0x080D66E8 (thumb)

undefined4 sub_080D66E8(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834a1a0)[*(byte *)(param_1 + 9)] + 4);
  sub_08012580(param_1);
  sub_080127D0(param_1);
  sub_080127E4(param_1,0x9000);
  sub_080D6724(param_1);
  return in_lr;
}

