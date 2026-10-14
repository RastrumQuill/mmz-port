// sub_08034D9C at 0x08034D9C (thumb)

undefined4 sub_08034D9C(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(*(int *)(param_1 + 0x28) + 0xd6) != '\0') &&
     (*(char *)(*(int *)(param_1 + 0x28) + 1) != '\x03')) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

