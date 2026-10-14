// sub_08035AC0 at 0x08035AC0 (thumb)

undefined4 sub_08035AC0(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x100) = 1;
  sub_08035AD4();
  return in_lr;
}

