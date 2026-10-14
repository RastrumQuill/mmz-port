// sub_080CC110 at 0x080CC110 (thumb)

undefined4 sub_080CC110(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_080127E4(param_1,0x691d);
    *(undefined *)(param_1 + 0x12) = 0x1c;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    if (*(char *)(param_1 + 0x12) == '\0') {
      *(undefined *)(param_1 + 0x12) = 7;
      sub_080B90B4(param_1 + 0x54);
    }
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 2:
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x58) + -0x1800;
    *(undefined *)(param_1 + 0x12) = 0;
    sub_080127E4(param_1,0x691e);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    cVar1 = *(char *)(param_1 + 0x12) + '\x01';
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -0x80) {
LAB_080cc1ea:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
LAB_080cc1f0:
    iVar2 = (*(int *)(param_1 + 100) + (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x12)] * -0x58) -
            *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x5c) = iVar2;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar2;
    iVar2 = (*(int *)(param_1 + 0x68) +
            (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x12) + 0x40 & 0xff] * 0x18) -
            *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x60) = iVar2;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
    sub_080128D4(param_1);
    break;
  case 4:
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -0x3000;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') goto LAB_080cc1ea;
    goto LAB_080cc1f0;
  case 6:
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 0x3000;
    *(undefined *)(param_1 + 0x12) = 0x80;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    cVar1 = *(char *)(param_1 + 0x12) + '\x01';
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    iVar2 = (*(int *)(param_1 + 100) + (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x12)] * -0x58) -
            *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x5c) = iVar2;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar2;
    iVar2 = (*(int *)(param_1 + 0x68) +
            (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x12) + 0x40 & 0xff] * 0x18) -
            *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x60) = iVar2;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
    sub_080128D4(param_1);
  default:
    break;
  }
  return in_lr;
}

