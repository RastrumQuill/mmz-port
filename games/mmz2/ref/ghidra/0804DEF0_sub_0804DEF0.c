// sub_0804DEF0 at 0x0804DEF0 (thumb)

undefined4 sub_0804DEF0(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_080127E4(param_1,0x3101);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0804df04_caseD_1:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      uVar3 = 0x10;
LAB_0804dffa:
      *(undefined *)(param_1 + 0x12) = uVar3;
LAB_0804dffc:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
switchD_0804df04_caseD_8:
    return in_lr;
  case 1:
    goto switchD_0804df04_caseD_1;
  case 2:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    goto LAB_0804dffc;
  case 3:
    sub_080127E4(param_1,0x3103);
    *(undefined4 *)(param_1 + 0x60) = 0xfffffbc0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 4:
    sub_080128D4(param_1);
    iVar4 = *(int *)(param_1 + 0x60) + 0x20;
    *(int *)(param_1 + 0x60) = iVar4;
    iVar4 = *(int *)(param_1 + 0x58) + iVar4;
    *(int *)(param_1 + 0x58) = iVar4;
    iVar5 = *(int *)(param_1 + 0xcc) + -0x800;
    if (iVar5 <= iVar4) {
      return in_lr;
    }
    *(int *)(param_1 + 0x58) = iVar5;
    *(undefined *)(param_1 + 0xbd) = 0xc0;
    goto LAB_0804dffc;
  case 5:
    DAT_0202e03c = 2;
    sub_080127E4(param_1,0x3104);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 6:
    sub_080128D4(param_1);
    pbVar6 = (byte *)(param_1 + 0xbd);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xcc) + (short)(&DAT_080ef450)[*pbVar6] * 8;
    bVar1 = *pbVar6;
    *pbVar6 = bVar1 + 2;
    if ((byte)(bVar1 + 2) != 0x40) {
      return in_lr;
    }
    uVar3 = 0x20;
    goto LAB_0804dffa;
  case 7:
    sub_080128D4(param_1);
    pbVar6 = (byte *)(param_1 + 0xbd);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xcc) + (short)(&DAT_080ef450)[*pbVar6] * 8;
    *pbVar6 = *pbVar6 + 1;
    bVar1 = (byte)DAT_0202ec42;
    if ((DAT_0202ec42 & 1) == 0) {
      *(undefined *)(param_1 + 0xd) = 6;
      *(byte *)(param_1 + 0xe) = bVar1 & 1;
    }
  default:
    goto switchD_0804df04_caseD_8;
  }
}

