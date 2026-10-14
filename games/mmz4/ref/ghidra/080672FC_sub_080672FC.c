// sub_080672FC at 0x080672FC (thumb)

undefined4 sub_080672FC(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xa90c);
    sub_08002B10(0x60);
    sub_08002B10(0x61);
    *(undefined2 *)(param_1 + 0xe0) = 0x61;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if ('\x04' < *(char *)(param_1 + 0x71)) {
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

