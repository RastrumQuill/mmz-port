// sub_080DAF44 at 0x080DAF44 (thumb)

undefined4 sub_080DAF44(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x28) + 4) == '\x01') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080DAF64(param_1);
  }
  return in_lr;
}

