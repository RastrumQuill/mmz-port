// sub_08081EE4 at 0x08081EE4 (thumb)

undefined4 sub_08081EE4(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x25) = 0x18;
    sub_08081F98(param_1,0);
    *(undefined *)(param_1 + 0x12) = 0x3c;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if ((*(char *)(param_1 + 0xe) == '\x01') &&
     (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
    sub_080127E4(param_1,0x6600);
    *(undefined *)(param_1 + 0x12) = 0x21;
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    if (*(char *)(param_1 + 0xe) != '\x02') {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd) = 0;
    cVar1 = '\0';
  }
  *(char *)(param_1 + 0xe) = cVar1;
  return in_lr;
}

