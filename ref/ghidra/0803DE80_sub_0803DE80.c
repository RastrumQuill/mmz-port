// sub_0803DE80 at 0x0803DE80 (thumb)

undefined4 sub_0803DE80(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08029778(param_1,2);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
LAB_0803df18:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
LAB_0803df1e:
    sub_080297C0(param_1);
    break;
  case 2:
    sub_08029778(param_1,0x11);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_080297C0(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 4:
    sub_08029778(param_1,0);
    *(undefined *)(param_1 + 0x12) = 0x3c;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') goto LAB_0803df18;
    goto LAB_0803df1e;
  case 6:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    bVar1 = (byte)DAT_02022b6e;
    if ((DAT_02022b6e & 1) == 0) {
      *(undefined *)(param_1 + 0xd) = 2;
      *(byte *)(param_1 + 0xe) = bVar1 & 1;
    }
    sub_080297C0(param_1);
  default:
    break;
  }
  return in_lr;
}

