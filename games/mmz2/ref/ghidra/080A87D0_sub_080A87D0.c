// sub_080A87D0 at 0x080A87D0 (thumb)

undefined4 sub_080A87D0(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  if (1 < *(byte *)(iVar5 + 0xc)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc)
    ;
    return in_lr;
  }
  if (*(byte *)(param_1 + 0xd) < 6) {
    if (*(char *)(param_1 + 0x11) == '\x01') {
      if (*(char *)(param_1 + 0x10) == '\0') {
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          iVar3 = *(int *)(iVar5 + 0x54) + 0x1a00;
        }
        else {
          iVar3 = *(int *)(iVar5 + 0x54) + -0x1a00;
        }
        *(int *)(param_1 + 0x54) = iVar3;
        iVar3 = *(int *)(iVar5 + 0x58) + -0x3700;
      }
      else {
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          iVar3 = *(int *)(iVar5 + 0x54) + -0x3800;
        }
        else {
          iVar3 = *(int *)(iVar5 + 0x54) + 0x3800;
        }
        *(int *)(param_1 + 0x54) = iVar3;
        iVar3 = *(int *)(iVar5 + 0x58) + -0x3700;
      }
    }
    else {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar3 = *(int *)(iVar5 + 0x54) +
                (short)(&DAT_080ef450)[*(byte *)(iVar5 + 0x24) + 0x40 & 0xff] * -0xc;
      }
      else {
        iVar3 = *(int *)(iVar5 + 0x54) +
                (short)(&DAT_080ef450)[*(byte *)(iVar5 + 0x24) + 0x40 & 0xff] * 0xc;
      }
      *(int *)(param_1 + 0x54) = iVar3;
      iVar3 = *(int *)(iVar5 + 0x58) + (short)(&DAT_080ef450)[*(byte *)(iVar5 + 0x24)] * -0xc;
    }
    *(int *)(param_1 + 0x58) = iVar3;
  }
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
  case 4:
    goto switchD_080a88e4_caseD_0;
  case 1:
    if (*(char *)(param_1 + 0x11) == '\0') {
      uVar4 = 0x2000;
LAB_080a891e:
      sub_080127E4(param_1,uVar4);
    }
    else {
      if (*(char *)(param_1 + 0x11) == '\x01') {
        uVar4 = 0x2001;
        goto LAB_080a891e;
      }
      sub_080127E4(param_1,0x2002);
    }
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 2:
    sub_080128D4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return in_lr;
    }
    goto LAB_080a897c;
  case 3:
    sub_080127E4(param_1,0x2003);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080a88e4_caseD_0:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
LAB_080a897c:
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
switchD_080a88e4_caseD_7:
    return in_lr;
  case 5:
    if (*(char *)(param_1 + 0x11) != '\x01') {
      sub_0801260C(param_1);
      *(undefined *)(param_1 + 0x24) = *(undefined *)(iVar5 + 0x24);
    }
    sub_080127E4(param_1,0x2004);
    sub_08006E08(param_1 + 0x74,&DAT_083452d8);
    sub_080032EC(0x38);
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 6:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x11) == '\x01') {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar5 = *(int *)(param_1 + 0x54) + -0x400;
      }
      else {
        iVar5 = *(int *)(param_1 + 0x54) + 0x400;
      }
      *(int *)(param_1 + 0x54) = iVar5;
    }
    else {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar5 = *(int *)(param_1 + 0x54) +
                (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x24) + 0x40 & 0xff] * -4;
      }
      else {
        iVar5 = *(int *)(param_1 + 0x54) +
                (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x24) + 0x40 & 0xff] * 4;
      }
      *(int *)(param_1 + 0x54) = iVar5;
      *(int *)(param_1 + 0x58) =
           *(int *)(param_1 + 0x58) + (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x24)] * -4;
    }
    if ((*(char *)(param_1 + 0x11) == '\x02') &&
       (sVar2 = sub_08008CFC(*(int *)(param_1 + 0x54) +
                             (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x24) + 0x40 & 0xff] * -0x1a
                             ,*(int *)(param_1 + 0x58) +
                              (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x24)] * -0x1a), sVar2 != 0
       )) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_080A8AF0(param_1);
    }
    else {
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 == -1) {
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
        sub_080A8AF0(param_1);
      }
    }
  default:
    goto switchD_080a88e4_caseD_7;
  }
}

