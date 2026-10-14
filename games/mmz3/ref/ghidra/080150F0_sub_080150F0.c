// sub_080150F0 at 0x080150F0 (thumb)

undefined4 sub_080150F0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x44) = 0x100;
    *(undefined4 *)(param_1 + 0x48) = 0x80;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0x4b0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

