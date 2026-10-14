// sub_08044A4C at 0x08044A4C (thumb)

undefined4 sub_08044A4C(int param_1)

{
  undefined uVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ushort uVar8;
  int iVar9;
  ushort uVar10;
  int iVar11;
  undefined4 in_lr;
  
  iVar11 = *(int *)(DAT_0202e130 + 0x54);
  uVar10 = 0;
  uVar4 = sub_08044DC0(param_1);
  uVar5 = sub_08044DD0(param_1);
  if (*(char *)(param_1 + 0xb4) == *(char *)(param_1 + 0xd)) {
    uVar7 = 0;
    do {
      if ((&DAT_0833a7b8)[uVar7 * 5] == (ushort)*(byte *)(param_1 + 0xd)) {
        uVar10 = (&DAT_0833a7ba)[uVar7 * 5];
        break;
      }
      uVar7 = uVar7 + 1 & 0xff;
    } while (uVar7 < 8);
  }
  uVar7 = sub_08044DE8(param_1);
  uVar7 = uVar7 & 0xff;
  if ((uVar4 & 0xff) == uVar7) {
    uVar10 = uVar10 | 2;
    iVar9 = *(int *)(param_1 + 0x54);
  }
  else {
    iVar9 = *(int *)(param_1 + 0x54);
    if (iVar9 < *(int *)(DAT_0202e130 + 0x54)) {
      if ((int)(uVar7 - (uVar5 & 0xff)) < 2) goto LAB_08044b00;
    }
    else if (-2 < (int)(uVar7 - (uVar5 & 0xff))) {
LAB_08044b00:
      uVar10 = uVar10 | 2;
    }
  }
  if (((iVar9 - iVar11) + 0x4000U < 0x8001) || (0x10000 < (iVar9 - iVar11) + 0x8000U)) {
    uVar10 = uVar10 | 0x80;
  }
  if (*(byte *)(DAT_0202ebf0 + 1) < 5) {
LAB_08044b56:
    uVar10 = uVar10 | 0x40;
  }
  else {
    iVar9 = sub_08044DAC(param_1,*(undefined4 *)(param_1 + 0x54));
    iVar6 = sub_08044DAC(param_1,iVar11);
    if (iVar9 * 0x1000000 + iVar6 * -0x1000000 != 0) goto LAB_08044b56;
  }
  iVar11 = iVar11 - *(int *)(param_1 + 0x54);
  if (iVar11 + 0x6000U < 0xc001) {
    iVar9 = 2;
  }
  else {
    iVar9 = 4;
    if (iVar11 + 0x8000U < 0x10001) {
      iVar9 = 3;
    }
  }
  *(undefined *)(param_1 + 0xb4) = *(undefined *)(param_1 + 0xd);
  uVar4 = 0;
  sVar2 = 0;
  do {
    if (((&DAT_0833a7ba)[uVar4 * 5] & uVar10) == 0) {
      sVar2 = sVar2 + (&DAT_0833a7b8)[uVar4 * 5 + iVar9];
    }
    uVar4 = uVar4 + 1 & 0xff;
  } while (uVar4 < 8);
  if (sVar2 == 0) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    return in_lr;
  }
  uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar4 & 0x7fffffff;
  uVar3 = sub_080EF330(uVar4 * 2 >> 0x11,sVar2);
  uVar4 = 0;
  uVar8 = 0;
  do {
    if ((((&DAT_0833a7ba)[uVar4 * 5] & uVar10) == 0) &&
       (uVar8 = uVar8 + (&DAT_0833a7b8)[uVar4 * 5 + iVar9], uVar3 < uVar8)) {
      *(char *)(param_1 + 0xd) = (char)(&DAT_0833a7b8)[uVar4 * 5];
      break;
    }
    uVar4 = uVar4 + 1 & 0xff;
  } while (uVar4 < 8);
  switch(*(undefined *)(param_1 + 0xd)) {
  case 3:
    uVar1 = sub_08044DE8(param_1);
    break;
  default:
    goto switchD_08044c62_caseD_4;
  case 5:
    uVar1 = sub_08044DC0(param_1);
    break;
  case 6:
    uVar1 = sub_08044E34(param_1);
    break;
  case 8:
    uVar1 = sub_08044E8C(param_1);
    break;
  case 9:
    uVar1 = sub_08044E4C(param_1);
  }
  *(undefined *)(param_1 + 0xb5) = uVar1;
switchD_08044c62_caseD_4:
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  return in_lr;
}

