// sub_080FB064 at 0x080FB064 (thumb)

undefined8 sub_080FB064(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  *(undefined2 *)(param_1 + 0xde4) = 0;
  *(undefined2 *)(param_1 + 0xde6) = 0;
  switch(*(undefined *)(param_1 + 0xdcd)) {
  case 0:
    sub_080046A4(0xbd);
    *(undefined4 *)(param_1 + 0xde8) = 0x3c;
    *(char *)(param_1 + 0xdcd) = *(char *)(param_1 + 0xdcd) + '\x01';
  case 1:
    iVar1 = *(int *)(param_1 + 0xde8) + -1;
    *(int *)(param_1 + 0xde8) = iVar1;
    if (iVar1 == 0) {
LAB_080fb0d2:
      *(char *)(param_1 + 0xdcd) = *(char *)(param_1 + 0xdcd) + '\x01';
    }
    break;
  case 2:
    uVar2 = sub_080B5144(4);
    *(undefined4 *)(param_1 + 0xde0) = uVar2;
    *(char *)(param_1 + 0xdcd) = *(char *)(param_1 + 0xdcd) + '\x01';
  case 3:
    if (1 < *(byte *)(*(int *)(param_1 + 0xde0) + 0xc)) goto LAB_080fb0d2;
    break;
  case 4:
    DAT_02030ea4 = 0x40;
    *(char *)(param_1 + 0xdcd) = *(char *)(param_1 + 0xdcd) + '\x01';
  case 5:
    *(int *)(param_1 + 0xde8) = *(int *)(param_1 + 0xde8) + -1;
    if (DAT_02030ea4 == 0x20) {
      uVar2 = 0;
      goto LAB_080fb102;
    }
  default:
    break;
  }
  uVar2 = 1;
LAB_080fb102:
  return CONCAT44(in_lr,uVar2);
}

