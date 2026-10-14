// sub_0800D2F0 at 0x0800D2F0 (thumb)

undefined4 sub_0800D2F0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x44) = 0x180;
    *(undefined4 *)(param_1 + 0x4c) = 0xffffff10;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

