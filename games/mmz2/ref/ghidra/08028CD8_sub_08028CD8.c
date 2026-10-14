// sub_08028CD8 at 0x08028CD8 (thumb)

undefined4 sub_08028CD8(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 in_lr;
  
  uVar3 = *(byte *)(param_1 + 0x184) - 1;
  *(byte *)(param_1 + 0x184) = (byte)uVar3;
  if ((uVar3 == 0) || ((*(byte *)(param_1 + 0x196) & 0x20) != 0)) {
    *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
    *(undefined *)(param_1 + 0x176) = 0;
    *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
    *(undefined *)(param_1 + 0x177) = 0;
    *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
    *(undefined *)(param_1 + 0x178) = 0;
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 0;
    *(byte *)(param_1 + 0x18c) = *(byte *)(param_1 + 0x18c) & 0xfd;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195));
    if ((bVar2 & 0xc) == 0) {
      iVar4 = 0;
    }
    else {
      bVar2 = bVar2 >> 3;
      *(char *)(param_1 + 0x4c) = (char)(bVar2 & 1);
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar2 & 1) << 4);
      if ((bVar2 & 1) == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
      iVar4 = -1;
      if ((bVar2 & 1) != 0) {
        iVar4 = 1;
      }
      iVar4 = iVar4 * 0x180;
    }
    iVar7 = *(int *)(param_1 + 0x5c);
    iVar5 = iVar4 - iVar7;
    if ((0x18 < iVar5 + 0xcU) && (iVar4 = iVar7 + -0xc, 0 < iVar5)) {
      iVar4 = iVar7 + 0xc;
    }
    *(int *)(param_1 + 0x5c) = iVar4;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
    iVar7 = param_1 + 0x54;
    iVar5 = param_1 + 0xb4;
    puVar9 = (undefined4 *)(param_1 + 0xd8);
    sub_0801F5F4(iVar7,iVar5,puVar9,*puVar9,*(undefined4 *)(param_1 + 0xdc),
                 *(byte *)(param_1 + 10) >> 4 & 1,iVar4,1,1,0,1);
    bVar2 = *(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195));
    if ((bVar2 & 3) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = 0x180;
      if ((bVar2 & 1) != 0) {
        iVar4 = -0x180;
      }
    }
    iVar8 = *(int *)(param_1 + 0x60);
    iVar6 = iVar4 - iVar8;
    if ((0x18 < iVar6 + 0xcU) && (iVar4 = iVar8 + -0xc, 0 < iVar6)) {
      iVar4 = iVar8 + 0xc;
    }
    *(int *)(param_1 + 0x60) = iVar4;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4 + 0x30;
    if (iVar4 + 0x30 < 0) {
      sub_0801F5B8(iVar7,iVar5,puVar9,*puVar9,*(undefined4 *)(param_1 + 0xdc),
                   *(byte *)(param_1 + 10) >> 4 & 1,1,1,0,1);
    }
    else {
      sub_08037EC8(param_1,1,1);
      sub_0801F57C(iVar7,iVar5,puVar9,*puVar9,*(undefined4 *)(param_1 + 0xdc),
                   *(byte *)(param_1 + 10) >> 4 & 1,1,1,0,1);
    }
    if ((uVar3 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 0x18c) | 0x80;
    }
    else {
      bVar2 = *(byte *)(param_1 + 0x18c) & 0x7f;
    }
    *(byte *)(param_1 + 0x18c) = bVar2;
  }
  return in_lr;
}

