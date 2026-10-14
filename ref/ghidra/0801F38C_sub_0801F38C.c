// sub_0801F38C at 0x0801F38C (thumb)

undefined4 sub_0801F38C(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  byte bVar10;
  undefined4 *puVar11;
  undefined4 in_lr;
  
  if (((*(char *)(param_1 + 0x115) == '\t') && (*(char *)(param_1 + 0x71) == '\0')) &&
     (cVar3 = sub_08016EC0(param_1), cVar3 != '\0')) {
    if (*(byte *)(param_1 + 0x11e) < 100) {
      iVar6 = sub_080C8AD0((uint)*(byte *)(param_1 + 0x11e) * 0x380,100);
      iVar6 = 0x380 - iVar6;
    }
    else {
      iVar6 = 0;
    }
    *(int *)(param_1 + 0x54) = iVar6;
    iVar6 = (int)*(char *)(param_1 + 0x72);
    bVar1 = 2 < iVar6;
    if (bVar1) {
      iVar6 = iVar6 + -2;
    }
    sub_08018C20(param_1,0xc,!bVar1,iVar6);
    bVar4 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    *(byte *)(param_1 + 0x44) = bVar4;
    if (bVar4 == 0) {
      bVar4 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar4 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar4;
  }
  bVar4 = *(byte *)(param_1 + 10);
  bVar10 = bVar4 >> 4 & 1;
  iVar6 = *(byte *)(param_1 + 0x118) - 1;
  if (iVar6 == 0) {
    bVar2 = *(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130);
    if ((bVar2 & 0xc) == 0) goto LAB_0801f4a0;
    bVar2 = bVar2 >> 3;
    uVar8 = bVar2 & 1;
    *(char *)(param_1 + 0x44) = (char)uVar8;
    if ((bVar2 & 1) == 0) {
      bVar4 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar4 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar4;
    iVar9 = uVar8 * 2 + -1;
  }
  else {
    *(byte *)(param_1 + 0x118) = (byte)iVar6;
    iVar9 = -1;
    if (*(char *)(param_1 + 0x117) != '\0') {
      iVar9 = 1;
    }
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54) * iVar9;
  bVar4 = *(byte *)(param_1 + 10);
LAB_0801f4a0:
  puVar11 = (undefined4 *)(param_1 + 0x108);
  sub_0801A0A4(param_1 + 0x4c,param_1 + 0xc4,*puVar11,bVar4 >> 4 & 1,1,1);
  iVar9 = *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar9;
  cVar3 = sub_08019C74(param_1 + 0x4c,param_1 + 0xc4,*puVar11,*(byte *)(param_1 + 10) >> 4 & 1,1,1);
  bVar4 = sub_0801C1E8(param_1,*puVar11);
  *(byte *)(param_1 + 0x11c) = bVar4;
  if (bVar4 < 100) {
    iVar7 = sub_080C8AD0((uint)bVar4 << 5,100);
    iVar7 = 0x40 - iVar7;
  }
  else {
    iVar7 = 0x20;
  }
  if (*(int *)(param_1 + 0x60) < 1) {
    iVar7 = -iVar7;
  }
  *(int *)(param_1 + 0x60) = iVar7;
  *(int *)(param_1 + 0x58) = iVar9 + iVar7;
  if (cVar3 == '\0') {
    if (iVar7 * *(int *)(param_1 + 0x58) < 0) {
      if (*(char *)(param_1 + 0x115) == '\t') {
        if ((*(char *)(param_1 + 0x73) != '\x02') && (bVar10 == (*(byte *)(param_1 + 10) >> 4 & 1)))
        {
          return in_lr;
        }
        if (*(byte *)(param_1 + 0xbe) < 3) {
          sub_08018BE8(param_1,10);
        }
      }
      else {
        if (iVar6 != 0) {
          return in_lr;
        }
        if (((*(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130) & 0xc) != 0) &&
           (bVar10 == (*(byte *)(param_1 + 10) >> 4 & 1))) {
          return in_lr;
        }
        if (*(byte *)(param_1 + 0xbe) < 3) {
          sub_08018BE8(param_1,0xd);
        }
      }
      *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
      uVar5 = 1;
    }
    else {
      sub_0801F608(param_1);
      *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
      uVar5 = 0x102;
    }
  }
  else {
    sub_0801F608(param_1);
    *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
    uVar5 = 0x102;
  }
  *(undefined2 *)(param_1 + 0xe) = uVar5;
  return in_lr;
}

