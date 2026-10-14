// sub_08030E64 at 0x08030E64 (thumb)

undefined4 sub_08030E64(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x12e) = 3;
  if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != 0x2d00) {
    sub_08017700(param_1,0x2d00);
  }
  pcVar2 = (char *)(param_1 + 0xee);
  if (*pcVar2 == '\0') {
    sub_080391B8(param_1,3);
    *pcVar2 = *pcVar2 + '\x01';
  }
  else {
    cVar1 = sub_080341A4(param_1,param_1 + 0x128);
    if (cVar1 == '\x01') {
      *(undefined *)(param_1 + 0xec) = 3;
      *(undefined *)(param_1 + 0xed) = 0;
      sub_080306B4(param_1);
    }
    else if (cVar1 != '\x02') {
      *(undefined *)(param_1 + 0xed) = 2;
      *pcVar2 = '\0';
      sub_08030EEC(param_1);
    }
  }
  return in_lr;
}

