// sub_08025C00 at 0x08025C00 (thumb)

undefined4 sub_08025C00(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 in_lr;
  byte local_24;
  
  if (((*(char *)(param_1 + 0x17f) == '\t') && (*(char *)(param_1 + 0x71) == '\0')) &&
     (cVar3 = sub_0801E91C(param_1), cVar3 != '\0')) {
    if (*(byte *)(param_1 + 0x182) < 100) {
      iVar6 = sub_080EF150((uint)*(byte *)(param_1 + 0x182) * 0x380,100);
      iVar6 = 0x380 - iVar6;
    }
    else {
      iVar6 = 0;
    }
    *(int *)(param_1 + 0xc4) = iVar6;
    iVar6 = (int)*(char *)(param_1 + 0x72);
    bVar1 = 2 < iVar6;
    if (bVar1) {
      iVar6 = iVar6 + -2;
    }
    sub_0801EA38(param_1,0xc,!bVar1,iVar6);
    *(byte *)(param_1 + 0x4c) = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    uVar7 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar7 << 4);
    if (uVar7 == 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    }
  }
  uVar7 = (uint)*(byte *)(param_1 + 10);
  bVar4 = *(byte *)(param_1 + 10) >> 4 & 1;
  iVar6 = *(byte *)(param_1 + 0x184) - 1;
  if (iVar6 == 0) {
    bVar2 = *(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195));
    if ((bVar2 & 0xc) == 0) {
      iVar8 = 0;
    }
    else {
      bVar2 = bVar2 >> 3;
      sub_08022BD8(param_1,bVar2 & 1);
      iVar8 = -1;
      if ((bVar2 & 1) != 0) {
        iVar8 = 1;
      }
      iVar8 = *(int *)(param_1 + 0xc4) * iVar8;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar8;
      *(int *)(param_1 + 0x5c) = iVar8;
      uVar7 = (uint)*(byte *)(param_1 + 10);
    }
  }
  else {
    local_24 = (byte)iVar6;
    *(byte *)(param_1 + 0x184) = local_24;
    iVar8 = -1;
    if (*(char *)(param_1 + 0x183) != '\0') {
      iVar8 = 1;
    }
    iVar8 = *(int *)(param_1 + 0xc4) * iVar8;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar8;
    *(int *)(param_1 + 0x5c) = iVar8;
    uVar7 = (uint)*(byte *)(param_1 + 10);
  }
  puVar9 = (undefined4 *)(param_1 + 0xd8);
  sub_0801F5F4(param_1 + 0x54,param_1 + 0xb4,puVar9,*puVar9,*(undefined4 *)(param_1 + 0xdc),
               uVar7 >> 4 & 1,iVar8,1,1,0,1);
  iVar8 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar8;
  uVar7 = sub_0801F5B8(param_1 + 0x54,param_1 + 0xb4,puVar9,*puVar9,*(undefined4 *)(param_1 + 0xdc),
                       *(byte *)(param_1 + 10) >> 4 & 1,1,1,0,1);
  sub_080329BC(param_1,iVar8);
  if ((uVar7 & 0x4f) == 0) {
    if (-1 < *(int *)(param_1 + 0x68) * *(int *)(param_1 + 0x60)) {
      sub_08025EEC(param_1);
      *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
      *(undefined2 *)(param_1 + 0xe) = 0x102;
      return in_lr;
    }
    if (*(char *)(param_1 + 0x17f) == '\t') {
      if ((*(char *)(param_1 + 0x73) != '\x02') && (bVar4 == (*(byte *)(param_1 + 10) >> 4 & 1))) {
        return in_lr;
      }
      if (*(byte *)(param_1 + 0x176) < 3) {
        sub_0801E9FC(param_1,10);
      }
    }
    else {
      if (iVar6 != 0) {
        return in_lr;
      }
      if (((*(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195)) & 0xc) != 0) &&
         (bVar4 == (*(byte *)(param_1 + 10) >> 4 & 1))) {
        return in_lr;
      }
      if (*(byte *)(param_1 + 0x176) < 3) {
        sub_0801E9FC(param_1,0xd);
      }
    }
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    uVar5 = 1;
  }
  else {
    sub_08025EEC(param_1);
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    uVar5 = 0x102;
  }
  *(undefined2 *)(param_1 + 0xe) = uVar5;
  return in_lr;
}

