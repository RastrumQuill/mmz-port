// sub_080343F8 at 0x080343F8 (thumb)

undefined4 sub_080343F8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,2);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080297C0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = *(undefined *)(param_1 + 0xf);
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

