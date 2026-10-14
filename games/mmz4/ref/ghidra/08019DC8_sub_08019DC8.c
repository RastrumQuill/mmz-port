// sub_08019DC8 at 0x08019DC8 (thumb)

undefined4 sub_08019DC8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x50) = 0x3c0;
    *(undefined4 *)(param_1 + 0x48) = 0x80;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

