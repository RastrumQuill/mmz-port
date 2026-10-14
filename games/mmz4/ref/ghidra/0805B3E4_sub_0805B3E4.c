// sub_0805B3E4 at 0x0805B3E4 (thumb)

undefined4 sub_0805B3E4(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0xc0);
    if ((*(int *)(param_1 + 200) != 0) && (*(char *)(param_1 + 0xbf) == '\x05')) {
      *(undefined *)(*(int *)(param_1 + 200) + 0xb4) = 1;
    }
    sub_08005784(param_1 + 0x74,&DAT_088553a8);
    sub_0801CF00(param_1,0xa30e);
    *(undefined *)(param_1 + 0xbd) = 1;
    *(undefined *)(param_1 + 0x12) = 0x30;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (((*(char *)(param_1 + 0x12) == '\0') ||
      (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) &&
     (*(char *)(param_1 + 0x73) == '\x03')) {
    *(undefined *)(param_1 + 0xe) = 3;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

