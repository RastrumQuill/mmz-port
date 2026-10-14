// sub_080988FC at 0x080988FC (thumb)

undefined4 sub_080988FC(int param_1)

{
  undefined4 in_lr;
  
  sub_080AC60C(2,param_1 + 0x54);
  sub_080032EC(0x2a);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

