// sub_0803298C at 0x0803298C (thumb)

undefined4 sub_0803298C(int param_1)

{
  undefined4 in_lr;
  
  if ((((*(char *)(param_1 + 0xec) == '\x03') && (*(char *)(param_1 + 0x128) == '\x01')) &&
      (*(char *)(param_1 + 0xd) == '\x01')) && (*(char *)(param_1 + 0xed) == '\x02')) {
    *(undefined *)(param_1 + 0x12d) = 0xff;
    *(char *)(param_1 + 0xec) = '\0';
  }
  return in_lr;
}

