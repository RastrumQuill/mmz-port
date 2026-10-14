// sub_0803C41C at 0x0803C41C (thumb)

undefined4 sub_0803C41C(int param_1)

{
  ushort uVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  short *psVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (((DAT_02022b64 & 1) != 0) && ((DAT_02022b6e & 1) == 0)) {
      DAT_02022b64 = DAT_02022b64 & 0xfffe | 0x20;
    }
    sub_08029778(param_1,0x10);
    *(undefined *)(param_1 + 0xe) = 0;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x54) = 0x200;
      *(undefined2 *)(param_1 + 0xce) = 0xfff0;
    }
    else {
      *(undefined4 *)(param_1 + 0x54) = 0xfffffe00;
      *(undefined2 *)(param_1 + 0xce) = 0x10;
    }
    *(undefined4 *)(param_1 + 0x58) = 0xffffff00;
    *(undefined *)(param_1 + 0x12) = 0;
  }
  sub_080297C0(param_1);
  sub_0803D78C(param_1);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    if (0x1c < *(byte *)(param_1 + 0x12)) {
      sub_08029778(param_1,0x12);
      sub_080297C0(param_1);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      *(undefined *)(param_1 + 0x12) = 0;
    }
    goto switchD_0803c4c4_caseD_8;
  case 1:
    if ((DAT_02022b64 & 0x10) != 0) goto switchD_0803c4c4_caseD_8;
    if (*(char *)(param_1 + 0x10) == '\0') {
      sub_080BC808(0xe07);
    }
    else {
      sub_080BC808(0x120c);
    }
    break;
  case 2:
    if (DAT_0202365a != 0) goto switchD_0803c4c4_caseD_8;
    sub_08029710(param_1);
    sub_08029778(param_1,0x12);
    sub_080297C0(param_1);
    *(undefined2 *)(param_1 + 0xdc) = 0x100;
    *(undefined2 *)(param_1 + 0xde) = 0x100;
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0xd0;
    *(undefined *)(param_1 + 0x1e) = 0xd;
    sub_08001EAC(0xd4);
    break;
  case 3:
    puVar6 = (ushort *)(param_1 + 0xdc);
    uVar1 = *puVar6;
    *puVar6 = (ushort)(uVar1 - 0x40);
    if (3 < (int)((uVar1 - 0x40) * 0x10000) >> 0x10) goto switchD_0803c4c4_caseD_8;
    *puVar6 = 4;
    break;
  case 4:
    puVar6 = (ushort *)(param_1 + 0xde);
    uVar1 = *puVar6;
    *puVar6 = (ushort)(uVar1 - 0x10);
    if (0x7f < (int)((uVar1 - 0x10) * 0x10000) >> 0x10) goto switchD_0803c4c4_caseD_8;
    *puVar6 = 0x80;
    if (*(char *)(param_1 + 0x10) == '\0') break;
    cVar3 = *(char *)(param_1 + 0xf) + '\x02';
    goto LAB_0803c666;
  case 5:
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x800;
    psVar7 = (short *)(param_1 + 0xde);
    sVar2 = *psVar7;
    *psVar7 = sVar2 + 0x20;
    if (0x200 < (short)(sVar2 + 0x20)) {
      *psVar7 = 0x200;
    }
    iVar4 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    if (iVar4 + -0x7000 <= *(int *)(param_1 + 0x50)) goto switchD_0803c4c4_caseD_8;
    sub_08015698(0x14,param_1 + 0x4c);
    break;
  case 6:
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x800;
    psVar7 = (short *)(param_1 + 0xde);
    sVar2 = *psVar7;
    *psVar7 = sVar2 + 0x20;
    if (0x200 < (short)(sVar2 + 0x20)) {
      *psVar7 = 0x200;
    }
    uVar5 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
    if (uVar5 < 0x801) goto switchD_0803c4c4_caseD_8;
    break;
  case 7:
    DAT_02022b6e = DAT_02022b6e | 2;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    break;
  default:
    goto switchD_0803c4c4_caseD_8;
  }
  cVar3 = *(char *)(param_1 + 0xf) + '\x01';
LAB_0803c666:
  *(char *)(param_1 + 0xf) = cVar3;
switchD_0803c4c4_caseD_8:
  if (1 < *(byte *)(param_1 + 0xf)) {
    *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_1 + 0xdc);
    *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(param_1 + 0xde);
  }
  return in_lr;
}

