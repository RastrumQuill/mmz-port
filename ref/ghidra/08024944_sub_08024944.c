// sub_08024944 at 0x08024944 (thumb)

undefined4 sub_08024944(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    cVar1 = sub_08017EC0(param_1);
    if (cVar1 != '\x01') {
      if (cVar1 == '\x02') {
        sub_08024A18(param_1);
        return in_lr;
      }
      sub_08024AA4(param_1);
      return in_lr;
    }
  }
  *(undefined *)(param_1 + 0xc1) = *(undefined *)(param_1 + 0xbe);
  *(undefined *)(param_1 + 0xbe) = 1;
  *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
  *(undefined *)(param_1 + 0xbf) = 0;
  *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
  *(undefined *)(param_1 + 0xc0) = 0;
  sub_080249A4(param_1);
  return in_lr;
}

