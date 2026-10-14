// sub_08030B48 at 0x08030B48 (thumb)

undefined4 sub_08030B48(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x126) = 9;
  *(undefined *)(param_1 + 0x13b) = 0x10;
  pcVar2 = (char *)(param_1 + 0xee);
  if (*pcVar2 == '\0') {
    sub_08017700(param_1,0x2400);
    sub_0803964C(param_1);
    *pcVar2 = *pcVar2 + '\x01';
  }
  else {
    sub_08034558(param_1,0x2400);
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != 0x2400) {
      sub_080177CC(param_1,0x2400,*(undefined *)(param_1 + 0x140),*(undefined *)(param_1 + 0x141));
    }
    if ((*(char *)(param_1 + 0x71) < '\x06') ||
       (cVar1 = sub_080341A4(param_1,param_1 + 0x128), cVar1 == '\0')) {
      if (*(char *)(param_1 + 0x73) == '\x03') {
        sub_080177CC(param_1,0x500,4,1);
        *(undefined *)(param_1 + 0xec) = 0;
        *(undefined *)(param_1 + 0x126) = 0xff;
      }
    }
    else {
      *(undefined *)(param_1 + 0xec) = 3;
      *(undefined *)(param_1 + 0xed) = 0;
      sub_080306B4(param_1);
    }
  }
  return in_lr;
}

