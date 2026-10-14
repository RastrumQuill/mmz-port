// sub_080C6134 at 0x080C6134 (thumb)

undefined4 sub_080C6134(int param_1)

{
  undefined4 in_lr;
  
  *(undefined2 *)(param_1 + 4) = 1;
  *(undefined *)(param_1 + 0x9e7) = 4;
  sub_080C6150();
  return in_lr;
}

