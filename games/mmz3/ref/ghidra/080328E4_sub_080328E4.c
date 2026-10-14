// sub_080328E4 at 0x080328E4 (thumb)

undefined4 sub_080328E4(int param_1,short param_2)

{
  char *pcVar1;
  undefined4 in_lr;
  
  pcVar1 = (char *)(param_1 + 0xee);
  if (*pcVar1 == '\0') {
    sub_08017700();
    *(undefined *)(param_1 + 0x135) = 0;
    sub_0803964C(param_1);
    *pcVar1 = *pcVar1 + '\x01';
  }
  else {
    sub_08034558(param_1,param_2);
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != param_2) {
      sub_080177CC(param_1,param_2,*(undefined *)(param_1 + 0x140),*(undefined *)(param_1 + 0x141));
    }
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
  return in_lr;
}

