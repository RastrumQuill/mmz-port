// sub_080DB1BC at 0x080DB1BC (thumb)

undefined4 sub_080DB1BC(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x28) + 4) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080DB1D8(param_1);
  }
  return in_lr;
}

