// sub_0801F8FC at 0x0801F8FC (thumb)

undefined4 sub_0801F8FC(int param_1)

{
  ushort uVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  ushort *puVar6;
  undefined uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  ushort **ppuVar11;
  undefined4 in_lr;
  
  bVar3 = sub_0801C1E8(param_1,*(undefined4 *)(param_1 + 0x108));
  *(byte *)(param_1 + 0x11c) = bVar3;
  uVar8 = (uint)bVar3;
  if ((*(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130) & 2) == 0) {
    if (uVar8 < 100) {
      bVar3 = *(byte *)(param_1 + 0x17a);
      iVar10 = 0x180;
      if ((bVar3 & 2) != 0) {
        iVar10 = 0xc0;
      }
      iVar5 = 0x180;
      if (((bVar3 & 2) == 0) || (iVar5 = 0xc0, (bVar3 & 2) == 0)) {
        iVar2 = -0xc0;
      }
      else {
        iVar2 = -0x60;
      }
      iVar10 = sub_080C8AD0(uVar8 * (iVar10 + iVar2),100);
      iVar5 = iVar5 - iVar10;
    }
    else {
      iVar5 = 0xc0;
      if ((*(byte *)(param_1 + 0x17a) & 2) != 0) {
        iVar5 = 0x60;
      }
    }
  }
  else if (uVar8 < 100) {
    iVar5 = sub_080C8AD0(uVar8 * 0xc0,100);
    iVar5 = 0x180 - iVar5;
  }
  else {
    iVar5 = 0xc0;
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar5;
  iVar5 = param_1 + 0x4c;
  iVar10 = param_1 + 0xc4;
  ppuVar11 = (ushort **)(param_1 + 0x108);
  cVar4 = sub_080191B4(iVar5,iVar10,*ppuVar11,*(byte *)(param_1 + 10) >> 4 & 1,1,1);
  if (cVar4 == '\0') {
    if ((*(char *)(param_1 + 0x115) == '\b') && (*(char *)(param_1 + 0x71) < '\x03')) {
      if (*(char *)(param_1 + 0x71) != '\x02') {
        return in_lr;
      }
      if ('\x01' < *(char *)(param_1 + 0x72)) {
        return in_lr;
      }
      uVar9 = 0;
      if ((((DAT_02022adf & 0x40) == 0) &&
          ((*(char *)(param_1 + 0x94) == '\0' || ((*(byte *)(param_1 + 0x90) & 1) != 0)))) &&
         ((*(byte *)(param_1 + 0x128) & 0x43) == 0)) {
        uVar9 = 1;
      }
      cVar4 = sub_0801BFE8(param_1,*(byte *)(param_1 + 10) >> 4 & 1,0,uVar9);
      if (cVar4 == '\0') {
        *(undefined *)(param_1 + 0x12) = 0;
      }
      else {
        uVar7 = 4;
        if ((*(byte *)(param_1 + 0x17a) & 2) != 0) {
          uVar7 = 8;
        }
        *(undefined *)(param_1 + 0x12) = uVar7;
      }
    }
    else {
      iVar5 = *(byte *)(param_1 + 0x12) - 1;
      iVar10 = *(byte *)(param_1 + 0x13) - 1;
      if (((*(byte *)(param_1 + 0x17a) & 2) != 0) &&
         ((*(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130) & 2) != 0)) {
        iVar5 = *(byte *)(param_1 + 0x12) - 2;
        iVar10 = *(byte *)(param_1 + 0x13) - 2;
      }
      if (iVar5 < 1) {
        uVar9 = 0;
        if (((DAT_02022adf & 0x40) == 0) &&
           (((*(char *)(param_1 + 0x94) == '\0' || ((*(byte *)(param_1 + 0x90) & 1) != 0)) &&
            ((*(byte *)(param_1 + 0x128) & 0x43) == 0)))) {
          uVar9 = 1;
        }
        cVar4 = sub_0801BFE8(param_1,*(byte *)(param_1 + 10) >> 4 & 1,0,uVar9);
        if (cVar4 != '\0') {
          uVar7 = 4;
          if ((*(byte *)(param_1 + 0x17a) & 2) != 0) {
            uVar7 = 8;
          }
          *(undefined *)(param_1 + 0x12) = uVar7;
        }
      }
      else {
        *(char *)(param_1 + 0x12) = (char)iVar5;
      }
      if (0 < iVar10) {
        *(char *)(param_1 + 0x13) = (char)iVar10;
        return in_lr;
      }
    }
    sub_08001EAC(8);
    uVar7 = 4;
    if ((*(byte *)(param_1 + 0x17a) & 2) != 0) {
      uVar7 = 8;
    }
    *(undefined *)(param_1 + 0x13) = uVar7;
  }
  else {
    *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 0;
    *(byte *)(param_1 + 0xc1) = *(byte *)(param_1 + 0xbe);
    *(byte *)(param_1 + 0xbe) = 0;
    *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
    *(undefined *)(param_1 + 0xbf) = 0;
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 0;
    uVar1 = **ppuVar11;
    if (*(byte *)(param_1 + 0xc1) < 3) {
      sub_08018BE8(param_1,7);
      puVar6 = *ppuVar11;
    }
    else {
      puVar6 = (ushort *)sub_08018D7C(param_1,7,0);
    }
    uVar8 = *(byte *)(param_1 + 10) >> 4 & 1;
    *(uint *)(param_1 + 0x4c) =
         *(int *)(param_1 + 0x4c) + (uVar8 * 2 + -1) * ((uint)uVar1 - (uint)*puVar6);
    sub_0801A0A4(iVar5,iVar10,*(undefined4 *)(param_1 + 0x108),uVar8,1,1);
    sub_080191B4(iVar5,iVar10,*(undefined4 *)(param_1 + 0x108),*(byte *)(param_1 + 10) >> 4 & 1,
                 0x800,1);
  }
  return in_lr;
}

