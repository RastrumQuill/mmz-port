// sub_08037464 at 0x08037464 (thumb)

undefined4 sub_08037464(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined2 *)(param_1 + 0xe) = 2;
    sub_08038A5C(param_1,0);
  }
  return in_lr;
}

