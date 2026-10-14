// sub_08031EFC at 0x08031EFC (thumb)

undefined4 sub_08031EFC(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x12e) = 4;
  if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != 0x2f00) {
    sub_08017700(param_1);
  }
  pcVar2 = (char *)(param_1 + 0xee);
  if (*pcVar2 == '\0') {
    sub_080391B8(param_1,4);
    *pcVar2 = *pcVar2 + '\x01';
  }
  else {
    cVar1 = sub_080341A4(param_1,param_1 + 0x128);
    if (cVar1 == '\x01') {
      *(undefined *)(param_1 + 0xec) = 3;
      *(undefined *)(param_1 + 0xed) = 0;
      sub_080311C0(param_1);
    }
    else if (cVar1 != '\x02') {
      *(undefined *)(param_1 + 0xed) = 2;
      *pcVar2 = '\0';
      sub_08031F84(param_1);
    }
  }
  return in_lr;
}

