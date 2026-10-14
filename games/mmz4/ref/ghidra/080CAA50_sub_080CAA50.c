// sub_080CAA50 at 0x080CAA50 (thumb)

undefined4 sub_080CAA50(int param_1)

{
  undefined4 in_lr;
  
  sub_080D0894(3,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

