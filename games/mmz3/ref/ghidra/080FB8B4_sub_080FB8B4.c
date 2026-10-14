// sub_080FB8B4 at 0x080FB8B4 (thumb)

undefined8 sub_080FB8B4(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  *(undefined2 *)(param_1 + 0xddc) = 0;
  *(undefined2 *)(param_1 + 0xdde) = 0;
  cVar1 = *(char *)(param_1 + 0xdfd);
  if (cVar1 != '\0') {
    *(char *)(param_1 + 0xdfd) = cVar1 + -1;
  }
  sub_080FB1B4(param_1);
  if (0x2a30 < *(int *)(param_1 + 0xdec)) {
    *(undefined4 *)(param_1 + 0xdec) = 0x2a30;
  }
  if (*(int *)(param_1 + 0xdec) < 1) {
    *(undefined4 *)(param_1 + 0xdec) = 0;
  }
  switch(*(undefined *)(param_1 + 0xdcd)) {
  case 0:
    sub_080046A4(0xb6);
    sub_0800471C(0xf6);
    *(undefined *)(param_1 + 0xdff) = 0x3c;
    *(char *)(param_1 + 0xdcd) = *(char *)(param_1 + 0xdcd) + '\x01';
  case 1:
    cVar1 = *(char *)(param_1 + 0xdff) + -1;
    *(char *)(param_1 + 0xdff) = cVar1;
    if (cVar1 == '\0') {
LAB_080fb95e:
      *(char *)(param_1 + 0xdcd) = *(char *)(param_1 + 0xdcd) + '\x01';
    }
    break;
  case 2:
    uVar2 = sub_080B5144(4);
    *(undefined4 *)(param_1 + 0xdd4) = uVar2;
    *(char *)(param_1 + 0xdcd) = *(char *)(param_1 + 0xdcd) + '\x01';
  case 3:
    if (1 < *(byte *)(*(int *)(param_1 + 0xdd4) + 0xc)) goto LAB_080fb95e;
    break;
  case 4:
    DAT_02030ea4 = 0x40;
    *(char *)(param_1 + 0xdcd) = *(char *)(param_1 + 0xdcd) + '\x01';
  case 5:
    if (DAT_02030ea4 == 0x20) {
      sub_08004768(0x32);
      uVar2 = 0;
      goto LAB_080fb98e;
    }
  default:
    break;
  }
  uVar2 = 1;
LAB_080fb98e:
  return CONCAT44(in_lr,uVar2);
}

