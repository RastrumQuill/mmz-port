// sub_0809D41C at 0x0809D41C (thumb)

undefined4 sub_0809D41C(int param_1)

{
  undefined4 in_lr;
  
  sub_080032EC(0x3f);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

