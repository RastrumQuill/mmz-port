// sub_080DB2F0 at 0x080DB2F0 (thumb)

undefined4 sub_080DB2F0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x28) + 4) == '\x04') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080DB310(param_1);
  }
  return in_lr;
}

