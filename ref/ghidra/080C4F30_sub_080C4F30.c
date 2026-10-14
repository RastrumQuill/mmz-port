// sub_080C4F30 at 0x080C4F30 (thumb)

undefined4 sub_080C4F30(int param_1)

{
  undefined4 in_lr;
  
  *(undefined2 *)(param_1 + 4) = 1;
  *(undefined *)(param_1 + 0x9e8) = 4;
  sub_080C4F4C();
  return in_lr;
}

