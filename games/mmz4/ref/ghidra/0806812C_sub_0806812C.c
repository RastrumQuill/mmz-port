// sub_0806812C at 0x0806812C (thumb)

undefined4 sub_0806812C(int param_1)

{
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xa91f);
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if ((*(char *)(param_1 + 0xf) == '\0') && ('\x04' < *(char *)(param_1 + 0x71))) {
    local_14 = *(int *)(param_1 + 0x54) + -0x2300;
    local_10 = *(int *)(param_1 + 0x58) + -0x4500;
    sub_0809CA78(param_1,&local_14,3,0);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0x1d;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

