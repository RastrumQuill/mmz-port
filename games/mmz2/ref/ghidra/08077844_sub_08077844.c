// sub_08077844 at 0x08077844 (thumb)

undefined4 sub_08077844(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801260C();
    *(undefined *)(param_1 + 0x24) = 0;
    sub_080127E4(param_1,0x1601);
    *(undefined *)(param_1 + 0xb5) = 0;
    *(char *)(param_1 + 0x12) = (char)((int)(0x13f - *(byte *)(param_1 + 0xb6) & 0xff) >> 1);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(byte *)(param_1 + 0x12) & 0xf) == 0) {
    sub_080032EC(0x2c);
    sub_08098414(param_1 + 0x54,0x200,*(char *)(param_1 + 0xb5));
    sub_08098414(param_1 + 0x54,0x200,*(char *)(param_1 + 0xb5) + -0x80);
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x12) == '\0') {
    sub_08077BB4(param_1);
  }
  else {
    cVar1 = *(char *)(param_1 + 0xb5) + -2;
    *(char *)(param_1 + 0xb5) = cVar1;
    *(char *)(param_1 + 0x24) = cVar1;
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  return in_lr;
}

