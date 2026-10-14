// sub_08065854 at 0x08065854 (thumb)

undefined4 sub_08065854(int param_1)

{
  undefined4 in_lr;
  
  sub_080128D4();
  *(undefined *)(param_1 + 0xd) = 1;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

