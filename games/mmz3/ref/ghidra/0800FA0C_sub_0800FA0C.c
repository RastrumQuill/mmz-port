// sub_0800FA0C at 0x0800FA0C (thumb)

undefined4 sub_0800FA0C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x44) = 0xc0;
    *(undefined4 *)(param_1 + 0x4c) = 0x6cc;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

