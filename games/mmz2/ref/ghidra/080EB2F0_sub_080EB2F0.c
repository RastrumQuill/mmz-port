// sub_080EB2F0 at 0x080EB2F0 (thumb)

undefined4 sub_080EB2F0(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 3) = 1;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xddc) = 0x4400;
  *(undefined4 *)(param_1 + 0xde0) = 0x3a00;
  sub_080EBAE8(param_1);
  sub_080DA9D8(param_1);
  return in_lr;
}

