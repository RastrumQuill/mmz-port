// sub_08059E9C at 0x08059E9C (thumb)

undefined4 sub_08059E9C(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_088553a8);
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != -0x5cff) {
      sub_0801CF00(param_1);
      *(undefined *)(param_1 + 0xbd) = 1;
    }
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  if (((DAT_0202e918 & 8) == 0) &&
     (((*(int *)(param_1 + 200) == 0 ||
       ((((cVar1 = *(char *)(param_1 + 0xbf), 1 < (byte)(cVar1 - 1U) && (cVar1 != '\x04')) &&
         (cVar1 != '\x05')) && (cVar1 != '\x03')))) && (*(char *)(param_1 + 0x12) == '\0')))) {
    sub_0805BF54(param_1);
  }
  return in_lr;
}

