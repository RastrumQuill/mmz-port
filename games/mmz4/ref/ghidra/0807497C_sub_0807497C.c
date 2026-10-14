// sub_0807497C at 0x0807497C (thumb)

undefined4 sub_0807497C(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0x9301);
    if (*(char *)(param_1 + 0xe2) == '\0') {
      uVar2 = 0x200;
    }
    else {
      uVar2 = 0xfe00;
    }
    *(undefined2 *)(param_1 + 200) = uVar2;
    *(undefined2 *)(param_1 + 0xca) = uVar2;
    *(undefined2 *)(param_1 + 0xdc) = 0;
    *(undefined2 *)(param_1 + 0xca) = *(undefined2 *)(param_1 + 200);
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  pbVar6 = (byte *)(param_1 + 0xe0);
  if ((*pbVar6 & 0x7f) != 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + (short)(&DAT_08128c10)[*pbVar6] * 4;
    *pbVar6 = *pbVar6 + 1;
  }
  uVar3 = *(ushort *)(param_1 + 0xc4);
  *(ushort *)(param_1 + 0xc4) = uVar3 + *(short *)(param_1 + 200);
  *(short *)(param_1 + 0xc6) = *(short *)(param_1 + 0xca) + *(short *)(param_1 + 0xc6);
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    if (*(char *)(param_1 + 0xe2) == '\0') {
      if ((uVar3 & 0x3fff) < 0x3e00) goto switchD_08074a12_caseD_6;
      uVar3 = *(ushort *)(param_1 + 0xc4) & 0x3fff;
      if (0x1ff < uVar3) goto switchD_08074a12_caseD_6;
      *(ushort *)(param_1 + 0xc4) = *(ushort *)(param_1 + 0xc4) - uVar3;
      *(ushort *)(param_1 + 0xc6) = *(short *)(param_1 + 0xc6) - uVar3;
      *(undefined2 *)(param_1 + 200) = 0;
      *(undefined2 *)(param_1 + 0xca) = 0;
      *(undefined *)(param_1 + 0x12) = 0x10;
      cVar1 = *(char *)(param_1 + 0xf) + '\x01';
    }
    else {
      if (0x1ff < (uVar3 & 0x3fff)) goto switchD_08074a12_caseD_6;
      uVar3 = *(ushort *)(param_1 + 0xc4) & 0x3fff;
      if (uVar3 < 0x3e00) goto switchD_08074a12_caseD_6;
      sVar4 = 0x4000 - uVar3;
      *(ushort *)(param_1 + 0xc4) = sVar4 + *(ushort *)(param_1 + 0xc4);
      *(short *)(param_1 + 0xc6) = sVar4 + *(short *)(param_1 + 0xc6);
      *(undefined2 *)(param_1 + 200) = 0;
      *(undefined2 *)(param_1 + 0xca) = 0;
      *(undefined *)(param_1 + 0x12) = 0x10;
      cVar1 = *(char *)(param_1 + 0xf) + '\x01';
    }
    break;
  case 1:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) goto switchD_08074a12_caseD_6;
    *(undefined *)(param_1 + 0x12) = 8;
    cVar1 = *(char *)(param_1 + 0xf) + '\x01';
    break;
  case 2:
    *(short *)(param_1 + 0xc0) = *(short *)(param_1 + 0xc0) + -0x290;
    *(short *)(param_1 + 0xc2) = *(short *)(param_1 + 0xc2) + -0x120;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) goto switchD_08074a12_caseD_6;
    *(undefined2 *)(param_1 + 0xc0) = 0x1b80;
    *(undefined2 *)(param_1 + 0xc2) = 0x2700;
    *(undefined2 *)(param_1 + 0xdc) = 0x20;
    *(undefined *)(param_1 + 0x12) = *(undefined *)(param_1 + 0xe3);
    cVar1 = *(char *)(param_1 + 0xf) + '\x01';
    break;
  case 3:
    sVar4 = *(short *)(param_1 + 0xdc) + -1;
    *(short *)(param_1 + 0xdc) = sVar4;
    if (sVar4 != -1) goto switchD_08074a12_caseD_6;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      *(undefined2 *)(param_1 + 0xdc) = 0x20;
      sub_080CB110(param_1,0,0);
      sub_08002B10(0x18c);
      goto switchD_08074a12_caseD_6;
    }
    *(undefined2 *)(param_1 + 0xdc) = 0;
    *(undefined *)(param_1 + 0x12) = 8;
    cVar1 = *(char *)(param_1 + 0xf) + '\x01';
    break;
  case 4:
    *(short *)(param_1 + 0xc0) = *(short *)(param_1 + 0xc0) + 0x290;
    *(short *)(param_1 + 0xc2) = *(short *)(param_1 + 0xc2) + 0x120;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) goto switchD_08074a12_caseD_6;
    *(undefined2 *)(param_1 + 0xc0) = 0x3000;
    *(undefined2 *)(param_1 + 0xc2) = 0x3000;
    cVar1 = *(char *)(param_1 + 0xf) + '\x01';
    break;
  case 5:
    pbVar6 = (byte *)(param_1 + 0xe2);
    if (*pbVar6 == 0) {
      iVar5 = *(ushort *)(param_1 + 200) - 0x10;
      *(short *)(param_1 + 200) = (short)iVar5;
      *(short *)(param_1 + 0xca) = *(short *)(param_1 + 0xca) + -0x10;
      if (iVar5 * 0x10000 >> 0x10 < -0x200) {
        *(undefined2 *)(param_1 + 200) = 0xfe00;
        *(undefined2 *)(param_1 + 0xca) = 0xfe00;
LAB_08074bf8:
        *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      }
    }
    else {
      sVar4 = *(short *)(param_1 + 200) + 0x10;
      *(short *)(param_1 + 200) = sVar4;
      *(short *)(param_1 + 0xca) = *(short *)(param_1 + 0xca) + 0x10;
      if (0x200 < sVar4) {
        *(undefined2 *)(param_1 + 200) = 0x200;
        *(undefined2 *)(param_1 + 0xca) = 0x200;
        goto LAB_08074bf8;
      }
    }
    if (*(char *)(param_1 + 0xf) != '\x06') goto switchD_08074a12_caseD_6;
    *pbVar6 = *pbVar6 + 1 & 1;
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
    cVar1 = '\x01';
    break;
  default:
    goto switchD_08074a12_caseD_6;
  }
  *(char *)(param_1 + 0xf) = cVar1;
switchD_08074a12_caseD_6:
  sub_0801CFF0(param_1);
  return in_lr;
}

