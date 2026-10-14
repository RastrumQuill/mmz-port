// sub_08031134 at 0x08031134 (thumb)

undefined4 sub_08031134(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xec) = 1;
  sub_08031148();
  return in_lr;
}

