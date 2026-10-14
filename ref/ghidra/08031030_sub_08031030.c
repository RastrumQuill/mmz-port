// sub_08031030 at 0x08031030 (thumb)

undefined4 sub_08031030(int param_1)

{
  int iVar1;
  undefined uVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') goto LAB_08031112;
  uVar4 = DAT_02022890 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar4 & 0x7fffffff;
  uVar8 = uVar4 * 2 >> 0x11 & 0xf;
  *(undefined *)(param_1 + 0xe) = 0;
  sub_080014E8(&DAT_085100b4,(DAT_02023182 - 0x210) * 0x20 + 0x10000);
  sub_0800179C(&DAT_085100c0,(DAT_02023129 - 8) * 0x20 + 0x200);
  iVar7 = (int)*(short *)(param_1 + 0x8c);
  uVar4 = (uint)(*(byte *)(param_1 + 0xd9) >> 2);
  iVar1 = uVar4 * 3;
  if (iVar7 == iVar1 || (int)(iVar7 + uVar4 * -3) < 0 != SBORROW4(iVar7,iVar1)) {
    if ((int)(uint)(*(byte *)(param_1 + 0xd9) >> 1) < iVar7) {
      *(undefined *)(param_1 + 0x12) = 0x20;
      if (uVar8 < 4) {
        uVar2 = 2;
      }
      else if (uVar8 < 0xc) {
        uVar2 = 3;
      }
      else {
LAB_080310fa:
        uVar2 = 4;
      }
    }
    else {
      *(undefined *)(param_1 + 0x12) = 0x18;
      if (uVar8 < 2) {
        uVar2 = 2;
      }
      else {
        if (8 < uVar8) goto LAB_080310fa;
        uVar2 = 3;
      }
    }
  }
  else {
    *(undefined *)(param_1 + 0x12) = 0x28;
    if (uVar8 < 6) {
      uVar2 = 2;
    }
    else {
      if (0xd < uVar8) goto LAB_080310fa;
      uVar2 = 3;
    }
  }
  *(undefined *)(param_1 + 0x13) = uVar2;
  uVar5 = sub_0809F8BC(param_1,0,0);
  *(undefined4 *)(param_1 + 0x24) = uVar5;
  *(undefined *)(param_1 + 0xcb) = 0;
LAB_08031112:
  sub_080297C0(param_1);
  pcVar6 = (char *)(param_1 + 0xcb);
  if ((*pcVar6 != '\0') && (cVar3 = *pcVar6 + -1, *pcVar6 = cVar3, cVar3 == '\0')) {
    uVar5 = sub_0809F8BC(param_1,0,*(char *)(param_1 + 0x13) == '\x01');
    *(undefined4 *)(param_1 + 0x24) = uVar5;
  }
  if ((*(int *)(param_1 + 0x24) != 0) && (1 < *(byte *)(*(int *)(param_1 + 0x24) + 0xc))) {
    *pcVar6 = *(char *)(param_1 + 0x12);
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + -1;
  }
  if (*(char *)(param_1 + 0x13) == '\0') {
    *(undefined *)(param_1 + 0xd) = 0x11;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

