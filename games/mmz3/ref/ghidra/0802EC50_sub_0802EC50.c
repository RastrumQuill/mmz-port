// sub_0802EC50 at 0x0802EC50 (thumb)

undefined4 sub_0802EC50(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x12e) = 1;
  if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != 0x2a00) {
    if (*(short *)(param_1 + 0xe8) == 0x100) {
      sub_080177CC(param_1,0x2a00,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72))
      ;
    }
    else {
      sub_08017700(param_1,0x2a00);
    }
  }
  pcVar2 = (char *)(param_1 + 0xee);
  if (*pcVar2 == '\0') {
    sub_080391B8(param_1,1);
    *pcVar2 = *pcVar2 + '\x01';
  }
  else {
    cVar1 = sub_080341A4(param_1,param_1 + 0x128);
    if (cVar1 == '\x01') {
      *(undefined *)(param_1 + 0xec) = 3;
      *(undefined *)(param_1 + 0xed) = 0;
      sub_0802E618(param_1);
    }
    else if (cVar1 != '\x02') {
      *(undefined *)(param_1 + 0xed) = 2;
      *pcVar2 = '\0';
      sub_0802ED08(param_1);
    }
  }
  return in_lr;
}

