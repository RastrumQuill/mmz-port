// sub_080DB364 at 0x080DB364 (thumb)

undefined4 sub_080DB364(int param_1)

{
  undefined4 in_lr;
  
  sub_080D0894(1,param_1 + 0x54);
  sub_08002B10(0x2a);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

