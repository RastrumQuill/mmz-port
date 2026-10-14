// sub_08086F84 at 0x08086F84 (thumb)

undefined4 sub_08086F84(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb9) != '\0') {
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

