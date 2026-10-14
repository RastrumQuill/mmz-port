// sub_0800B750 at 0x0800B750 (thumb)

undefined4 sub_0800B750(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

