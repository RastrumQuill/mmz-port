// sub_080DB230 at 0x080DB230 (thumb)

undefined4 sub_080DB230(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x28) + 4) != '\x03') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080DB164(param_1);
  }
  return in_lr;
}

