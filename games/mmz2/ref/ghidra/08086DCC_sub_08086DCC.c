// sub_08086DCC at 0x08086DCC (thumb)

undefined4 sub_08086DCC(int param_1)

{
  undefined uVar1;
  char cVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_080127E4(param_1,0xac08);
    uVar1 = 10;
    break;
  case 1:
  case 3:
  case 5:
  case 7:
    goto switchD_08086dde_caseD_1;
  case 2:
    sub_080127E4(param_1,0xac16);
    uVar1 = 0x46;
    break;
  case 4:
    sub_080127E4(param_1,0xac17);
    uVar1 = 0x46;
    break;
  case 6:
    sub_080127E4(param_1,0xac08);
    uVar1 = 0x3c;
    break;
  case 8:
    sub_080127E4(param_1,0xac0a);
    *(undefined *)(param_1 + 0x12) = 0x3c;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 9:
    sub_08012A14(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    return in_lr;
  default:
    return in_lr;
  }
  *(undefined *)(param_1 + 0x12) = uVar1;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08086dde_caseD_1:
  sub_08012A14(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

