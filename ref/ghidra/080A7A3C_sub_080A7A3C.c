// sub_080A7A3C at 0x080A7A3C (thumb)

undefined4 sub_080A7A3C(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  iVar2 = *(int *)(param_1 + 0x58) + 0x40;
  *(int *)(param_1 + 0x58) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x58) = 0x700;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x20) + 0xbc);
  if (iVar2 < *(int *)(param_1 + 0x50)) {
    *(int *)(param_1 + 0x50) = iVar2;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0x50) + -0x1800;
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_0809C930(param_1,4);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sub_0809C980(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 2:
    sub_0809C930(param_1,5);
    sub_08001EAC(0xd);
    local_14 = *(int *)(param_1 + 0x4c) + -0x1300;
    local_10 = *(int *)(param_1 + 0x50) + -0x1100;
    sub_08076710(&local_14,0x180,0);
    local_14 = local_14 + 0x2600;
    sub_08076710(&local_14,0x180,0x80);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_0809C980(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 4:
    sub_0809C930(param_1,6);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_0809C980(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    cVar1 = '\0';
    *(undefined *)(param_1 + 0xd) = 3;
    break;
  default:
    return in_lr;
  }
  *(char *)(param_1 + 0xe) = cVar1;
  return in_lr;
}

