// sub_0805DA1C at 0x0805DA1C (thumb)

undefined4 sub_0805DA1C(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined *)(param_1 + 0x25) = 0x18;
    sub_08017700(param_1,0x3f02);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    sub_080177F4(param_1);
    return in_lr;
  case 2:
    sub_0800471C(0xf3);
    uVar1 = 0x3f03;
    break;
  case 3:
  case 5:
    goto switchD_0805da2e_caseD_3;
  case 4:
    sub_080C346C(param_1);
    uVar1 = 0x3f04;
    break;
  case 6:
    sub_08017700(param_1,0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    if ((DAT_020301b2 & 1) == 0) {
      *(byte *)(param_1 + 0xd) = DAT_020301b2 & 1;
      *(undefined *)(param_1 + 0xe) = 1;
      *(undefined *)(param_1 + 0x12) = 0x1e;
    }
    sub_080177F4(param_1);
    return in_lr;
  default:
    return in_lr;
  }
  sub_08017700(param_1,uVar1);
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0805da2e_caseD_3:
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

