// sub_080E8274 at 0x080E8274 (thumb)

undefined4 sub_080E8274(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 2) = 1;
  *(undefined2 *)(param_1 + 6) = 0x10;
  sub_080E8288();
  return in_lr;
}

