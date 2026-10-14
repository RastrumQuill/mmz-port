// sub_080AF448 at 0x080AF448 (thumb)

undefined4 sub_080AF448(int param_1)

{
  undefined4 in_lr;
  
  sub_08017700(param_1,0x8602);
  *(char *)(param_1 + 0x24) = *(char *)(param_1 + 0x12) + ' ';
  *(undefined *)(param_1 + 0xd) = 1;
  *(undefined *)(param_1 + 0x13) = 0;
  sub_080AF474(param_1);
  return in_lr;
}

