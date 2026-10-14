// sub_080BA054 at 0x080BA054 (thumb)

undefined4 sub_080BA054(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x20) + 4) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080BA070(param_1);
  }
  return in_lr;
}

