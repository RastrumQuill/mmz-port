// sub_0801550C at 0x0801550C (thumb)

undefined4 sub_0801550C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x4c) = 0xf0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0x80;
    *(undefined4 *)(param_1 + 0x48) = 0x100;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

