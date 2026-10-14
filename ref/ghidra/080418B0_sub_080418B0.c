// sub_080418B0 at 0x080418B0 (thumb)

undefined4 sub_080418B0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,3);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0x40;
  }
  sub_080297C0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 2;
    *(undefined *)(param_1 + 0x12) = 4;
  }
  return in_lr;
}

