// sub_0800FD20 at 0x0800FD20 (thumb)

undefined4 sub_0800FD20(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

