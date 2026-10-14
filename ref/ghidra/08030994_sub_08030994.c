// sub_08030994 at 0x08030994 (thumb)

undefined4 sub_08030994(int param_1)

{
  byte bVar1;
  undefined uVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 in_lr;
  int local_38 [4];
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  
  if (*(char *)(param_1 + 0xe) == '\0') goto LAB_08030c06;
  local_38[0] = 0x3000;
  local_38[1] = 0xffffd000;
  local_38[2] = 0x6000;
  local_38[3] = 0xffffa000;
  uVar8 = DAT_02022890 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar8 & 0x7fffffff;
  uVar7 = uVar8 * 2 >> 0x11 & 0x1f;
  sub_08029778(param_1,3);
  *(undefined *)(param_1 + 0xe) = 0;
  sub_080014E8(&DAT_084b82d0,(DAT_02022ee8 - 0x210) * 0x20 + 0x10000);
  sub_0800179C(&DAT_084b82dc,(DAT_02022f54 - 7) * 0x20 + 0x200);
  iVar6 = (int)*(short *)(param_1 + 0x8c);
  uVar8 = (uint)(*(byte *)(param_1 + 0xd9) >> 2);
  iVar4 = uVar8 * 3;
  if (iVar6 == iVar4 || (int)(iVar6 + uVar8 * -3) < 0 != SBORROW4(iVar6,iVar4)) {
    if ((int)(uint)(*(byte *)(param_1 + 0xd9) >> 1) < iVar6) {
      if (uVar7 < 0xc) {
        uVar2 = 1;
      }
      else if (uVar7 < 0x18) {
        uVar2 = 2;
      }
      else {
LAB_08030a72:
        uVar2 = 3;
      }
    }
    else if (uVar7 < 4) {
      uVar2 = 1;
    }
    else {
      if (0x11 < uVar7) goto LAB_08030a72;
      uVar2 = 2;
    }
  }
  else if (uVar7 < 0x16) {
    uVar2 = 1;
  }
  else {
    uVar2 = 2;
  }
  *(undefined *)(param_1 + 0x12) = uVar2;
  iVar4 = DAT_0202286c;
  local_1c = *(undefined4 *)(DAT_0202286c + 0x50);
  bVar1 = *(byte *)(param_1 + 0x12);
  if (bVar1 == 2) {
    uVar8 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar8 & 0x7fffffff;
    uVar8 = uVar8 * 2 >> 0x11 & 1;
    *(int *)(param_1 + 0xcc) = *(int *)(DAT_0202286c + 0x4c) + local_38[uVar8];
    iVar6 = 8;
    if (uVar8 == 0) {
      iVar6 = 0xc;
    }
    *(int *)(param_1 + 0xd0) = *(int *)(iVar4 + 0x4c) + *(int *)((int)local_38 + iVar6);
  }
  else if (bVar1 < 3) {
    if (bVar1 == 1) {
      piVar5 = (int *)(param_1 + 0xcc);
      uVar8 = DAT_02022890 * 0x343fd + 0x269ec3;
      uVar7 = uVar8 * 2 >> 0x11 & 3;
LAB_08030b54:
      DAT_02022890 = uVar8 & 0x7fffffff;
      *piVar5 = *(int *)(iVar4 + 0x4c) + local_38[uVar7];
    }
  }
  else if (bVar1 == 3) {
    *(int *)(param_1 + 0xcc) = *(int *)(DAT_0202286c + 0x4c) + -0x3000;
    *(int *)(param_1 + 0xd0) = *(int *)(iVar4 + 0x4c) + 0x3000;
    piVar5 = (int *)(param_1 + 0xd4);
    uVar8 = DAT_02022890 * 0x343fd + 0x269ec3;
    uVar7 = (uVar8 * 2 >> 0x11 & 1) + 2;
    goto LAB_08030b54;
  }
  uVar8 = 0;
  if (*(char *)(param_1 + 0x12) != '\0') {
    do {
      piVar5 = (int *)(uVar8 * 4 + param_1 + 0xcc);
      local_20 = *piVar5;
      iVar4 = *(int *)(param_1 + 0xb8);
      if ((local_20 < iVar4 + 0x1400) || (iVar4 + 0xdc00 < local_20)) {
        iVar6 = *(int *)(DAT_0202286c + 0x4c);
        if (iVar4 + 0x7800 < iVar6) {
          if (uVar8 != 2) {
            iVar4 = -0x4000;
LAB_08030be2:
            *piVar5 = iVar6 + iVar4;
            goto LAB_08030be6;
          }
          iVar4 = -0x2000;
        }
        else {
          if (uVar8 != 2) {
            iVar4 = 0x4000;
            goto LAB_08030be2;
          }
          iVar4 = 0x2000;
        }
        *(int *)(param_1 + 0xd4) = iVar6 + iVar4;
      }
LAB_08030be6:
      uVar8 = uVar8 + 1 & 0xff;
    } while (uVar8 < *(byte *)(param_1 + 0x12));
  }
  *(undefined *)(param_1 + 0x13) = 0x40;
  *(undefined *)(param_1 + 200) = 0;
  *(undefined *)(param_1 + 0xc1) = 2;
  sub_08001EAC(0xb4);
LAB_08030c06:
  sub_080297C0(param_1);
  cVar3 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar3;
  if (cVar3 == -1) {
    local_24 = *(undefined4 *)(param_1 + 0x50);
    uVar8 = 0;
    if (*(char *)(param_1 + 0x12) != '\0') {
      do {
        local_28 = *(undefined4 *)(uVar8 * 4 + param_1 + 0xcc);
        sub_08061D38(param_1,&local_28);
        uVar8 = uVar8 + 1 & 0xff;
      } while (uVar8 < *(byte *)(param_1 + 0x12));
    }
    sub_08001EAC(0x7b);
  }
  if ((*(char *)(param_1 + 0x73) == '\x04') && (*(char *)(*(int *)(param_1 + 0x20) + 0xd) == '\0'))
  {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

