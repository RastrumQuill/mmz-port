// sub_080BA1A4 at 0x080BA1A4 (thumb)

undefined4 sub_080BA1A4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x20) + 4) != '\x04') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080BA114(param_1);
  }
  return in_lr;
}

