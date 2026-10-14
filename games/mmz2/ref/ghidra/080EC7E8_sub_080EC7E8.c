// sub_080EC7E8 at 0x080EC7E8 (thumb)

undefined4 sub_080EC7E8(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 2) = 1;
  *(undefined *)(param_1 + 3) = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined2 *)(param_1 + 6) = 0x10;
  sub_080EC800();
  return in_lr;
}

