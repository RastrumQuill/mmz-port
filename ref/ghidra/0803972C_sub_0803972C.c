// sub_0803972C at 0x0803972C (thumb)

undefined4 sub_0803972C(int param_1)

{
  undefined uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    uVar6 = 0;
    do {
      if (((int)(uint)*(ushort *)(param_1 + 0xd8) >> (uVar6 & 0xff) & 1U) == 0) {
        *(char *)((uint)*(byte *)(param_1 + 0x13) + param_1 + 0xc4) = (char)uVar6;
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < 8);
  }
  sub_080297C0(param_1);
  if (*(int *)(DAT_0202286c + 0x4c) >> 8 == *(int *)(param_1 + 0x4c) >> 8) {
    uVar3 = 0;
  }
  else if (*(int *)(DAT_0202286c + 0x4c) < *(int *)(param_1 + 0x4c)) {
    uVar3 = 0xffffff00;
  }
  else {
    uVar3 = 0x100;
  }
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  if (*(int *)(param_1 + 0x54) < 0) {
    iVar4 = *(int *)(param_1 + 0x4c);
    if (*(int *)(param_1 + 0xb8) + -0x6800 < iVar4) {
LAB_080397c6:
      *(int *)(param_1 + 0x4c) = iVar4 + *(int *)(param_1 + 0x54);
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x4c);
    if (iVar4 < *(int *)(param_1 + 0xb8) + 0x6800) goto LAB_080397c6;
  }
  pbVar5 = (byte *)(param_1 + 0xc0);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0xbc) + (short)(&DAT_080c8e24)[*pbVar5] * 0x10;
  *pbVar5 = *pbVar5 + 4;
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
      *(ushort *)(param_1 + 0xe0) =
           (ushort)(1 << *(sbyte *)((uint)(*(byte *)(param_1 + 0x12) >> 2) + param_1 + 0xc4)) |
           *(ushort *)(param_1 + 0xe0);
    }
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    if ((int)((uint)*(byte *)(param_1 + 0x12) + (uint)*(byte *)(param_1 + 0x13) * -4) < 0 !=
        SBORROW4((uint)*(byte *)(param_1 + 0x12),(uint)*(byte *)(param_1 + 0x13) * 4)) {
      return in_lr;
    }
    sub_08029778(param_1,3);
    sub_080297C0(param_1);
    break;
  case 1:
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    sub_08029778(param_1,0);
    sub_080297C0(param_1);
    sub_0800561C(param_1 + 0x74,&DAT_082ada78);
    *(undefined *)(param_1 + 0x12) = 8;
    break;
  case 2:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0;
    break;
  case 3:
    uVar1 = *(undefined *)(param_1 + 0x12);
    cVar2 = sub_080C8CB0(uVar1,6);
    if (cVar2 == '\0') {
      uVar6 = sub_080C8C38(uVar1,6);
      uVar6 = (uint)*(byte *)((uVar6 & 0xff) + param_1 + 0xc4);
      uVar7 = *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
      if (-((int)~uVar7 >> 0x1f) == (*(byte *)(DAT_0202286c + 10) >> 4 & 1)) {
        iVar4 = uVar6 * 0x400 + 0x1800;
      }
      else {
        iVar4 = (uVar6 * -4 + 0x18) * 0x100;
      }
      iVar4 = sub_080C88E8((int)(uVar7 * 0x1000) >> 0x10,
                           ((*(int *)(DAT_0202286c + 0x50) - iVar4) - *(int *)(param_1 + 0x50)) *
                           0x1000 >> 0x10);
      sub_08076710(param_1 + 0x4c,0x400,((uint)(iVar4 << 0x10) >> 0x18) + 0x80 & 0xfe);
      sub_08001EAC(0xd);
      *(ushort *)(param_1 + 0xe0) = ((ushort)(1 << uVar6) ^ 0xff) & *(ushort *)(param_1 + 0xe0);
    }
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    if ((int)((uint)*(byte *)(param_1 + 0x12) + (uint)*(byte *)(param_1 + 0x13) * -6) < 0 !=
        SBORROW4((uint)*(byte *)(param_1 + 0x12),(uint)*(byte *)(param_1 + 0x13) * 6)) {
      return in_lr;
    }
    sub_08029778(param_1,1);
    sub_080297C0(param_1);
    sub_0800561C(param_1 + 0x74,&DAT_082ada94);
    break;
  case 4:
    if (*(char *)(param_1 + 0x73) == '\x03') {
      sub_08029778(param_1,2);
      sub_080297C0(param_1);
      *(undefined *)(param_1 + 0xd) = 4;
      *(undefined *)(param_1 + 0xe) = 1;
    }
  default:
    goto switchD_080397fc_caseD_5;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
switchD_080397fc_caseD_5:
  return in_lr;
}

