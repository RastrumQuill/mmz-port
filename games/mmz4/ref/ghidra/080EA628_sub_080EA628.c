// sub_080EA628 at 0x080EA628 (thumb)

undefined4 sub_080EA628(int param_1)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    DAT_0202e8c4 = DAT_0202e8c4 & 0x7f;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
    *(byte *)(param_1 + 0xb8) = 0x15;
    sub_08001EA4(&DAT_08c441a4,(DAT_0202e06a - 0x1e0) * 0x20 + 0x10000);
    sub_08002208(&DAT_08c441b0,(DAT_0202de6a - 10) * 0x20 + 0x200);
    sub_0801CF00(param_1,(uint)*(byte *)(param_1 + 0xb8) << 8 | 2);
    sub_0801CFF0(param_1);
    sub_080E8FA4(0x80eab39);
    *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0x54) + 0x2000;
    *(int *)(param_1 + 0xc0) = *(int *)(*(int *)(param_1 + 0xb4) + 0x58) + 0x4000;
    DAT_030032e1 = DAT_030032e1 | 2;
    uVar2 = 0x40;
    break;
  case 1:
    DAT_030032e1 = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 2:
    sub_0801CFF0(param_1);
    if (*(char *)(param_1 + 0x12) == '\x1c') {
      sub_08002B10(0x4c);
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    uVar2 = 0x40;
    break;
  case 3:
    sub_0801CFF0(param_1);
    iVar3 = *(int *)(param_1 + 0xb4);
    *(int *)(iVar3 + 0x58) = *(int *)(iVar3 + 0x58) + 0x100;
    iVar4 = *(int *)(param_1 + 0xb4);
    iVar3 = *(int *)(iVar4 + 0x54);
    iVar5 = *(int *)(param_1 + 0xbc) - iVar3;
    if (iVar5 < 0x101) {
      if (iVar5 < -0x100) {
        iVar3 = iVar3 + -0x100;
        goto LAB_080ea782;
      }
    }
    else {
      iVar3 = iVar3 + 0x100;
LAB_080ea782:
      *(int *)(iVar4 + 0x54) = iVar3;
    }
    if (*(char *)(param_1 + 0x12) == ' ') {
      DAT_0202ea40 = (int *)(param_1 + 0xbc);
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_08002B10(0x4d);
    sub_0801CF00(param_1,(uint)*(byte *)(param_1 + 0xb8) << 8 | 3);
    if (*(char *)(param_1 + 0x10) == '\x02') {
      sub_080E8FA4(0x80eabad);
    }
    uVar2 = 0x20;
    break;
  case 4:
    sub_0801CFF0(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      DAT_0202e924 = DAT_0202e924 & 0xfffe;
      DAT_0202ea40 = (int *)(*(int *)(param_1 + 0xb4) + 0x54);
      *(undefined *)(*(int *)(param_1 + 0xb4) + 0x143) = 0;
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  default:
    goto switchD_080ea63c_caseD_5;
  }
  *(undefined *)(param_1 + 0x12) = uVar2;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080ea63c_caseD_5:
  return in_lr;
}

