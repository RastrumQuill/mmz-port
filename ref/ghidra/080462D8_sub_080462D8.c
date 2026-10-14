// sub_080462D8 at 0x080462D8 (thumb)

undefined4 sub_080462D8(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,5);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    sub_08001EAC(0xa6);
  }
  sub_080297C0(param_1);
  *(char *)(param_1 + 0xde) = *(char *)(param_1 + 0xde) + '\x01';
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      sub_08029778(param_1,6);
      sub_080297C0(param_1);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      if (*(short *)(param_1 + 0x8c) < 0x20) {
        *(undefined *)(param_1 + 0x12) = 0x30;
      }
      else if (*(short *)(param_1 + 0x8c) < 0x30) {
        *(undefined *)(param_1 + 0x12) = 0x38;
      }
      else {
        *(undefined *)(param_1 + 0x12) = 0x40;
      }
    }
  }
  else {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(undefined *)(param_1 + 0xd) = 0x13;
      *(undefined *)(param_1 + 0xe) = 1;
    }
  }
  return in_lr;
}

