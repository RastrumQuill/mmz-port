// sub_0802BF98 at 0x0802BF98 (thumb)

undefined4 sub_0802BF98(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xf) = 1;
  sub_0800471C(10);
  if ((*(byte *)(param_1 + 10) >> 4 & 1) == *(byte *)(param_1 + 0x118)) {
    sub_08017700(param_1,0x3100);
  }
  else {
    sub_08017700(param_1,0x3200);
  }
  if ((*(char *)(param_1 + 0xc4) == '\x02') || (cVar1 = sub_08032EEC(param_1,0x1f), cVar1 != '\0'))
  {
    if (*(char *)(param_1 + 0x122) == '\0') {
      *(undefined4 *)(param_1 + 0x5c) = 0;
      goto LAB_0802c098;
    }
    *(char *)(param_1 + 0x122) = '\0';
    if (*(char *)(param_1 + 0x118) == '\0') goto LAB_0802c090;
    uVar2 = 0xffffff00;
  }
  else {
    if (*(char *)(param_1 + 0x122) != '\0') {
      *(char *)(param_1 + 0x122) = '\0';
      if (*(char *)(param_1 + 0x118) == '\0') {
        uVar2 = 0x400;
      }
      else {
        uVar2 = 0xfffffc00;
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar2;
      *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0x5c);
      *(undefined4 *)(param_1 + 0x60) = 0xfffffbc0;
      *(undefined *)(param_1 + 0xf) = 2;
      sub_0802C170(param_1);
      return in_lr;
    }
    if (*(char *)(param_1 + 0xc4) == '\x01') {
      if (*(char *)(param_1 + 0x118) == '\0') {
        uVar2 = 0x200;
      }
      else {
        uVar2 = 0xfffffe00;
      }
    }
    else if (*(char *)(param_1 + 0x118) == '\0') {
LAB_0802c090:
      uVar2 = 0x100;
    }
    else {
      uVar2 = 0xffffff00;
    }
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
LAB_0802c098:
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(char *)(param_1 + 0x18d) == '\0') {
    *(undefined *)(param_1 + 0xf) = 2;
    sub_0802C170(param_1);
  }
  else {
    *(undefined *)(param_1 + 0xf) = 1;
    sub_0802C0C4(param_1);
  }
  return in_lr;
}

