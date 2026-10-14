// sub_08041CE8 at 0x08041CE8 (thumb)

undefined4 sub_08041CE8(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0x10);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    iVar4 = *(int *)(DAT_0202286c + 0x4c);
    *(bool *)(param_1 + 0x44) = *(int *)(param_1 + 0x4c) < iVar4;
    if (*(int *)(param_1 + 0x4c) < iVar4) {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar1;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar3 = 0x200;
    }
    else {
      uVar3 = 0xfffffe00;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar3;
    *(undefined4 *)(param_1 + 0x58) = 0xfffffe00;
    *(undefined *)(param_1 + 0x12) = 8;
    if (((DAT_02022b64 & 1) != 0) && ((DAT_02022b6e & 1) == 0)) {
      DAT_02022b64 = DAT_02022b64 & 0xfffe | 0x20;
    }
  }
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x40;
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) goto switchD_08041d84_caseD_6;
    sub_08029778(param_1,0x14);
    break;
  case 1:
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x40;
    iVar4 = sub_08008360();
    if (*(int *)(param_1 + 0x50) <= iVar4) goto switchD_08041d84_caseD_6;
    uVar3 = sub_08008360(*(undefined4 *)(param_1 + 0x4c));
    *(undefined4 *)(param_1 + 0x50) = uVar3;
    sub_08029778(param_1,5);
    break;
  case 2:
    if (*(char *)(param_1 + 0x73) != '\x03') goto switchD_08041d84_caseD_6;
    sub_08029778(param_1,6);
    uVar3 = sub_080C8AD0(*(int *)(param_1 + 0xb8) - (*(int *)(param_1 + 0x4c) + -0xf000),0x28);
    *(undefined4 *)(param_1 + 0x54) = uVar3;
    *(undefined4 *)(param_1 + 0x58) = 0xfffffb00;
    break;
  case 3:
    if (0 < *(int *)(param_1 + 0x58)) {
      *(undefined *)(param_1 + 0x44) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    }
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x40;
    iVar4 = sub_08008360();
    if (*(int *)(param_1 + 0x50) <= iVar4) goto switchD_08041d84_caseD_6;
    uVar3 = sub_08008360(*(undefined4 *)(param_1 + 0x4c));
    *(undefined4 *)(param_1 + 0x50) = uVar3;
    sub_08029778(param_1,0x12);
    break;
  case 4:
    if (*(char *)(param_1 + 0x73) != '\x03') goto switchD_08041d84_caseD_6;
    break;
  case 5:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 1;
    }
  default:
    goto switchD_08041d84_caseD_6;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
switchD_08041d84_caseD_6:
  sub_080297C0(param_1);
  return in_lr;
}

