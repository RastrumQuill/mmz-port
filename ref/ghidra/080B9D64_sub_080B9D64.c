// sub_080B9D64 at 0x080B9D64 (thumb)

undefined4 sub_080B9D64(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x20) + 4) == '\0') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080B9D80(param_1);
  }
  return in_lr;
}

