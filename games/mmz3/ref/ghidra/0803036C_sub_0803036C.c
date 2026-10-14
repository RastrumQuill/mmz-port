// sub_0803036C at 0x0803036C (thumb)

undefined4 sub_0803036C(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  pcVar2 = (char *)(param_1 + 0xee);
  if (*pcVar2 == '\0') {
    sub_08017700(param_1,0x2b02);
    *pcVar2 = *pcVar2 + '\x01';
  }
  *(byte *)(param_1 + 0x124) = *(byte *)(param_1 + 0x124) | 4;
  cVar1 = sub_080341A4(param_1,param_1 + 0x128);
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      if (*(char *)(param_1 + 0xe) == '\x01') {
        sub_080177CC(param_1,0x403,2,1);
      }
      else {
        sub_080177CC(param_1,0x404,2,1);
      }
      *(undefined *)(param_1 + 0xec) = 0;
    }
  }
  else {
    *(undefined *)(param_1 + 0xec) = 3;
    *(undefined *)(param_1 + 0xed) = 0;
    sub_0802F6B8(param_1);
  }
  return in_lr;
}

