// sub_0802D288 at 0x0802D288 (thumb)

undefined4 sub_0802D288(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_080341A4(param_1,param_1 + 0x128);
  if (cVar1 == '\0') {
    cVar1 = *(char *)(param_1 + 299);
    if (cVar1 == -1) {
      *(char *)(param_1 + 299) = -1;
      return in_lr;
    }
    *(char *)(param_1 + 0x128) = cVar1;
    *(undefined *)(param_1 + 0xec) = 3;
    *(undefined *)(param_1 + 0xed) = 0;
  }
  else {
    *(undefined *)(param_1 + 299) = 0xff;
    *(undefined *)(param_1 + 0xec) = 3;
    *(undefined *)(param_1 + 0xed) = 0;
  }
  sub_0802D300(param_1);
  return in_lr;
}

