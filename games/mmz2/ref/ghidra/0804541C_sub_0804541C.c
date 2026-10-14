// sub_0804541C at 0x0804541C (thumb)

undefined4 sub_0804541C(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    uVar4 = 0xa00e;
    goto LAB_08045522;
  case 1:
    if (*(char *)(param_1 + 0x73) != '\x03') goto switchD_08045432_caseD_6;
    sub_080127E4(param_1,0xa012);
    uVar3 = sub_080032EC(0x4e);
    *(undefined2 *)(param_1 + 0xcc) = uVar3;
    *(undefined *)(param_1 + 0x12) = 0x40;
    break;
  case 2:
    local_14 = 0x2a00;
    if (*(char *)(param_1 + 0x71) == '\0') {
      local_14 = 0x2c00;
    }
    bVar1 = *(byte *)(param_1 + 0x12);
    if ((bVar1 & 1) == 0) {
      local_14 = *(int *)(param_1 + 0x54) - local_14;
    }
    else {
      local_14 = *(int *)(param_1 + 0x54) + local_14;
    }
    local_10 = *(int *)(param_1 + 0x58) + -0x2800;
    sub_080B3AD8(&local_14,((uint)bVar1 << 0x18) >> 0x19 & 1,bVar1 & 1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) goto switchD_08045432_caseD_6;
    sub_08003338((int)*(short *)(param_1 + 0xcc));
    *(short *)(param_1 + 0xcc) = 0;
    *(undefined *)(param_1 + 0x12) = 0x28;
    break;
  case 3:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    sub_080127E4(param_1,0xa00f);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    return in_lr;
  case 4:
    if (*(char *)(param_1 + 0x73) != '\x03') goto switchD_08045432_caseD_6;
    uVar4 = 0xa000;
LAB_08045522:
    sub_080127E4(param_1,uVar4);
    break;
  case 5:
    bVar1 = (byte)DAT_0202ec42;
    if ((DAT_0202ec42 & 1) == 0) {
      *(undefined *)(param_1 + 0xd) = 3;
      *(byte *)(param_1 + 0xe) = bVar1 & 1;
    }
  default:
    goto switchD_08045432_caseD_6;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08045432_caseD_6:
  sub_080128D4(param_1);
  return in_lr;
}

