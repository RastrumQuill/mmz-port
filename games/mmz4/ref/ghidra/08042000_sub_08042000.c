// sub_08042000 at 0x08042000 (thumb)

undefined4 sub_08042000(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 4);
  sub_08128884(param_1,*(undefined4 *)(&DAT_088525a0 + (uint)*(byte *)(param_1 + 0x10) * 4));
  sub_0804203C(param_1);
  return in_lr;
}

