// sub_08034784 at 0x08034784 (thumb)

undefined4 sub_08034784(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0xc);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080297C0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0xb;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

