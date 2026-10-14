// sub_08037428 at 0x08037428 (thumb)

undefined4 sub_08037428(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x24) + 0xd) == '\x01') {
    *(undefined *)(param_1 + 0xf) = 2;
    sub_08038A5C(param_1,6);
  }
  return in_lr;
}

