// sub_080302E4 at 0x080302E4 (thumb)

undefined4 sub_080302E4(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x12e) = 2;
  if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != 0x2b00) {
    sub_08017700(param_1,0x2b00);
  }
  pcVar2 = (char *)(param_1 + 0xee);
  if (*pcVar2 == '\0') {
    sub_080391B8(param_1,2);
    *pcVar2 = *pcVar2 + '\x01';
  }
  else {
    cVar1 = sub_080341A4(param_1,param_1 + 0x128);
    if (cVar1 == '\x01') {
      *(undefined *)(param_1 + 0xec) = 3;
      *(undefined *)(param_1 + 0xed) = 0;
      sub_0802F6B8(param_1);
    }
    else if (cVar1 != '\x02') {
      *(undefined *)(param_1 + 0xed) = 2;
      *pcVar2 = '\0';
      sub_0803036C(param_1);
    }
  }
  return in_lr;
}

