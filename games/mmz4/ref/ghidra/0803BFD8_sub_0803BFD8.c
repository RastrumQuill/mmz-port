// sub_0803BFD8 at 0x0803BFD8 (thumb)

undefined4 sub_0803BFD8(int param_1)

{
  byte bVar1;
  short sVar2;
  char cVar3;
  char cVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 uVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 in_lr;
  
  iVar11 = *(int *)(param_1 + 0xb4);
  iVar9 = *(int *)(param_1 + 0x2c);
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(undefined *)(iVar11 + 0x165) = 2;
    uVar7 = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(iVar11 + 0x15c) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(iVar11 + 0x160) = uVar7;
    pbVar5 = (byte *)(iVar11 + 0x164);
    if (0x40 < *pbVar5) {
      *pbVar5 = 0x40;
    }
    puVar8 = (undefined *)(param_1 + 0x70);
    sVar2 = CONCAT11(*(undefined *)(param_1 + 0x1e),*puVar8);
    if (sVar2 == 0x7000) {
      if (7 < *pbVar5) {
        sub_0801CF00(param_1,0x7001);
      }
    }
    else if ((sVar2 == 0x7001) && (0xf < *pbVar5)) {
      sub_0801CF00(param_1,0x7002);
    }
    if (*(byte *)(iVar9 + 0xc) < 2) {
      if ((*(byte *)(iVar9 + 10) & 0x10) == 0) {
        *(int *)(param_1 + 0x54) = *(int *)(iVar9 + 0x54) + -0xe00;
        uVar7 = 0xfffffa00;
      }
      else {
        *(int *)(param_1 + 0x54) = *(int *)(iVar9 + 0x54) + 0xe00;
        uVar7 = 0x600;
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar7;
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar9 + 0x58);
      sVar2 = CONCAT11(*(undefined *)(param_1 + 0x1e),*puVar8);
      if (sVar2 == 0x7000) {
        iVar9 = 0xe;
      }
      else {
        iVar9 = 0x12;
        if (sVar2 == 0x7001) {
          iVar9 = 0x10;
        }
      }
      bVar1 = *pbVar5;
      iVar6 = sub_0803A4B4(iVar11);
      uVar10 = (bVar1 + 1 & 0xff) + iVar6 & 0xff;
      cVar3 = sub_08038A84(iVar11);
      if (cVar3 != '\0') {
        uVar10 = (uVar10 << 0x19) >> 0x18;
      }
    }
    else {
      sVar2 = CONCAT11(*(undefined *)(param_1 + 0x1e),*puVar8);
      if (sVar2 == 0x7000) {
        sub_0801CF00(param_1,0x7100);
        iVar9 = 0x14;
      }
      else if (sVar2 == 0x7001) {
        sub_0801CF00(param_1,0x7200);
        iVar9 = 0x16;
      }
      else {
        sub_0801CF00(param_1,0x7300);
        iVar9 = 0x18;
      }
      bVar1 = *pbVar5;
      iVar6 = sub_0803A4B4(iVar11);
      uVar10 = (bVar1 + 3 & 0xff) + iVar6 & 0xff;
      cVar3 = sub_08038A84(iVar11);
      if (cVar3 != '\0') {
        uVar10 = (uVar10 << 0x19) >> 0x18;
      }
      *pbVar5 = 0;
      sub_08002B10(0x71);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    sub_08005794(param_1 + 0x74,&DAT_08850610 + iVar9 * 0x18,uVar10,0xffffffff,0xffffffff,0xffffffff
                );
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    cVar3 = sub_0803C210(param_1);
    if (cVar3 == '\x02') {
      bVar1 = *(byte *)(param_1 + 9);
      *(undefined4 *)(param_1 + 0xc) = 2;
    }
    else {
      cVar4 = sub_0803C42C(param_1);
      if (cVar4 != '\0') {
        sub_080D17D8(param_1 + 0x54,6,*(byte *)(param_1 + 10) >> 4 & 1);
        sub_08002B10(0x2b);
        cVar3 = '\x01';
      }
      if ((cVar3 == '\0') && ((*(uint *)(param_1 + 0x8c) & 4) == 0)) {
        return in_lr;
      }
      bVar1 = *(byte *)(param_1 + 9);
      *(undefined4 *)(param_1 + 0xc) = 2;
    }
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[bVar1] + 8);
  }
  return in_lr;
}

