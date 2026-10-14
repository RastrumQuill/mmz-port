// sub_080186D0 at 0x080186D0 (thumb)

undefined4 sub_080186D0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x4c) = 0x1e0;
    *(undefined4 *)(param_1 + 0x50) = 0xe0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0x40;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

