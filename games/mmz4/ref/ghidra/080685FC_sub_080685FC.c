// sub_080685FC at 0x080685FC (thumb)

undefined4 sub_080685FC(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xa91b);
    sub_08005784(param_1 + 0x74,&DAT_08858068);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if ((*(char *)(param_1 + 0x73) == '\x03') &&
     ((*(int *)(*(int *)(param_1 + 0x2c) + 0x54) - *(int *)(param_1 + 0x54)) + 0x8c00U < 0x11801)) {
    *(undefined *)(param_1 + 0xd) = 0x26;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

