// sub_08075CEC at 0x08075CEC (thumb)

undefined4 sub_08075CEC(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xaf08);
    *(undefined *)(param_1 + 0x12) = 0xc;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if ('\x02' < *(char *)(param_1 + 0x71)) {
      sub_08005784(param_1 + 0x74,&DAT_088599b8);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else if (*(char *)(param_1 + 0xf) == '\x01') {
    if (*(char *)(param_1 + 0x73) == '\x04') {
      *(undefined *)(param_1 + 0xf) = 2;
    }
  }
  else {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(undefined *)(param_1 + 0xd) = 0xf;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

