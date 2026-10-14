// sub_08090CA4 at 0x08090CA4 (thumb)

undefined4 sub_08090CA4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

