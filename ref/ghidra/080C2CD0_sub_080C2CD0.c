// sub_080C2CD0 at 0x080C2CD0 (thumb)

undefined4 sub_080C2CD0(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 2) = 1;
  *(undefined2 *)(param_1 + 6) = 0x10;
  sub_080C2CE4();
  return in_lr;
}

