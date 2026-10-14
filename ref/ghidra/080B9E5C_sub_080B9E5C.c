// sub_080B9E5C at 0x080B9E5C (thumb)

undefined4 sub_080B9E5C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x20) + 4) == '\x01') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080B9E7C(param_1);
  }
  return in_lr;
}

