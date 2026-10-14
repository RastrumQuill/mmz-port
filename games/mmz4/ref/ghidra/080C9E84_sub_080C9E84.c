// sub_080C9E84 at 0x080C9E84 (thumb)

undefined4 sub_080C9E84(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(char *)(param_1 + 0x13) = (char)((~(uint)*(byte *)(param_1 + 0x11) & 3) << 2);
    *(undefined *)(param_1 + 0xe) = 1;
  }
  if (*(char *)(param_1 + 0x13) == '\0') {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else {
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + -1;
  }
  return in_lr;
}

