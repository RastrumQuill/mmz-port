// sub_08081BA4 at 0x08081BA4 (thumb)

undefined4 sub_08081BA4(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x6602);
    sub_08081F98(param_1,10);
    *(undefined *)(param_1 + 0x12) = 0xc;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  cVar1 = sub_080EF330(*(undefined *)(param_1 + 0x12),0xc);
  if (cVar1 == '\0') {
    sub_080032EC(0x36);
  }
  if ((*(char *)(param_1 + 0x12) == '\0') && (*(char *)(param_1 + 0x73) == '\x04')) {
    *(undefined *)(param_1 + 0xd) = 6;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

