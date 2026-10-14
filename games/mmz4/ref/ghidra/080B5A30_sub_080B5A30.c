// sub_080B5A30 at 0x080B5A30 (thumb)

undefined4 sub_080B5A30(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_088605d8);
    sub_0801CF00(param_1,0xb500);
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if ((*(char *)(param_1 + 0x13) == '\0') && ('\x0f' < *(char *)(param_1 + 0x71))) {
    sub_08005784(param_1 + 0x74,&DAT_088605c0);
    *(undefined *)(param_1 + 0x13) = 1;
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

