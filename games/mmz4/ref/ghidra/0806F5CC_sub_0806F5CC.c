// sub_0806F5CC at 0x0806F5CC (thumb)

undefined4 sub_0806F5CC(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  undefined4 in_lr;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (((DAT_0202e918 & 1) != 0) && ((DAT_0202e922 & 1) == 0)) {
      DAT_0202e918 = DAT_0202e918 & 0xfffe | 0x10;
    }
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(undefined *)(param_1 + 0x13) = 0x10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  cVar3 = *(char *)(param_1 + 0xd);
  if (cVar3 == '\0') {
    puVar9 = (uint *)(param_1 + 0x8c);
    *puVar9 = *puVar9 & 0xfffffffe;
    puVar8 = (uint *)(param_1 + 0x90);
    *puVar8 = *puVar8 & 0xfffffffe;
    sub_0801D330(param_1);
    cVar3 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar3;
    if (cVar3 != -1) goto LAB_0806f958;
    cVar3 = *(char *)(param_1 + 0x12);
    *(char *)(param_1 + 0x12) = cVar3 + -1;
    if (cVar3 != '\x01') {
      *puVar9 = *puVar9 | 1;
      *puVar8 = *puVar8 | 1;
      sub_0801D3FC(param_1);
      *(undefined *)(param_1 + 0x13) = *(undefined *)(param_1 + 0x12);
      goto LAB_0806f958;
    }
    sub_08002B10(0x160);
    sub_08002B10(0x53);
    *(undefined *)(param_1 + 0x12) = 0xb4;
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined *)(param_1 + 0xce) = 0x10;
    cVar3 = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (cVar3 == '\x01') {
    if (*(byte *)(param_1 + 0x12) < 0x78) {
      *(undefined *)(param_1 + 0xce) = 8;
      if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
        *(uint *)(param_1 + 0x8c) = *(uint *)(param_1 + 0x8c) | 1;
        *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) | 1;
        sub_0801D3FC(param_1);
      }
      else {
        *(uint *)(param_1 + 0x8c) = *(uint *)(param_1 + 0x8c) & 0xfffffffe;
        *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) & 0xfffffffe;
        sub_0801D330(param_1);
      }
    }
    else if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
      *(uint *)(param_1 + 0x8c) = *(uint *)(param_1 + 0x8c) | 1;
      *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) | 1;
      sub_0801D3FC(param_1);
    }
    else {
      *(uint *)(param_1 + 0x8c) = *(uint *)(param_1 + 0x8c) & 0xfffffffe;
      *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) & 0xfffffffe;
      sub_0801D330(param_1);
    }
    cVar3 = sub_08128A9C(*(undefined *)(param_1 + 0x12),*(undefined *)(param_1 + 0xce));
    if (cVar3 == '\0') {
      uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      uVar6 = uVar4 & 0x7fffffff;
      DAT_0202dc38 = uVar6;
      iVar5 = sub_08128A9C(uVar4 * 2 >> 0x11,0x30);
      local_40 = *(int *)(param_1 + 0x54) + (0x18 - iVar5) * 0x100;
      uVar4 = uVar6 * 0x343fd + 0x269ec3;
      uVar6 = uVar4 & 0x7fffffff;
      DAT_0202dc38 = uVar6;
      iVar5 = sub_08128A9C(uVar4 * 2 >> 0x11,0x30);
      local_3c = *(int *)(param_1 + 0x58) + (0x18 - iVar5) * 0x100;
      uVar4 = uVar6 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar4 & 0x7fffffff;
      sub_080E17CC(&local_40,(uVar4 * 2 >> 0x11 & 0x3f) + (uint)*(byte *)(param_1 + 0x13) & 0xff,
                   0x1c0,0x81);
      sub_08002B10(0x35);
      *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '@';
    }
    bVar1 = *(byte *)(param_1 + 0xce);
    bVar2 = sub_08128A9C(*(undefined *)(param_1 + 0x12),bVar1);
    if (bVar2 == bVar1 >> 1) {
      uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      uVar6 = uVar4 & 0x7fffffff;
      DAT_0202dc38 = uVar6;
      iVar5 = sub_08128A9C(uVar4 * 2 >> 0x11,0x30);
      local_38 = *(int *)(param_1 + 0x54) + (0x18 - iVar5) * 0x100;
      uVar4 = uVar6 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar4 & 0x7fffffff;
      iVar5 = sub_08128A9C(uVar4 * 2 >> 0x11,0x30);
      local_34 = *(int *)(param_1 + 0x58) + (0x18 - iVar5) * 0x100;
      sub_080E17CC(&local_38,0,0,0x81);
      if (*(byte *)(param_1 + 0x12) < 0x70) {
        sub_08002B10(0x35);
      }
    }
    bVar1 = *(byte *)(param_1 + 0xce);
    bVar2 = sub_08128A9C(*(undefined *)(param_1 + 0x12),bVar1);
    bVar1 = bVar1 >> 2;
    if ((bVar2 == bVar1) || (bVar2 == (byte)(bVar1 * '\x03'))) {
      uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      uVar6 = uVar4 & 0x7fffffff;
      DAT_0202dc38 = uVar6;
      iVar5 = sub_08128A9C(uVar4 * 2 >> 0x11,0x30);
      local_30 = *(int *)(param_1 + 0x54) + (0x18 - iVar5) * 0x100;
      uVar4 = uVar6 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar4 & 0x7fffffff;
      iVar5 = sub_08128A9C(uVar4 * 2 >> 0x11,0x30);
      local_2c = *(int *)(param_1 + 0x58) + (0x18 - iVar5) * 0x100;
      sub_080E17CC(&local_30,0,0,0x81);
    }
    bVar1 = *(byte *)(param_1 + 0x12);
    if ((bVar1 & 3) < 2) {
      iVar5 = *(int *)(param_1 + 0x54);
      iVar7 = 0x200;
    }
    else {
      iVar5 = *(int *)(param_1 + 0x54);
      iVar7 = -0x200;
    }
    *(int *)(param_1 + 0x54) = iVar5 + iVar7;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x100;
    *(byte *)(param_1 + 0x12) = bVar1 - 1;
    if (bVar1 != 0) goto LAB_0806f958;
    *(undefined *)(param_1 + 0x12) = 0x3c;
    cVar3 = *(char *)(param_1 + 0xd) + '\x01';
  }
  else {
    if ((cVar3 != '\x02') ||
       (cVar3 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar3, cVar3 != -1))
    goto LAB_0806f958;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    DAT_0202e922 = DAT_0202e922 | 2;
    cVar3 = '\x03';
  }
  *(char *)(param_1 + 0xd) = cVar3;
LAB_0806f958:
  local_28 = *(undefined4 *)(param_1 + 0x54);
  local_24 = *(int *)(param_1 + 0x58) + 0xc000;
  sub_08018EAC();
  return in_lr;
}

