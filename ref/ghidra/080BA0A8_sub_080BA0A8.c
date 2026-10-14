// sub_080BA0A8 at 0x080BA0A8 (thumb)

undefined4 sub_080BA0A8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x20) + 4) != '\x03') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080BA01C(param_1);
  }
  return in_lr;
}

