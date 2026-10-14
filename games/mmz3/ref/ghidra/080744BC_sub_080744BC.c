// sub_080744BC at 0x080744BC (thumb)

undefined4 sub_080744BC(int param_1)

{
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x8c) & 1) != 0) && ((*(uint *)(param_1 + 0x8c) & 0x20000) != 0)) {
    *(undefined *)(param_1 + 0xd) = 10;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

