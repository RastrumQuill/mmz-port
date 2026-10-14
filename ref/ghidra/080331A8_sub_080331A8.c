// sub_080331A8 at 0x080331A8 (thumb)

undefined4 sub_080331A8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0x1a);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(*(int *)(param_1 + 0x24) + 0x10) = 1;
  }
  sub_080297C0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0x2e;
    *(undefined *)(param_1 + 0xe) = 1;
    sub_0800561C(param_1 + 0x74,&DAT_082ad494);
  }
  return in_lr;
}

