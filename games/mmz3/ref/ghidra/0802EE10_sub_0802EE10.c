// sub_0802EE10 at 0x0802EE10 (thumb)

undefined4 sub_0802EE10(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xec) = 1;
  sub_0802EE24();
  return in_lr;
}

