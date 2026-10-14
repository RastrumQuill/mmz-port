// sub_0803276C at 0x0803276C (thumb)

undefined4 sub_0803276C(int param_1,short param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x13b) = 0x10;
  pcVar2 = (char *)(param_1 + 0xee);
  if (*pcVar2 == '\0') {
    sub_08017700(param_1);
    sub_0803964C(param_1);
    *pcVar2 = *pcVar2 + '\x01';
  }
  else {
    sub_08034558(param_1,param_2);
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != param_2) {
      sub_080177CC(param_1,param_2,*(undefined *)(param_1 + 0x140),*(undefined *)(param_1 + 0x141));
    }
    if ((*(char *)(param_1 + 0x71) < '\x06') ||
       (cVar1 = sub_080341A4(param_1,param_1 + 0x128), cVar1 == '\0')) {
      if (*(char *)(param_1 + 0x73) == '\x03') {
        if (*(char *)(param_1 + 0xe) == '\x01') {
          sub_080177CC(param_1,0x403,2,1);
        }
        else {
          sub_080177CC(param_1,0x404,2,1);
        }
        *(undefined *)(param_1 + 0xec) = 0;
        *(undefined *)(param_1 + 0x126) = 0xff;
      }
    }
    else {
      *(undefined *)(param_1 + 0xec) = 3;
      *(undefined *)(param_1 + 0xed) = 0;
      sub_0802F6B8(param_1);
    }
  }
  return in_lr;
}

