// sub_0809D41C at 0x0809D41C (thumb)

undefined4 sub_0809D41C(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x18) + 4);
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_0800561C(param_1 + 0x74,&DAT_082b5330);
    sub_0809C930(param_1,1);
    *(undefined *)(param_1 + 0x44) = 1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined4 *)(param_1 + 0x54) = 0x180;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    iVar2 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x4c) = iVar2;
    uVar3 = sub_08008360(iVar2,*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar3;
    sub_0809C980(param_1);
    if (*(int *)(iVar4 + 0x4c) <= *(int *)(param_1 + 0x4c)) {
      sub_0809C930(param_1,0);
      *(undefined4 *)(param_1 + 0x54) = 0;
LAB_0809d51a:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar4 + 0x4c);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar4 + 0x50);
    sub_0809C980(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80) == 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    }
    if (*(char *)(iVar4 + 0xe) != '\a') {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_0809C930(param_1,1);
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 4;
    *(undefined4 *)(param_1 + 0x54) = 0x180;
    *(undefined *)(param_1 + 0x12) = 0x10;
    goto LAB_0809d51a;
  case 3:
    iVar4 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x4c) = iVar4;
    uVar3 = sub_08008360(iVar4,*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar3;
    sub_0809C980(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x54) = 0;
    sub_0809C930(param_1,0);
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 4:
    sub_0809C980(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      *(undefined *)(param_1 + 0x44) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0809d434_caseD_5:
      sub_0809C980(param_1);
      if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80) != 0) {
        sub_0809C930(param_1,1);
        *(undefined *)(param_1 + 0x44) = 1;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
        *(undefined4 *)(param_1 + 0x54) = 0x180;
        *(undefined *)(param_1 + 0x12) = 0x30;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0809d434_caseD_6:
        iVar4 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
        *(int *)(param_1 + 0x4c) = iVar4;
        uVar3 = sub_08008360(iVar4,*(undefined4 *)(param_1 + 0x50));
        *(undefined4 *)(param_1 + 0x50) = uVar3;
        sub_0809C980(param_1);
        cVar1 = *(char *)(param_1 + 0x12) + -1;
        *(char *)(param_1 + 0x12) = cVar1;
        if (cVar1 == '\0') {
          sub_0809C930(param_1,0);
          *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0809d434_caseD_7:
          sub_0809C980(param_1);
          if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80) == 0) {
            sub_0809C930(param_1,1);
            *(undefined4 *)(param_1 + 0x54) = 0x180;
            *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0809d434_caseD_8:
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
            sub_0809C980(param_1);
          }
        }
      }
    }
    break;
  case 5:
    goto switchD_0809d434_caseD_5;
  case 6:
    goto switchD_0809d434_caseD_6;
  case 7:
    goto switchD_0809d434_caseD_7;
  case 8:
    goto switchD_0809d434_caseD_8;
  default:
    break;
  }
  return in_lr;
}

