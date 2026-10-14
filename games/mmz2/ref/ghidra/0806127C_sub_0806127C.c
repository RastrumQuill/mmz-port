// sub_0806127C at 0x0806127C (thumb)

undefined4 sub_0806127C(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    sub_080127E4(param_1,0xac12);
    if (((DAT_0202ec38 & 1) != 0) && ((DAT_0202ec42 & 1) == 0)) {
      DAT_0202ec38 = DAT_0202ec38 & 0xfffe | 0x20;
    }
    *(undefined *)(param_1 + 0x12) = 0x50;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    sub_080128D4(param_1);
    break;
  case 2:
    *(undefined *)(param_1 + 0x12) = 0xf0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 3:
    bVar1 = *(char *)(param_1 + 0x12) - 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    if ((bVar1 & 7) == 0) {
      sub_08060FE4(param_1,0);
    }
    cVar2 = sub_080EF330(*(undefined *)(param_1 + 0x12),0x18);
    if (cVar2 == '\0') {
      sub_08060FE4(param_1,1);
    }
    cVar2 = sub_080EF330(*(undefined *)(param_1 + 0x12),0x14);
    if (cVar2 == '\0') {
      sub_080032EC(0x35);
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x20;
    if (*(char *)(param_1 + 0x12) == '\0') {
      DAT_0202ec42 = DAT_0202ec42 | 2;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    break;
  case 4:
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x20;
    bVar1 = *(char *)(param_1 + 0x12) - 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    if ((bVar1 & 7) == 0) {
      sub_08060FE4(param_1,0);
    }
    cVar2 = sub_080EF330(*(undefined *)(param_1 + 0x12),0x18);
    if (cVar2 == '\0') {
      sub_08060FE4(param_1,1);
    }
  }
  return in_lr;
}

