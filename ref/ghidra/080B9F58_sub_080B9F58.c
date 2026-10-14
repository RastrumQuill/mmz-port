// sub_080B9F58 at 0x080B9F58 (thumb)

undefined4 sub_080B9F58(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x20) + 4) == '\x02') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080B9F78(param_1);
  }
  return in_lr;
}

