// sub_08069248 at 0x08069248 (thumb)

undefined4 sub_08069248(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
  sub_080635F4();
  return in_lr;
}

