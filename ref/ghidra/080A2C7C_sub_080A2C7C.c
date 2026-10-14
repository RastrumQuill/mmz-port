// sub_080A2C7C at 0x080A2C7C (thumb)

undefined4 sub_080A2C7C(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined *)(param_1 + 0x44) = 1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    sub_0809C930(param_1,1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_080055FC(param_1 + 0x74,&DAT_082b5b4c,param_1 + 0x4c,0);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sub_0809C980(param_1);
    if ((*(ushort *)(param_1 + 0x90) & 1) == 0) {
      if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
        sub_0809C930(param_1,0);
LAB_080a2e24:
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
    }
    else {
LAB_080a2d36:
      *(undefined *)(param_1 + 0xe) = 4;
    }
    break;
  case 2:
    uVar2 = *(ushort *)(param_1 + 0x90) & 1;
    if ((*(ushort *)(param_1 + 0x90) & 1) == 0) {
      if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) {
        return in_lr;
      }
      sub_0809C930(param_1,2);
      *(char *)(param_1 + 0x44) = (char)uVar2;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined4 *)(param_1 + 0x54) = 0xfffffe80;
      *(uint *)(param_1 + 0x58) = uVar2;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      goto switchD_080a2c90_caseD_3;
    }
    goto LAB_080a2d36;
  case 3:
switchD_080a2c90_caseD_3:
    if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
      *(undefined *)(param_1 + 0xe) = 4;
    }
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    sub_0809C980(param_1);
    break;
  case 4:
    uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar2 & 0x7fffffff;
    if ((uVar2 * 2 >> 0x11 & 1) == 0) {
      sub_08001EAC(0x4b);
    }
    else {
      sub_08001EAC(0x4a);
    }
    sub_0809C930(param_1,4);
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0x54) = 0xffffff00;
    *(undefined4 *)(param_1 + 0x58) = 0xfffffd00;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_0809C980(param_1);
    iVar4 = *(int *)(param_1 + 0x58) + 0x40;
    *(int *)(param_1 + 0x58) = iVar4;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar4;
    cVar1 = sub_080079CC();
    if (cVar1 == '\0') {
      return in_lr;
    }
    uVar3 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar3;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    goto LAB_080a2e24;
  case 6:
    sub_0809C980(param_1);
  }
  return in_lr;
}

