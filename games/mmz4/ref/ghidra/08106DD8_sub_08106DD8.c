// sub_08106DD8 at 0x08106DD8 (thumb)

undefined4 sub_08106DD8(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    DAT_0202e38a = 0x200;
    DAT_0202dd8a = 5;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sVar1 = sub_0810530C(param_1,0xa523,1);
    if (sVar1 == 0) {
      return in_lr;
    }
    goto LAB_08106e94;
  case 2:
    sub_0801CFF0(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    uVar2 = 0xa525;
    break;
  case 3:
    sub_0801CFF0(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) {
      return in_lr;
    }
    uVar2 = 0xa526;
    break;
  case 4:
    sub_0801CFF0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    uVar2 = 0xa524;
    break;
  case 5:
    sub_0801CFF0(param_1);
  default:
    goto switchD_08106dea_caseD_6;
  }
  sub_0801CF00(param_1,uVar2);
LAB_08106e94:
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_08106dea_caseD_6:
  return in_lr;
}

