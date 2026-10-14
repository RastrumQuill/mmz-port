// sub_08095834 at 0x08095834 (thumb)

undefined4 sub_08095834(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xd) != '\x03') && ((*(uint *)(param_1 + 0x8c) & 0x20000) != 0)) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

