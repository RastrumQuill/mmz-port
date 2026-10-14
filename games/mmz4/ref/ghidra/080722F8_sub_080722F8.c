// sub_080722F8 at 0x080722F8 (thumb)

undefined4 sub_080722F8(int param_1)

{
  undefined4 in_lr;
  
  sub_08073AE8();
  sub_08128884(param_1,*(undefined4 *)(&DAT_088592ac + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

