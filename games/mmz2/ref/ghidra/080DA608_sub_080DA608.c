// sub_080DA608 at 0x080DA608 (thumb)

undefined4 sub_080DA608(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xd) = 1;
  *(undefined *)(param_1 + 0x13) = 0;
  sub_080DA61C();
  return in_lr;
}

