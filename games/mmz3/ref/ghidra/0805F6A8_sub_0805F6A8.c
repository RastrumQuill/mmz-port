// sub_0805F6A8 at 0x0805F6A8 (thumb)

undefined4 sub_0805F6A8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x2c) + 0xd) == '\x01') {
    *(undefined *)(param_1 + 0xf) = 2;
    sub_08060768(param_1,6);
  }
  return in_lr;
}

