// sub_08023FEC at 0x08023FEC (thumb)

undefined4 sub_08023FEC(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    cVar1 = sub_08017EC0(param_1);
    if (cVar1 != '\x01') {
      if (cVar1 == '\x02') {
        sub_08024090(param_1);
        return in_lr;
      }
      sub_0802411C(param_1);
      return in_lr;
    }
  }
  *(undefined *)(param_1 + 0xc1) = *(undefined *)(param_1 + 0xbe);
  *(undefined *)(param_1 + 0xbe) = 1;
  *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
  *(undefined *)(param_1 + 0xbf) = 0;
  *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
  *(undefined *)(param_1 + 0xc0) = 0;
  sub_0802404C(param_1);
  return in_lr;
}

