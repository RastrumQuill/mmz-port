// sub_080A32E4 at 0x080A32E4 (thumb)

undefined4 sub_080A32E4(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_0809C930(param_1,0);
    *(undefined *)(param_1 + 0x44) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef | 4;
    sub_080055FC(param_1 + 0x74,&DAT_082b5b4c,param_1 + 0x4c,0);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    uVar3 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar3;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080a32f8_caseD_1:
    sub_0809C980(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
      sub_0809C930(param_1,1);
      *(undefined *)(param_1 + 0x12) = 0;
LAB_080a33fc:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
switchD_080a32f8_caseD_5:
    return in_lr;
  case 1:
    goto switchD_080a32f8_caseD_1;
  case 2:
    sub_0809C980(param_1);
    if ((*(ushort *)(undefined4 *)(param_1 + 0x90) & 1) != 0) {
      sub_08001EAC(5);
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    }
    if (*(byte *)(param_1 + 0x12) < 3) {
      return in_lr;
    }
    sub_08001EAC(0x4d);
    sub_0809C930(param_1,4);
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0x58) = 0xfffffd00;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_0809C980(param_1);
    iVar2 = *(int *)(param_1 + 0x58) + 0x40;
    *(int *)(param_1 + 0x58) = iVar2;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar2;
    cVar1 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c));
    if (cVar1 == '\0') {
      return in_lr;
    }
    uVar3 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar3;
    *(undefined4 *)(param_1 + 0x58) = 0;
    goto LAB_080a33fc;
  case 4:
    sub_0809C980(param_1);
  default:
    goto switchD_080a32f8_caseD_5;
  }
}

