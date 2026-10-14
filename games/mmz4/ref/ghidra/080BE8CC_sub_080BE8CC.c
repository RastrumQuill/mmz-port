// sub_080BE8CC at 0x080BE8CC (thumb)

undefined4 sub_080BE8CC(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb8) != '\0') {
    *(undefined *)(*(int *)(param_1 + 0xb4) + 0xc9) = 0;
    *(char *)(param_1 + 0xb8) = '\0';
  }
  sub_080BD014(param_1);
  return in_lr;
}

