// sub_0800D6DC at 0x0800D6DC (thumb)

undefined4 sub_0800D6DC(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x44) = 0x100;
    *(undefined4 *)(param_1 + 0x48) = 0x80;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0x140;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

