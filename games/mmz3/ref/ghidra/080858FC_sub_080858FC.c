// sub_080858FC at 0x080858FC (thumb)

undefined4 sub_080858FC(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

