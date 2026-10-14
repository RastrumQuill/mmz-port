// sub_080AFBCC at 0x080AFBCC (thumb)

undefined4 sub_080AFBCC(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,*(byte *)(param_1 + 0xb7) + 0xa604);
    if (*(char *)(param_1 + 0x10) == '\0') {
      sub_08005784(param_1 + 0x74,&DAT_0885fcd8);
      *(undefined *)(*(int *)(param_1 + 0x2c) + 0xd) = 4;
      *(undefined *)(*(int *)(param_1 + 0x2c) + 0xe) = 0;
      *(undefined *)(param_1 + 0x12) = 0x3c;
      sub_08002B10(0x132);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar1 = sub_080AFF5C(param_1);
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x10) == '\0')) {
    sub_08005784(param_1 + 0x74,&DAT_0885fca8);
    *(undefined *)(param_1 + 0x13) = 0xb4;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

