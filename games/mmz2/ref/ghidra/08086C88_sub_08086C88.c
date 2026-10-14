// sub_08086C88 at 0x08086C88 (thumb)

undefined4 sub_08086C88(int param_1)

{
  undefined uVar1;
  char cVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x58);
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    uVar1 = 100;
    if ((*(byte *)(param_1 + 0xb6) & 8) != 0) {
      uVar1 = 1;
    }
    *(undefined *)(param_1 + 0x12) = uVar1;
    break;
  case 1:
  case 3:
    goto switchD_08086ca4_caseD_1;
  case 2:
    sub_080127E4(param_1,0xac0c);
    if ((*(byte *)(param_1 + 0xb6) & 4) == 0) {
      uVar1 = 0x1e;
    }
    else {
      uVar1 = 0x46;
    }
    *(undefined *)(param_1 + 0x12) = uVar1;
    break;
  case 4:
    sub_080127E4(param_1,0xac0d);
    *(undefined *)(param_1 + 0x12) = 0x46;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
      pbVar3 = (byte *)(param_1 + 0xb6);
      if ((*pbVar3 & 2) != 0) {
        *(undefined *)(param_1 + 0xd) = 3;
      }
      if ((*pbVar3 & 4) != 0) {
        *(undefined *)(param_1 + 0xd) = 5;
      }
      if ((*pbVar3 & 8) != 0) {
        *(undefined *)(param_1 + 0xd) = 6;
      }
      *(undefined *)(param_1 + 0xe) = 0;
    }
    sub_08012A14(param_1);
    return in_lr;
  default:
    return in_lr;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08086ca4_caseD_1:
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_08012A14(param_1);
  return in_lr;
}

