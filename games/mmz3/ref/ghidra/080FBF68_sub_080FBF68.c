// sub_080FBF68 at 0x080FBF68 (thumb)

undefined8 sub_080FBF68(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  *(undefined2 *)(param_1 + 0xddc) = 0;
  *(undefined2 *)(param_1 + 0xdde) = 0;
  switch(*(undefined *)(param_1 + 0xdcd)) {
  case 0:
    sub_080046A4(0xa8);
    *(undefined4 *)(param_1 + 0xe0c) = 0x3c;
    *(char *)(param_1 + 0xdcd) = *(char *)(param_1 + 0xdcd) + '\x01';
  case 1:
    iVar1 = *(int *)(param_1 + 0xe0c) + -1;
    *(int *)(param_1 + 0xe0c) = iVar1;
    if (iVar1 == 0) {
LAB_080fbfd6:
      *(char *)(param_1 + 0xdcd) = *(char *)(param_1 + 0xdcd) + '\x01';
    }
    break;
  case 2:
    uVar2 = sub_080B5144(4);
    *(undefined4 *)(param_1 + 0xdd8) = uVar2;
    *(char *)(param_1 + 0xdcd) = *(char *)(param_1 + 0xdcd) + '\x01';
  case 3:
    if (1 < *(byte *)(*(int *)(param_1 + 0xdd8) + 0xc)) goto LAB_080fbfd6;
    break;
  case 4:
    DAT_02030ea4 = 0x40;
    *(char *)(param_1 + 0xdcd) = *(char *)(param_1 + 0xdcd) + '\x01';
  case 5:
    if (DAT_02030ea4 == 0x20) {
      uVar2 = 0;
      goto LAB_080fbffe;
    }
  default:
    break;
  }
  uVar2 = 1;
LAB_080fbffe:
  return CONCAT44(in_lr,uVar2);
}

