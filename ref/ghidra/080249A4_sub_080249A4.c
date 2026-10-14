// sub_080249A4 at 0x080249A4 (thumb)

undefined4 sub_080249A4(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    if (*(char *)(param_1 + 0xf) == '\x01') goto LAB_080249c6;
    if (*(char *)(param_1 + 0xf) != '\0') {
      return in_lr;
    }
    if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
  }
  if (*(char *)(param_1 + 0xbc) != '\x01') {
    return in_lr;
  }
LAB_080249c6:
  cVar1 = sub_0801B390(param_1);
  if (-1 < cVar1) {
    *(char *)(param_1 + 0x11) = cVar1;
    *(undefined *)(param_1 + 0xc1) = *(undefined *)(param_1 + 0xbe);
    *(undefined *)(param_1 + 0xbe) = 3;
    *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
    *(undefined *)(param_1 + 0xbf) = 0;
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 0;
    *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 0x101;
    sub_08024AA4(param_1);
  }
  return in_lr;
}

