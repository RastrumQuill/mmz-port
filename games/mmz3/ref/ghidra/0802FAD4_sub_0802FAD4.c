// sub_0802FAD4 at 0x0802FAD4 (thumb)

undefined4 sub_0802FAD4(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  pcVar1 = (char *)(param_1 + 0xee);
  if (*pcVar1 == '\0') {
    sub_08017700(param_1,0x1901);
    *pcVar1 = *pcVar1 + '\x01';
  }
  else {
    sub_08034558(param_1,0x1901);
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    if (*(char *)(param_1 + 0xe) == '\x01') {
      sub_080177CC(param_1,0x403,2,1);
    }
    else {
      sub_080177CC(param_1,0x404,2,1);
    }
    *(undefined *)(param_1 + 0xec) = 0;
  }
  return in_lr;
}

