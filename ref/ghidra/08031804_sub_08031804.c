// sub_08031804 at 0x08031804 (thumb)

undefined4 sub_08031804(int param_1)

{
  ushort uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  short *psVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0x14);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (((DAT_02022b64 & 1) != 0) && ((DAT_02022b6e & 1) == 0)) {
      DAT_02022b64 = DAT_02022b64 & 0xfffe | 0x20;
    }
    *(undefined *)(param_1 + 0x12) = 0;
    if (*(int *)(DAT_0202286c + 0x4c) < *(int *)(param_1 + 0x4c)) {
      uVar3 = 0x100;
    }
    else {
      uVar3 = 0xffffff00;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar3;
    *(undefined4 *)(param_1 + 0x58) = 0xfffffd00;
  }
  sub_080297C0(param_1);
  sub_08033AFC(param_1);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x40;
    iVar4 = sub_08008360();
    if (iVar4 < *(int *)(param_1 + 0x50)) {
      uVar3 = sub_08008360(*(undefined4 *)(param_1 + 0x4c));
      *(undefined4 *)(param_1 + 0x50) = uVar3;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      sub_08029778(param_1,0x1b);
      sub_080297C0(param_1);
      *(undefined *)(param_1 + 0x12) = 0;
    }
    goto switchD_0803189a_caseD_7;
  case 1:
    if ((DAT_02022b64 & 0x10) != 0) goto switchD_0803189a_caseD_7;
    if (*(char *)(param_1 + 0x10) == '\0') {
      sub_080BC808(0xc0a);
    }
    else {
      sub_080BC808(0x120a);
    }
    break;
  case 2:
    if (DAT_0202365a == 0) {
      sub_08029710(param_1);
      sub_08029778(param_1,0x1b);
      sub_080297C0(param_1);
      *(undefined2 *)(param_1 + 0xdc) = 0x100;
      *(undefined2 *)(param_1 + 0xde) = 0x100;
      *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0xd0;
      *(undefined *)(param_1 + 0x1e) = 0xd;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      if (*(char *)(param_1 + 0x10) == '\0') {
        sub_08015698(0x12,param_1 + 0x4c);
      }
      sub_08001EAC(0xd4);
    }
    goto switchD_0803189a_caseD_7;
  case 3:
    puVar6 = (ushort *)(param_1 + 0xdc);
    uVar1 = *puVar6;
    *puVar6 = (ushort)(uVar1 - 0x40);
    if (3 < (int)((uVar1 - 0x40) * 0x10000) >> 0x10) goto switchD_0803189a_caseD_7;
    *puVar6 = 4;
    break;
  case 4:
    puVar6 = (ushort *)(param_1 + 0xde);
    uVar1 = *puVar6;
    *puVar6 = (ushort)(uVar1 - 0x10);
    if (0x7f < (int)((uVar1 - 0x10) * 0x10000) >> 0x10) goto switchD_0803189a_caseD_7;
    *puVar6 = 0x80;
    break;
  case 5:
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x800;
    psVar7 = (short *)(param_1 + 0xde);
    sVar2 = *psVar7;
    *psVar7 = sVar2 + 0x20;
    if (0x200 < (short)(sVar2 + 0x20)) {
      *psVar7 = 0x200;
    }
    uVar5 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
    if (uVar5 < 0x801) goto switchD_0803189a_caseD_7;
    break;
  case 6:
    DAT_02022b6e = DAT_02022b6e | 2;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    break;
  default:
    goto switchD_0803189a_caseD_7;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
switchD_0803189a_caseD_7:
  if (1 < *(byte *)(param_1 + 0xf)) {
    *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_1 + 0xdc);
    *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(param_1 + 0xde);
  }
  return in_lr;
}

