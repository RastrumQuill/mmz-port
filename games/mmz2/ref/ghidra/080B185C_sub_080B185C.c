// sub_080B185C at 0x080B185C (thumb)

undefined4 sub_080B185C(int param_1)

{
  undefined4 in_lr;
  
  sub_080AC60C(1,param_1 + 0x54);
  sub_080032EC(0x2a);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

