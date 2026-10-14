// sub_08029580 at 0x08029580 (thumb)

undefined4 sub_08029580(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xf) = 1;
  sub_0801E9FC(param_1,0x89);
  return in_lr;
}

