// sub_08050484 at 0x08050484 (thumb)

undefined4 sub_08050484(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    if (*(char *)(param_1 + 0x10) != '\0') {
      iVar2 = *(int *)(param_1 + 0xbc) + -0x7600;
      *(int *)(param_1 + 0x58) = iVar2;
      *(int *)(param_1 + 0xc4) = iVar2;
      *(undefined *)(param_1 + 0xe) = 6;
      return in_lr;
    }
    sub_0800393C(&DAT_085d7ed4,(DAT_0202faa6 - 0x2f0) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d7ee0,(DAT_0202f8a6 - 7) * 0x20 + 0x200);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xbc) + -0xc000;
    sub_08017700(param_1,0xaf0c);
    iVar2 = (*(int *)(param_1 + 0xbc) + -0x7600) - *(int *)(param_1 + 0x58);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 3;
    }
    iVar2 = sub_080FE124(iVar2 >> 2);
    *(uint *)(param_1 + 0x60) = (uint)(iVar2 << 0x10) >> 0xd;
    sub_080BEEA4(param_1);
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    iVar2 = *(int *)(param_1 + 0x60);
    if (iVar2 < 0) {
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 == '\0') {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
        *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) | 1;
LAB_0805062a:
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
    }
    else {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
      *(int *)(param_1 + 0x60) = iVar2 + -8;
    }
LAB_08050630:
    sub_080177F4(param_1);
    break;
  case 2:
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x58);
    *(undefined *)(param_1 + 0x12) = 100;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
LAB_0805065a:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 4:
    uVar3 = 0xaf0d;
    goto LAB_0805063e;
  case 5:
  case 9:
    goto switchD_08050498_caseD_5;
  case 6:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_080A4978(param_1);
    sub_08017700(param_1,0xaf01);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    sub_08050148(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) goto LAB_0805062a;
    goto LAB_08050630;
  case 8:
    uVar3 = 0xaf02;
LAB_0805063e:
    sub_08017700(param_1,uVar3);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08050498_caseD_5:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    goto LAB_0805065a;
  case 10:
    sub_08017700(param_1,0xaf01);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xb:
    sub_08050148(param_1);
    if ((DAT_020301b2 & 1) == 0) {
      sub_08007390(param_1 + 0x74,&DAT_0835fd4c);
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 1;
    }
    sub_080177F4(param_1);
  default:
    break;
  }
  return in_lr;
}

