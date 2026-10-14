// sub_08010728 at 0x08010728 (thumb)

undefined4 sub_08010728(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x4c) = 0xe98;
    *(undefined4 *)(param_1 + 0x50) = 0xa0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

