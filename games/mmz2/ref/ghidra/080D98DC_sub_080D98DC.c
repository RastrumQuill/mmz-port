// sub_080D98DC at 0x080D98DC (thumb)

undefined4 sub_080D98DC(int param_1)

{
  undefined4 in_lr;
  
  sub_080D9894();
  sub_080D568C(*(undefined4 *)(param_1 + 0x28),param_1);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834a1a0)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

