// sub_080B9FB0 at 0x080B9FB0 (thumb)

undefined4 sub_080B9FB0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x20) + 4) != '\x02') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080B9F20(param_1);
  }
  return in_lr;
}

