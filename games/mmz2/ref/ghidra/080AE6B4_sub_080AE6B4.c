// sub_080AE6B4 at 0x080AE6B4 (thumb)

undefined4 sub_080AE6B4(int param_1)

{
  undefined4 in_lr;
  
  sub_080126A0();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_080127E4(param_1,0xe);
  sub_080128D4(param_1);
  *(undefined *)(param_1 + 0x12) = 6;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080AE444(param_1);
  return in_lr;
}

