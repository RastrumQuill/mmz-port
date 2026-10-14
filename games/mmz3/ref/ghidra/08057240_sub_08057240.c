// sub_08057240 at 0x08057240 (thumb)

undefined4 sub_08057240(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08017700(param_1,0xb311);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    iVar4 = DAT_0202f5c0;
    *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54);
    iVar4 = *(int *)(iVar4 + 0x54);
    *(byte *)(param_1 + 0x4a) =
         *(byte *)(param_1 + 0x4a) & 0xef | (*(int *)(param_1 + 0x54) < iVar4) << 4;
    if (*(int *)(param_1 + 0x54) < iVar4) {
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
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffe00;
    *(undefined *)(param_1 + 0x12) = 8;
    if (((DAT_020301a8 & 1) != 0) && ((DAT_020301b2 & 1) == 0)) {
      DAT_020301a8 = DAT_020301a8 & 0xfffe | 0x10;
    }
  }
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) goto switchD_08057300_caseD_6;
    sub_08017700(param_1,0xb308);
    break;
  case 1:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar4;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    if (iVar4 <= *(int *)(param_1 + 0xd4)) goto switchD_08057300_caseD_6;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xd4);
    sub_08017700(param_1,0xb305);
    break;
  case 2:
    if (*(char *)(param_1 + 0x73) != '\x03') goto switchD_08057300_caseD_6;
    sub_08017700(param_1,0xb306);
    uVar3 = FUN_080fe2f8(*(int *)(param_1 + 0xb4) - (*(int *)(param_1 + 0x54) + -0xf000),0x28);
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffb00;
    break;
  case 3:
    if (0 < *(int *)(param_1 + 0x60)) {
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    }
    iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar5;
    iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar4;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    if (iVar4 <= *(int *)(param_1 + 0xd4)) goto switchD_08057300_caseD_6;
    uVar3 = sub_0800A104(iVar5);
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    sub_08017700(param_1,0xb313);
    break;
  case 4:
    if (((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80) == 0) ||
       (*(char *)(param_1 + 0x73) != '\x03')) goto switchD_08057300_caseD_6;
    break;
  case 5:
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 1;
  default:
    goto switchD_08057300_caseD_6;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
switchD_08057300_caseD_6:
  sub_080177F4(param_1);
  return in_lr;
}

