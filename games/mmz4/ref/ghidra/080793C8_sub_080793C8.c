// sub_080793C8 at 0x080793C8 (thumb)

undefined4 sub_080793C8(int param_1)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  uint *puVar8;
  uint *puVar9;
  undefined4 in_lr;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xb108);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (((DAT_0202e918 & 1) != 0) && ((DAT_0202e922 & 1) == 0)) {
      DAT_0202e918 = DAT_0202e918 & 0xfffe | 0x10;
    }
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(undefined *)(param_1 + 0x13) = 0x10;
    *(undefined *)(param_1 + 0xde) = 0x40;
    sub_08002624(0x88);
    sub_08002B10(0x158);
    sub_0801C53C(param_1);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    pcVar7 = (char *)(param_1 + 0xde);
    cVar2 = *pcVar7;
    *pcVar7 = cVar2 + -1;
    if ((char)(cVar2 + -1) != -1) goto LAB_080794ce;
    sub_0801CF00(param_1,0xb109);
    *pcVar7 = '@';
  }
  else {
    if ((*(char *)(param_1 + 0xf) != '\x01') ||
       (cVar2 = *(char *)(param_1 + 0xde) + -1, *(char *)(param_1 + 0xde) = cVar2, cVar2 != -1))
    goto LAB_080794ce;
    sub_0801CF00(param_1,0xb10a);
    bVar3 = 0;
    do {
      sub_080E3CBC(param_1 + 0x54,4,0);
      bVar3 = bVar3 + 1;
    } while (bVar3 < 0x18);
    sub_08002B10(0x183);
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
LAB_080794ce:
  puVar9 = (uint *)(param_1 + 0x90);
  puVar8 = (uint *)(param_1 + 0x8c);
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0xd) == '\0') {
    *puVar8 = *puVar8 & 0xfffffffe;
    *puVar9 = *puVar9 & 0xfffffffe;
    sub_0801D330(param_1);
    cVar2 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0x12);
    *(char *)(param_1 + 0x12) = cVar2 + -1;
    if (cVar2 != '\x01') {
      *puVar8 = *puVar8 | 1;
      *puVar9 = *puVar9 | 1;
      sub_0801D3FC(param_1);
      *(undefined *)(param_1 + 0x13) = *(undefined *)(param_1 + 0x12);
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0xb4;
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined2 *)(param_1 + 0xdc) = 0x10;
    sub_08002B10(0x53);
  }
  else {
    if (*(char *)(param_1 + 0xd) != '\x01') {
      *(undefined2 *)(param_1 + 0xdc) = 8;
      if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
        *puVar8 = *puVar8 | 1;
        *puVar9 = *puVar9 | 1;
        sub_0801D3FC(param_1);
      }
      else {
        *puVar8 = *puVar8 & 0xfffffffe;
        *puVar9 = *puVar9 & 0xfffffffe;
        sub_0801D330(param_1);
      }
      iVar4 = sub_08128954(*(undefined *)(param_1 + 0x12),*(undefined2 *)(param_1 + 0xdc));
      if (iVar4 == 0) {
        uVar5 = DAT_0202dc38 * 0x343fd + 0x269ec3;
        uVar6 = uVar5 & 0x7fffffff;
        DAT_0202dc38 = uVar6;
        iVar4 = sub_08128A9C(uVar5 * 2 >> 0x11,0x60);
        local_38 = *(int *)(param_1 + 0x54) + (0x30 - iVar4) * 0x100;
        uVar5 = uVar6 * 0x343fd + 0x269ec3;
        uVar6 = uVar5 & 0x7fffffff;
        DAT_0202dc38 = uVar6;
        iVar4 = sub_08128A9C(uVar5 * 2 >> 0x11,0x60);
        local_34 = *(int *)(param_1 + 0x58) + (0x30 - iVar4) * 0x100;
        uVar5 = uVar6 * 0x343fd + 0x269ec3;
        DAT_0202dc38 = uVar5 & 0x7fffffff;
        sub_080E16B4(&local_38,(uVar5 * 2 >> 0x11 & 0x3f) + (uint)*(byte *)(param_1 + 0x13) & 0xff,
                     0x1c0);
        sub_08002B10(0x35);
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '@';
      }
      uVar1 = *(ushort *)(param_1 + 0xdc);
      uVar5 = sub_08128954(*(undefined *)(param_1 + 0x12),uVar1);
      if (uVar5 == uVar1 >> 1) {
        uVar5 = DAT_0202dc38 * 0x343fd + 0x269ec3;
        uVar6 = uVar5 & 0x7fffffff;
        DAT_0202dc38 = uVar6;
        iVar4 = sub_08128A9C(uVar5 * 2 >> 0x11,0x60);
        local_30 = *(int *)(param_1 + 0x54) + (0x30 - iVar4) * 0x100;
        uVar5 = uVar6 * 0x343fd + 0x269ec3;
        DAT_0202dc38 = uVar5 & 0x7fffffff;
        iVar4 = sub_08128A9C(uVar5 * 2 >> 0x11,0x60);
        local_2c = *(int *)(param_1 + 0x58) + (0x30 - iVar4) * 0x100;
        sub_080D0894(1);
        if (*(byte *)(param_1 + 0x12) < 0x70) {
          sub_08002B10(0x35);
        }
      }
      uVar1 = *(ushort *)(param_1 + 0xdc);
      uVar5 = sub_08128954(*(undefined *)(param_1 + 0x12),uVar1);
      uVar6 = (uint)(uVar1 >> 2);
      if ((uVar5 == uVar6) || (uVar5 == uVar6 * 3)) {
        uVar5 = DAT_0202dc38 * 0x343fd + 0x269ec3;
        uVar6 = uVar5 & 0x7fffffff;
        DAT_0202dc38 = uVar6;
        iVar4 = sub_08128A9C(uVar5 * 2 >> 0x11,0x60);
        local_28 = *(int *)(param_1 + 0x54) + (0x30 - iVar4) * 0x100;
        uVar5 = uVar6 * 0x343fd + 0x269ec3;
        DAT_0202dc38 = uVar5 & 0x7fffffff;
        iVar4 = sub_08128A9C(uVar5 * 2 >> 0x11,0x60);
        local_24 = *(int *)(param_1 + 0x58) + (0x30 - iVar4) * 0x100;
        sub_080D0894(2);
      }
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
      return in_lr;
    }
    if (*(byte *)(param_1 + 0x12) < 0x78) {
      *(undefined2 *)(param_1 + 0xdc) = 8;
      if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
        *puVar8 = *puVar8 | 1;
        *puVar9 = *puVar9 | 1;
        sub_0801D3FC(param_1);
      }
      else {
        *puVar8 = *puVar8 & 0xfffffffe;
        *puVar9 = *puVar9 & 0xfffffffe;
        sub_0801D330(param_1);
      }
    }
    else if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
      *puVar8 = *puVar8 | 1;
      *puVar9 = *puVar9 | 1;
      sub_0801D3FC(param_1);
    }
    else {
      *puVar8 = *puVar8 & 0xfffffffe;
      *puVar9 = *puVar9 & 0xfffffffe;
      sub_0801D330(param_1);
    }
    iVar4 = sub_08128954(*(undefined *)(param_1 + 0x12),*(undefined2 *)(param_1 + 0xdc));
    if (iVar4 == 0) {
      uVar5 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      uVar6 = uVar5 & 0x7fffffff;
      DAT_0202dc38 = uVar6;
      iVar4 = sub_08128A9C(uVar5 * 2 >> 0x11,0x30);
      local_50 = *(int *)(param_1 + 0x54) + (0x18 - iVar4) * 0x100;
      uVar5 = uVar6 * 0x343fd + 0x269ec3;
      uVar6 = uVar5 & 0x7fffffff;
      DAT_0202dc38 = uVar6;
      iVar4 = sub_08128A9C(uVar5 * 2 >> 0x11,0x30);
      local_4c = *(int *)(param_1 + 0x58) + (0x18 - iVar4) * 0x100;
      uVar5 = uVar6 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar5 & 0x7fffffff;
      sub_080E16B4(&local_50,(uVar5 * 2 >> 0x11 & 0x3f) + (uint)*(byte *)(param_1 + 0x13) & 0xff,
                   0x1c0);
      sub_08002B10(0x35);
      *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '@';
    }
    uVar1 = *(ushort *)(param_1 + 0xdc);
    uVar5 = sub_08128954(*(undefined *)(param_1 + 0x12),uVar1);
    if (uVar5 == uVar1 >> 1) {
      uVar5 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      uVar6 = uVar5 & 0x7fffffff;
      DAT_0202dc38 = uVar6;
      iVar4 = sub_08128A9C(uVar5 * 2 >> 0x11,0x30);
      local_48 = *(int *)(param_1 + 0x54) + (0x18 - iVar4) * 0x100;
      uVar5 = uVar6 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar5 & 0x7fffffff;
      iVar4 = sub_08128A9C(uVar5 * 2 >> 0x11,0x30);
      local_44 = *(int *)(param_1 + 0x58) + (0x18 - iVar4) * 0x100;
      sub_080D0894(1);
      if (*(byte *)(param_1 + 0x12) < 0x70) {
        sub_08002B10(0x35);
      }
    }
    uVar1 = *(ushort *)(param_1 + 0xdc);
    uVar5 = sub_08128954(*(undefined *)(param_1 + 0x12),uVar1);
    uVar6 = (uint)(uVar1 >> 2);
    if ((uVar5 == uVar6) || (uVar5 == uVar6 * 3)) {
      uVar5 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      uVar6 = uVar5 & 0x7fffffff;
      DAT_0202dc38 = uVar6;
      iVar4 = sub_08128A9C(uVar5 * 2 >> 0x11,0x30);
      local_40 = *(int *)(param_1 + 0x54) + (0x18 - iVar4) * 0x100;
      uVar5 = uVar6 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar5 & 0x7fffffff;
      iVar4 = sub_08128A9C(uVar5 * 2 >> 0x11,0x30);
      local_3c = *(int *)(param_1 + 0x58) + (0x18 - iVar4) * 0x100;
      sub_080D0894(2);
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    DAT_0202e922 = DAT_0202e922 | 2;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}

