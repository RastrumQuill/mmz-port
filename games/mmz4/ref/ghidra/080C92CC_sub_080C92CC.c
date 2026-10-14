// sub_080C92CC at 0x080C92CC (thumb)

undefined4 sub_080C92CC(int param_1)

{
  undefined4 in_lr;
  
  sub_080D0894(3,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

