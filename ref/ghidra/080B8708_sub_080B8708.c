// sub_080B8708 at 0x080B8708 (thumb)

undefined4 sub_080B8708(int param_1)

{
  undefined4 in_lr;
  
  sub_080B8698();
  sub_080B4434(*(undefined4 *)(param_1 + 0x20),param_1);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b6e70)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

