// sub_0803D970 at 0x0803D970 (thumb)

undefined4 sub_0803D970(int param_1)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0x3c;
    sub_08007390(param_1 + 0x74,&DAT_0835e268);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    do {
      uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar3 & 0x7fffffff;
      cVar1 = (&DAT_0835e28c)[uVar3 * 2 >> 0x11 & 1];
      if (cVar1 == *(char *)(param_1 + 0xbd)) {
        cVar2 = *(char *)(param_1 + 0xbc) + '\x01';
      }
      else {
        cVar2 = '\0';
      }
      *(char *)(param_1 + 0xbc) = cVar2;
    } while (1 < *(byte *)(param_1 + 0xbc));
    *(char *)(param_1 + 0xbd) = cVar1;
    *(char *)(param_1 + 0xd) = cVar1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

