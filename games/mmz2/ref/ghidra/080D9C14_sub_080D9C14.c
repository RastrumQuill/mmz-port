// sub_080D9C14 at 0x080D9C14 (thumb)

undefined4 sub_080D9C14(int param_1)

{
  undefined4 in_lr;
  
  if (((param_1 != 0) && (*(char *)(param_1 + 9) == '\f')) && (*(char *)(param_1 + 0x11) == '\0')) {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  }
  return in_lr;
}

