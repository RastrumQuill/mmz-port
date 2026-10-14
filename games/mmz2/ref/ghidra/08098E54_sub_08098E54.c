// sub_08098E54 at 0x08098E54 (thumb)

undefined4 sub_08098E54(int param_1)

{
  undefined4 in_lr;
  
  sub_080AC60C(3,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

