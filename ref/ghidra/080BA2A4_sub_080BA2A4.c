// sub_080BA2A4 at 0x080BA2A4 (thumb)

undefined4 sub_080BA2A4(int param_1)

{
  undefined4 in_lr;
  
  if (1 < (byte)(*(char *)(*(int *)(param_1 + 0x20) + 4) - 5U)) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080BA210(param_1);
  }
  return in_lr;
}

