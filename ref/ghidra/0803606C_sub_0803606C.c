// sub_0803606C at 0x0803606C (thumb)

undefined4 sub_0803606C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,9);
    *(undefined *)(*(int *)(param_1 + 0x24) + 0xe) = 1;
    *(undefined *)(*(int *)(param_1 + 0x24) + 0x11) = 9;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_0800561C(param_1 + 0x74,&DAT_082ad718);
  }
  sub_080297C0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0xb;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

