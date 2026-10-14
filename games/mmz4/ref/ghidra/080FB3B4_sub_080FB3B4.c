// sub_080FB3B4 at 0x080FB3B4 (thumb)

undefined4 sub_080FB3B4(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    sub_0801CF00(param_1,0xc401);
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x30) = &DAT_08867674;
    *(undefined2 *)(param_1 + 0x26) = 0x8201;
    *(undefined *)(param_1 + 0x12) = 0x80;
    if (*(char *)(param_1 + 0xbd) != '\0') {
      sub_08002B10(0x40);
      sub_08002624(0x36);
      sub_0800249C(0xac,0);
      *(char *)(param_1 + 0xbd) = '\0';
    }
    *(undefined *)(param_1 + 0xd) = 1;
  }
  pcVar2 = (char *)(param_1 + 0xbd);
  if ((*(char *)(param_1 + 0xd) != '\0') &&
     (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == -1)) {
    if (*pcVar2 == '\0') {
      sub_08002624(0xac);
      sub_0800249C(0x36,0);
      *pcVar2 = '\x01';
    }
    sub_0801CF00(param_1,0xc400);
    sub_08005784(param_1 + 0x74,&DAT_0886762c);
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
    *(undefined *)(param_1 + 0xd) = 0;
  }
  sub_0801CFF0(param_1);
  if (*pcVar2 == '\0') {
    sub_080025D8(0xac);
  }
  else {
    sub_080025D8(0x36);
  }
  return in_lr;
}

