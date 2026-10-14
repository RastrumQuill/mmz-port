// sub_0805B5CC at 0x0805B5CC (thumb)

undefined4 sub_0805B5CC(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined *)(param_1 + 0x12) = 3;
    uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar2 & 0x7fffffff;
    if ((uVar2 * 2 >> 0x11 & 1) == 0) {
      *(undefined *)(param_1 + 0xf) = 0;
    }
    else {
      *(undefined *)(param_1 + 0xf) = 1;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    *(undefined *)(param_1 + 0x13) = 0x30;
    if (*(char *)(param_1 + 0xf) == '\0') {
      sub_080ABE08(0x4d0,(&DAT_080feb8f)[*(byte *)(param_1 + 0x12)],0x30,param_1);
    }
    else {
      sub_080ABE08(0x4d0,(&DAT_080feb92)[*(byte *)(param_1 + 0x12)],0x30,param_1);
    }
    sub_080041E4(0xb);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 2:
    sub_0805B910(param_1);
    if ((*(char *)(param_1 + 0x13) != '\0') &&
       (cVar1 = *(char *)(param_1 + 0x13) + -1, *(char *)(param_1 + 0x13) = cVar1, cVar1 == '\0')) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    sub_0805B910(param_1);
    goto LAB_0805b6f8;
  case 3:
    sub_0805B910(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      *(undefined4 *)(param_1 + 0xbc) = 0;
      *(undefined *)(param_1 + 0x12) = 0x3c;
      cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    }
    else {
      cVar1 = '\x01';
    }
    *(char *)(param_1 + 0xe) = cVar1;
LAB_0805b6f8:
    sub_080041E4(0xb);
    break;
  case 4:
    sub_0805B910(param_1);
    sub_080041E4(0xb);
    cVar1 = *(char *)(param_1 + 0x12);
    if (cVar1 != '\0') {
      *(char *)(param_1 + 0x12) = cVar1 + -1;
      if (cVar1 == '\x01') {
        *(undefined *)(param_1 + 0xd) = 3;
        *(char *)(param_1 + 0xe) = cVar1 + -1;
      }
    }
  }
  return in_lr;
}

