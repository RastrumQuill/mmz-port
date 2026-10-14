// sub_080B157C at 0x080B157C (thumb)

undefined4 sub_080B157C(int param_1)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 in_lr;
  undefined2 auStack_18 [2];
  
  sub_080C8D70(auStack_18,&DAT_080c9540,4);
  iVar2 = DAT_0202286c;
  sub_0809C980(param_1);
  bVar1 = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
  *(bool *)(param_1 + 0x44) = bVar1;
  if (bVar1) {
    bVar3 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar3 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar3;
  if ((*(byte *)(param_1 + 0xf) < 3) &&
     (uVar5 = *(byte *)(param_1 + 0x10) + 0x69,
     ((int)(uint)(byte)(&DAT_02022ad4)[(int)uVar5 >> 3] >> (uVar5 & 7) & 1U) != 0)) {
    sub_0809C930(param_1,*(byte *)(param_1 + 0x10) + 2);
    sub_0809C980(param_1);
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined *)(param_1 + 0xf) = 3;
    sub_08001EE8((int)*(short *)(param_1 + 0xc4));
    *(short *)(param_1 + 0xc4) = -1;
  }
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    if (DAT_0202365a != 0) goto switchD_080b1632_caseD_4;
    iVar10 = *(int *)(iVar2 + 0x4c) - *(int *)(param_1 + 0x4c);
    if (iVar10 < 0) {
      iVar10 = *(int *)(param_1 + 0x4c) - *(int *)(iVar2 + 0x4c);
    }
    if (0x4000 < iVar10) goto switchD_080b1632_caseD_4;
    sub_080BC818(auStack_18[*(byte *)(param_1 + 0x10)],0x80);
    break;
  case 1:
    if (DAT_0202365a != 0) goto switchD_080b1632_caseD_4;
    break;
  case 2:
    iVar10 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
    if (iVar10 == 0) goto switchD_080b1632_caseD_4;
    cVar4 = '\0';
    goto LAB_080b16d2;
  case 3:
    if (*(char *)(param_1 + 0x73) != '\x03') goto switchD_080b1632_caseD_4;
    sub_0809C930(param_1,*(byte *)(param_1 + 0x10) + 4);
    sub_0809C980(param_1);
    break;
  default:
    goto switchD_080b1632_caseD_4;
  }
  cVar4 = *(char *)(param_1 + 0xf) + '\x01';
LAB_080b16d2:
  *(char *)(param_1 + 0xf) = cVar4;
switchD_080b1632_caseD_4:
  if (((*(byte *)(iVar2 + 0x128) & 1) != 0) &&
     (uVar5 = *(byte *)(param_1 + 0x10) + 0x69,
     ((int)(uint)(byte)(&DAT_02022ad4)[(int)uVar5 >> 3] >> (uVar5 & 7) & 1U) == 0)) {
    iVar10 = 0x2a00;
    if (*(byte *)(param_1 + 0x10) == 0) {
      iVar10 = 0x3200;
    }
    iVar9 = iVar10 * 0x100;
    iVar7 = *(int *)(iVar2 + 0x4c);
    iVar6 = *(int *)(param_1 + 0x4c);
    iVar8 = iVar7 - iVar6;
    if (iVar8 < 0) {
      iVar8 = iVar6 - iVar7;
      if (iVar8 != iVar9 && iVar8 + iVar10 * -0x100 < 0 == SBORROW4(iVar8,iVar9)) {
        return in_lr;
      }
    }
    else if (iVar8 != iVar9 && iVar8 + iVar10 * -0x100 < 0 == SBORROW4(iVar8,iVar9)) {
      return in_lr;
    }
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar6 = iVar6 - iVar10;
      if (iVar7 <= iVar6) {
        return in_lr;
      }
    }
    else {
      iVar6 = iVar6 + iVar10;
      if (iVar6 <= iVar7) {
        return in_lr;
      }
    }
    *(int *)(iVar2 + 0x4c) = iVar6;
  }
  return in_lr;
}

