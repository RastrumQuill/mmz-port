// sub_080BA14C at 0x080BA14C (thumb)

undefined4 sub_080BA14C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x20) + 4) == '\x04') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080BA16C(param_1);
  }
  return in_lr;
}

