// sub_0803309C at 0x0803309C (thumb)

undefined4 sub_0803309C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0x17);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080297C0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0x20;
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0x12) = 0;
  }
  return in_lr;
}

