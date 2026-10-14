// sub_080B1C84 at 0x080B1C84 (thumb)

undefined4 sub_080B1C84(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(*(int *)(param_1 + 0xc) + 4) + 1) == '\0') {
    *(undefined *)(*(int *)(param_1 + 0x2c) + 0xbc) = 1;
  }
  return in_lr;
}

