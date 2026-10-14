// sub_080AF0B4 at 0x080AF0B4 (thumb)

undefined4 sub_080AF0B4(int param_1)

{
  undefined4 in_lr;
  
  sub_08017700(param_1,0x8605);
  *(char *)(param_1 + 0x24) = *(char *)(param_1 + 0x12) + ' ';
  *(undefined *)(param_1 + 0xd) = 1;
  sub_080AF0DC(param_1);
  return in_lr;
}

