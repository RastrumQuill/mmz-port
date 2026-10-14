// sub_08030C74 at 0x08030C74 (thumb)

undefined4 sub_08030C74(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,2);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xc1) = 4;
  }
  sub_080297C0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 9;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

