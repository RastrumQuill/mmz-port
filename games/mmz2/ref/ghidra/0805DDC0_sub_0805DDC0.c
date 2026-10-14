// sub_0805DDC0 at 0x0805DDC0 (thumb)

undefined4 sub_0805DDC0(int param_1)

{
  bool bVar1;
  undefined uVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 in_lr;
  
  sub_080128D4();
  iVar8 = DAT_0202e130;
  *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54);
  bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar8 + 0x54);
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  if (bVar1) {
    bVar3 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar3 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar3;
  if ((*(char *)(param_1 + 0xd8) != '\0') &&
     (*(int *)(param_1 + 0x58) < *(int *)(DAT_0202e130 + 0x58) + -0x2000)) {
    iVar8 = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202e130 + 0x54);
    if (iVar8 < 0) {
      iVar8 = *(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54);
    }
    if (iVar8 < 0xa00) {
      *(undefined *)(param_1 + 0xd) = 0x1a;
      goto LAB_0805dfa4;
    }
  }
  pbVar4 = (byte *)(param_1 + 0xbf);
  if (((1 < *pbVar4) &&
      ((*(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54)) + 0x4000U < 0x8001)) &&
     ((*(int *)(DAT_0202e130 + 0x58) - *(int *)(param_1 + 0x58)) + 0x4000U < 0x8001)) {
    *pbVar4 = 0;
    *(undefined *)(param_1 + 0xd) = 0x14;
    goto LAB_0805dfa4;
  }
  pbVar5 = (byte *)(param_1 + 0xbd);
  switch(*pbVar5) {
  case 0:
    uVar2 = 6;
    break;
  case 1:
    uVar2 = 9;
    break;
  case 2:
    uVar2 = 10;
    break;
  case 3:
    uVar2 = 6;
    break;
  case 4:
    uVar2 = 9;
    break;
  case 5:
    uVar2 = 0xf;
    break;
  case 6:
    uVar2 = 6;
    break;
  case 7:
    uVar2 = 9;
    break;
  case 8:
    *(undefined *)(param_1 + 0xd) = 0x12;
    uVar6 = DAT_0202e188 * 0x343fd + 0x269ec3;
    *(byte *)(param_1 + 0xd0) = ((byte)(uVar6 * 2 >> 0x11) & 1) + 2;
    uVar6 = (uVar6 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar6 & 0x7fffffff;
    *(byte *)(param_1 + 0xd1) = ((byte)(uVar6 * 2 >> 0x11) & 1) * '\x04' + '\x10';
    goto switchD_0805dec0_caseD_c;
  case 9:
    uVar2 = 6;
    break;
  case 10:
    uVar2 = 9;
    break;
  case 0xb:
    uVar2 = 0x16;
    break;
  default:
    goto switchD_0805dec0_caseD_c;
  }
  *(undefined *)(param_1 + 0xd) = uVar2;
switchD_0805dec0_caseD_c:
  if (*(byte *)(DAT_0202ebf0 + 1) < 5) {
    bVar3 = *pbVar5;
    uVar7 = 9;
  }
  else {
    bVar3 = *pbVar5;
    uVar7 = 0xc;
  }
  bVar3 = sub_080EF1E8(bVar3 + 1,uVar7);
  *pbVar5 = bVar3;
  *pbVar4 = *pbVar4 + 1;
LAB_0805dfa4:
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

