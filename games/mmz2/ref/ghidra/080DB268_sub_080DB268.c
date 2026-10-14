// sub_080DB268 at 0x080DB268 (thumb)

undefined4 sub_080DB268(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xd) = 1;
  sub_080DB278();
  return in_lr;
}

