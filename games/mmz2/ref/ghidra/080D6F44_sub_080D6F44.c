// sub_080D6F44 at 0x080D6F44 (thumb)

undefined4 sub_080D6F44(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834a1a0)[*(byte *)(param_1 + 9)] + 0x10);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  sub_080D568C(*(undefined4 *)(param_1 + 0x28));
  DAT_0202e144 = 0;
  return in_lr;
}

