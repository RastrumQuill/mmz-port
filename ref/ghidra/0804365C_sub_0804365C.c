// sub_0804365C at 0x0804365C (thumb)

undefined4 sub_0804365C(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08029778(param_1,0);
    sub_0800561C(param_1 + 0x74,&DAT_082ae55c);
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08043670_caseD_1:
    cVar1 = sub_08042DE4(param_1);
    if (cVar1 == '\0') {
      iVar4 = *(int *)(DAT_0202286c + 0x4c);
      iVar5 = iVar4 - *(int *)(param_1 + 0x4c);
      *(bool *)(param_1 + 0x44) = 0 < iVar5;
      if (iVar4 == *(int *)(param_1 + 0x4c) || iVar5 < 0) {
        bVar2 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar2;
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 == '\0') {
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
LAB_08043872:
      sub_080297C0(param_1);
    }
switchD_08043670_caseD_c:
    return in_lr;
  case 1:
    goto switchD_08043670_caseD_1;
  case 2:
    sub_08029778(param_1,0x11);
    *(undefined *)(param_1 + 0x12) = 0x11;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    cVar1 = sub_08042DE4(param_1);
    if (cVar1 != '\0') {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    goto LAB_08043872;
  case 4:
    sub_08001EAC(0x84);
    sub_080428D0(param_1,0,0,0x74);
    sub_080428D0(param_1,1,0,0x90);
    *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xfe;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    cVar1 = sub_08042A1C(param_1,0);
    if (cVar1 != '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    bVar2 = sub_08042CE8(param_1,0,0);
    if (bVar2 != *(byte *)(param_1 + 0xe0)) {
      if (*(byte *)(param_1 + 0xe0) < bVar2) {
        sub_0804296C(param_1,0);
      }
      else {
        uVar7 = 0;
LAB_0804385a:
        sub_080429D4(param_1,uVar7);
      }
    }
LAB_0804385e:
    sub_08042C24(param_1,0,0);
    sub_08042C24(param_1,1,0);
    goto LAB_08043872;
  case 6:
    uVar3 = sub_08001EAC(0x86);
    *(undefined2 *)(param_1 + 0xbc) = uVar3;
    sub_080858C8(*(undefined4 *)(param_1 + 0xd0));
    uVar6 = sub_0804246C(param_1);
    *(undefined *)(param_1 + 0x12) = (&DAT_082ae824)[uVar6 & 0xff];
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    return in_lr;
  case 8:
    sub_08001EAC(0x84);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 9:
    cVar1 = sub_08042A1C(param_1,1);
    if (cVar1 != '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    bVar2 = sub_08042CE8(param_1,1,0);
    if (bVar2 != *(byte *)(param_1 + 0xe1)) {
      if (*(byte *)(param_1 + 0xe1) < bVar2) {
        sub_0804296C(param_1,1);
        goto LAB_0804385e;
      }
      uVar7 = 1;
      goto LAB_0804385a;
    }
    goto LAB_0804385e;
  case 10:
    sub_080858C8(*(undefined4 *)(param_1 + 0xd4));
    uVar6 = sub_0804246C(param_1);
    *(undefined *)(param_1 + 0x12) = (&DAT_082ae827)[uVar6 & 0xff];
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xb:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      *(undefined *)(param_1 + 0xd) = 9;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  default:
    goto switchD_08043670_caseD_c;
  }
}

