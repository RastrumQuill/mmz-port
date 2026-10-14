// sub_080EFFBC at 0x080EFFBC (thumb)

undefined4 sub_080EFFBC(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x54) = 0x1da000;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x2800;
    *(undefined *)(param_1 + 0x13) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080effd2_caseD_1:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
      sub_0801CF00(param_1,0xad00);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080effd2_caseD_2:
      if (*(int *)(param_1 + 0x60) < 0x700) {
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x2a;
      }
      iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x58) = iVar4;
      sVar3 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),iVar4 + 0x1000);
      if (sVar3 != 0) {
        uVar5 = 0;
        do {
          sub_080E38B8(param_1 + 0x54,&DAT_08866774 + uVar5 * 0x1c,0,0);
          uVar5 = uVar5 + 1 & 0xff;
        } while (uVar5 < 4);
        local_24 = *(int *)(param_1 + 0x54) + 0x600;
        local_20 = *(int *)(param_1 + 0x58) + 0xa00;
        sub_080D0894(3,&local_24);
        local_24 = *(int *)(param_1 + 0x54) + -0x600;
        local_20 = *(int *)(param_1 + 0x58) + 0xa00;
        sub_080D0894(3,&local_24);
        sub_0801FE64(4,param_1 + 0x54);
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
        cVar2 = *(char *)(param_1 + 0xd) + '\x01';
LAB_080f0220:
        *(char *)(param_1 + 0xd) = cVar2;
      }
    }
switchD_080effd2_caseD_6:
    return in_lr;
  case 1:
    goto switchD_080effd2_caseD_1;
  case 2:
    goto switchD_080effd2_caseD_2;
  case 3:
    *(undefined *)(param_1 + 0x12) = 1;
    bVar1 = *(byte *)(param_1 + 0x13);
    if (bVar1 == 1) {
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 100);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x68);
      *(undefined4 *)(param_1 + 0x54) = 0x1e1000;
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
        *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 100);
        *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x68);
        *(undefined4 *)(param_1 + 0x54) = 0x1dd000;
      }
      else {
LAB_080f0144:
        *(undefined *)(param_1 + 0xd) = 0x10;
        *(undefined *)(param_1 + 0x12) = 0x10;
      }
    }
    else {
      if (bVar1 != 2) goto LAB_080f0144;
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 100);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x68);
      *(undefined4 *)(param_1 + 0x54) = 0x1e6000;
    }
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 4:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xad00);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080effd2_caseD_5:
    if (*(int *)(param_1 + 0x60) < 0x700) {
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x2a;
    }
    iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar4;
    sVar3 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),iVar4 + 0x1000);
    if (sVar3 == 0) {
      return in_lr;
    }
    uVar5 = 0;
    do {
      sub_080E38B8(param_1 + 0x54,&DAT_08866774 + uVar5 * 0x1c,0,0);
      uVar5 = uVar5 + 1 & 0xff;
    } while (uVar5 < 4);
    local_1c = *(int *)(param_1 + 0x54) + 0x600;
    local_18 = *(int *)(param_1 + 0x58) + 0xa00;
    sub_080D0894(3,&local_1c);
    local_1c = *(int *)(param_1 + 0x54) + -0x600;
    local_18 = *(int *)(param_1 + 0x58) + 0xa00;
    sub_080D0894(3,&local_1c);
    sub_0801FE64(4,param_1 + 0x54);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    cVar2 = '\x03';
    goto LAB_080f0220;
  case 5:
    goto switchD_080effd2_caseD_5;
  default:
    goto switchD_080effd2_caseD_6;
  }
}

