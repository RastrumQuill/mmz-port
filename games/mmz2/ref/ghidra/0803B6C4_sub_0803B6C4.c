// sub_0803B6C4 at 0x0803B6C4 (thumb)

undefined4 sub_0803B6C4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x28) + 0x179) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 1;
    sub_0803B8C4(param_1,1);
  }
  return in_lr;
}

