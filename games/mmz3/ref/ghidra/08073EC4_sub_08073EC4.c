// sub_08073EC4 at 0x08073EC4 (thumb)

undefined4 sub_08073EC4(int param_1)

{
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x14) & 8) != 0) &&
      (*(char *)(*(int *)(param_1 + 0x2c) + 0x10) == '\x01')) &&
     ((*(uint *)(param_1 + 0x14) & 0x10000) != 0)) {
    sub_08073E74(*(int *)(param_1 + 0x2c));
  }
  return in_lr;
}

