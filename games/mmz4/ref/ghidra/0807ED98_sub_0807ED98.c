// sub_0807ED98 at 0x0807ED98 (thumb)

undefined4 sub_0807ED98(int param_1)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 in_lr;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xc809);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (((DAT_0202e918 & 1) != 0) && ((DAT_0202e922 & 1) == 0)) {
      DAT_0202e918 = DAT_0202e918 & 0xfffe | 0x10;
    }
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(undefined *)(param_1 + 0x13) = 0x10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0xd) == '\0') {
    puVar7 = (uint *)(param_1 + 0x8c);
    *puVar7 = *puVar7 & 0xfffffffe;
    puVar6 = (uint *)(param_1 + 0x90);
    *puVar6 = *puVar6 & 0xfffffffe;
    sub_0801D330(param_1);
    cVar2 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0x12);
    *(char *)(param_1 + 0x12) = cVar2 + -1;
    if (cVar2 != '\x01') {
      *puVar7 = *puVar7 | 1;
      *puVar6 = *puVar6 | 1;
      sub_0801D3FC(param_1);
      *(undefined *)(param_1 + 0x13) = *(undefined *)(param_1 + 0x12);
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0xb4;
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined2 *)(param_1 + 0xd0) = 0x10;
  }
  else {
    if (*(char *)(param_1 + 0xd) != '\x01') {
      return in_lr;
    }
    if (*(byte *)(param_1 + 0x12) < 0x78) {
      *(undefined2 *)(param_1 + 0xd0) = 8;
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
    iVar3 = sub_08128954(*(undefined *)(param_1 + 0x12),*(undefined2 *)(param_1 + 0xd0));
    if (iVar3 == 0) {
      uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      uVar5 = uVar4 & 0x7fffffff;
      DAT_0202dc38 = uVar5;
      iVar3 = sub_08128A9C(uVar4 * 2 >> 0x11,0x30);
      local_34 = *(int *)(param_1 + 0x54) + (0x18 - iVar3) * 0x100;
      uVar4 = uVar5 * 0x343fd + 0x269ec3;
      uVar5 = uVar4 & 0x7fffffff;
      DAT_0202dc38 = uVar5;
      iVar3 = sub_08128A9C(uVar4 * 2 >> 0x11,0x30);
      local_30 = *(int *)(param_1 + 0x58) + iVar3 * 0x100;
      uVar4 = uVar5 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar4 & 0x7fffffff;
      sub_080E16B4(&local_34,(uVar4 * 2 >> 0x11 & 0x3f) + (uint)*(byte *)(param_1 + 0x13) & 0xff,
                   0x1c0);
      sub_08002B10(0x2a);
      *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '@';
    }
    uVar1 = *(ushort *)(param_1 + 0xd0);
    uVar4 = sub_08128954(*(undefined *)(param_1 + 0x12),uVar1);
    if (uVar4 == uVar1 >> 1) {
      uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      uVar5 = uVar4 & 0x7fffffff;
      DAT_0202dc38 = uVar5;
      iVar3 = sub_08128A9C(uVar4 * 2 >> 0x11,0x30);
      local_2c = *(int *)(param_1 + 0x54) + (0x18 - iVar3) * 0x100;
      uVar4 = uVar5 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar4 & 0x7fffffff;
      iVar3 = sub_08128A9C(uVar4 * 2 >> 0x11,0x30);
      local_28 = *(int *)(param_1 + 0x58) + iVar3 * 0x100;
      sub_080D0894(1);
      if (*(byte *)(param_1 + 0x12) < 0x70) {
        sub_08002B10(0x2a);
      }
    }
    uVar1 = *(ushort *)(param_1 + 0xd0);
    uVar4 = sub_08128954(*(undefined *)(param_1 + 0x12),uVar1);
    uVar5 = (uint)(uVar1 >> 2);
    if ((uVar4 == uVar5) || (uVar4 == uVar5 * 3)) {
      uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      uVar5 = uVar4 & 0x7fffffff;
      DAT_0202dc38 = uVar5;
      iVar3 = sub_08128A9C(uVar4 * 2 >> 0x11,0x30);
      local_24 = *(int *)(param_1 + 0x54) + (0x18 - iVar3) * 0x100;
      uVar4 = uVar5 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar4 & 0x7fffffff;
      iVar3 = sub_08128A9C(uVar4 * 2 >> 0x11,0x30);
      local_20 = *(int *)(param_1 + 0x58) + iVar3 * 0x100;
      sub_080D0894(2);
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    DAT_0202e922 = DAT_0202e922 | 2;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}

