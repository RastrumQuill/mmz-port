// sub_08020B58 at 0x08020B58 (thumb)

undefined4 sub_08020B58(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  
  uVar6 = *(byte *)(param_1 + 0x118) - 1;
  *(byte *)(param_1 + 0x118) = (byte)uVar6;
  if ((uVar6 == 0) || ((*(byte *)(param_1 + 0x12d) & 0x20) != 0)) {
    *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xc1) = *(undefined *)(param_1 + 0xbe);
    *(undefined *)(param_1 + 0xbe) = 0;
    *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
    *(undefined *)(param_1 + 0xbf) = 0;
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 0;
    *(byte *)(param_1 + 0x128) = *(byte *)(param_1 + 0x128) & 0xfd;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  }
  else {
    bVar1 = *(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130);
    if ((bVar1 & 0xc) == 0) {
      iVar9 = 0;
    }
    else if ((bVar1 & 4) == 0) {
      iVar9 = 0x180;
      *(undefined *)(param_1 + 0x44) = 1;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      iVar9 = -0x180;
      *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 0x12d) & 0x20;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    }
    iVar7 = *(int *)(param_1 + 0x54);
    iVar4 = iVar9 - iVar7;
    if ((0x18 < iVar4 + 0xcU) && (iVar9 = iVar7 + -0xc, 0 < iVar4)) {
      iVar9 = iVar7 + 0xc;
    }
    *(int *)(param_1 + 0x54) = iVar9;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar9;
    iVar9 = param_1 + 0x4c;
    iVar4 = param_1 + 0xc4;
    sub_0801A0A4(iVar9,iVar4,*(undefined4 *)(param_1 + 0x108),*(byte *)(param_1 + 10) >> 4 & 1,1,1);
    bVar1 = *(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130);
    if ((bVar1 & 3) == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = 0x180;
      if ((bVar1 & 1) != 0) {
        iVar7 = -0x180;
      }
    }
    iVar8 = *(int *)(param_1 + 0x58);
    iVar5 = iVar7 - iVar8;
    if ((0x18 < iVar5 + 0xcU) && (iVar7 = iVar8 + -0xc, 0 < iVar5)) {
      iVar7 = iVar8 + 0xc;
    }
    *(int *)(param_1 + 0x58) = iVar7;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar7 + 0x30;
    if (iVar7 + 0x30 < 0) {
      sub_08019C74(iVar9,iVar4,*(undefined4 *)(param_1 + 0x108),*(byte *)(param_1 + 10) >> 4 & 1,1,1
                  );
    }
    else {
      uVar3 = sub_0801901C(param_1,1);
      iVar7 = sub_08019068(param_1,1);
      cVar2 = sub_080066AC(uVar3,iVar7);
      if (cVar2 != '\0') {
        iVar8 = *(int *)(param_1 + 0x50);
        iVar5 = sub_080C8AD0(iVar7,0xa000);
        *(int *)(param_1 + 0x50) = (iVar5 * 0xa000 + -1) - (iVar7 - iVar8);
      }
      sub_080191B4(iVar9,iVar4,*(undefined4 *)(param_1 + 0x108),*(byte *)(param_1 + 10) >> 4 & 1,1,1
                  );
    }
    if ((uVar6 & 1) == 0) {
      *(byte *)(param_1 + 0x128) = *(byte *)(param_1 + 0x128) | 0x80;
    }
    else {
      *(byte *)(param_1 + 0x128) = *(byte *)(param_1 + 0x128) & 0x7f;
    }
  }
  return in_lr;
}

