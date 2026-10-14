// sub_0802337C at 0x0802337C (thumb)

undefined4 sub_0802337C(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    cVar1 = sub_08017E30(param_1);
    if (cVar1 != '\x01') {
      if (cVar1 == '\x02') {
        sub_08023420(param_1);
        return in_lr;
      }
      sub_080234AC(param_1);
      return in_lr;
    }
  }
  *(undefined *)(param_1 + 0xc1) = *(undefined *)(param_1 + 0xbe);
  *(undefined *)(param_1 + 0xbe) = 1;
  *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
  *(undefined *)(param_1 + 0xbf) = 0;
  *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
  *(undefined *)(param_1 + 0xc0) = 0;
  sub_080233DC(param_1);
  return in_lr;
}

