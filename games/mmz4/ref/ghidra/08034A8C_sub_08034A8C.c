// sub_08034A8C at 0x08034A8C (thumb)

undefined4 sub_08034A8C(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x100) = 1;
  sub_08034AA0();
  return in_lr;
}

