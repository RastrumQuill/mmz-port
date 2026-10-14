// sub_0800F710 at 0x0800F710 (thumb)

undefined4 sub_0800F710(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

