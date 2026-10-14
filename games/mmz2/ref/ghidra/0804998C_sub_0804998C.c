// sub_0804998C at 0x0804998C (thumb)

undefined4 sub_0804998C(int param_1)

{
  undefined4 in_lr;
  
  sub_080128D4();
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x2000;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(char *)(*(int *)(param_1 + 200) + 0xd) == '\x01') {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

