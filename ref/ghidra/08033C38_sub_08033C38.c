// sub_08033C38 at 0x08033C38 (thumb)

undefined4 sub_08033C38(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,1);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080297C0(param_1);
  if (*(char *)(param_1 + 0x10) != '\0') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

