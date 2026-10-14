// sub_0809D8F4 at 0x0809D8F4 (thumb)

undefined4 sub_0809D8F4(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_0809C930(param_1,0);
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    uVar3 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0809d906_caseD_1:
    sub_0809C980(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
      DAT_02004fa0 = DAT_02004fa0 & 0x7f;
      sub_0809C930(param_1,1);
      *(undefined *)(param_1 + 0x44) = 1;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined4 *)(param_1 + 0x54) = 0x180;
      *(undefined *)(param_1 + 0x12) = 0x16;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0809d906_caseD_2:
      iVar2 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
      *(int *)(param_1 + 0x4c) = iVar2;
      uVar3 = sub_08008360(iVar2,*(undefined4 *)(param_1 + 0x50));
      *(undefined4 *)(param_1 + 0x50) = uVar3;
      sub_0809C980(param_1);
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 == '\0') {
        sub_0809C930(param_1,0);
        DAT_02022880 = 1;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
    }
    return in_lr;
  case 1:
    goto switchD_0809d906_caseD_1;
  case 2:
    goto switchD_0809d906_caseD_2;
  case 3:
    DAT_02022880 = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 4:
    sub_0809C980(param_1);
    return in_lr;
  default:
    return in_lr;
  }
}

