// sub_080CBD38 at 0x080CBD38 (thumb)

undefined4 sub_080CBD38(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
  sub_080C9918();
  return in_lr;
}

