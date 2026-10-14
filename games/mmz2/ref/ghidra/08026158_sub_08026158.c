// sub_08026158 at 0x08026158 (thumb)

undefined4 sub_08026158(int param_1)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined uVar7;
  uint uVar8;
  ushort *puVar9;
  int iVar10;
  undefined4 uVar11;
  ushort **ppuVar12;
  int iVar13;
  undefined4 in_lr;
  bool bVar14;
  
  bVar2 = sub_08022C40(param_1,*(undefined4 *)(param_1 + 0xd8));
  *(byte *)(param_1 + 0x18a) = bVar2;
  uVar8 = (uint)bVar2;
  if ((*(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195)) & 2) == 0) {
    if (uVar8 < 100) {
      bVar2 = *(byte *)(param_1 + 0x202);
      iVar13 = 0x180;
      if ((bVar2 & 0x10) != 0) {
        iVar13 = 0xc0;
      }
      iVar5 = 0x180;
      if (((bVar2 & 0x10) == 0) || (iVar5 = 0xc0, (bVar2 & 0x10) == 0)) {
        iVar6 = -0xc0;
      }
      else {
        iVar6 = -0x60;
      }
      iVar13 = sub_080EF150(uVar8 * (iVar13 + iVar6),100);
      iVar5 = iVar5 - iVar13;
    }
    else {
      iVar5 = 0xc0;
      if ((*(byte *)(param_1 + 0x202) & 0x10) != 0) {
        iVar5 = 0x60;
      }
    }
  }
  else if (uVar8 < 100) {
    iVar5 = sub_080EF150(uVar8 * 0xc0,100);
    iVar5 = 0x180 - iVar5;
  }
  else {
    iVar5 = 0xc0;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar5;
  iVar5 = param_1 + 0x54;
  iVar13 = param_1 + 0xb4;
  ppuVar12 = (ushort **)(param_1 + 0xd8);
  uVar8 = sub_0801F57C(iVar5,iVar13,ppuVar12,*ppuVar12,*(undefined4 *)(param_1 + 0xdc),
                       *(byte *)(param_1 + 10) >> 4 & 1,1,1,0,1);
  if ((uVar8 & 0xf) == 0) {
    if ((*(char *)(param_1 + 0x17f) == '\b') && (*(char *)(param_1 + 0x71) < '\x03')) {
      if (*(char *)(param_1 + 0x71) != '\x02') {
        return in_lr;
      }
      if ('\x01' < *(char *)(param_1 + 0x72)) {
        return in_lr;
      }
      uVar11 = 0;
      if ((((*(uint *)(param_1 + 0xc) & 0xffff00) != 0x20400) &&
          ((*(char *)(param_1 + 0x94) == '\0' || ((*(uint *)(param_1 + 0x8c) & 1) != 0)))) &&
         ((*(byte *)(param_1 + 0x18c) & 0x43) == 0)) {
        uVar11 = 1;
      }
      cVar4 = sub_08022D58(param_1,*(byte *)(param_1 + 10) >> 4 & 1,0,uVar11);
      if (cVar4 == '\0') {
        *(undefined *)(param_1 + 0x12) = 0;
      }
      else {
        uVar7 = 4;
        if ((*(byte *)(param_1 + 0x202) & 0x10) != 0) {
          uVar7 = 8;
        }
        *(undefined *)(param_1 + 0x12) = uVar7;
      }
      sub_0801E6AC(9);
    }
    else {
      iVar5 = *(byte *)(param_1 + 0x12) - 1;
      iVar13 = *(byte *)(param_1 + 0x13) - 1;
      if (((*(byte *)(param_1 + 0x202) & 0x10) != 0) &&
         ((*(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195)) & 2) != 0)) {
        iVar5 = *(byte *)(param_1 + 0x12) - 2;
        iVar13 = *(byte *)(param_1 + 0x13) - 2;
      }
      if (iVar5 < 1) {
        uVar11 = 0;
        if (((*(uint *)(param_1 + 0xc) & 0xffff00) != 0x20400) &&
           (((*(char *)(param_1 + 0x94) == '\0' || ((*(uint *)(param_1 + 0x8c) & 1) != 0)) &&
            ((*(byte *)(param_1 + 0x18c) & 0x43) == 0)))) {
          uVar11 = 1;
        }
        cVar4 = sub_08022D58(param_1,*(byte *)(param_1 + 10) >> 4 & 1,0,uVar11);
        if (cVar4 != '\0') {
          uVar7 = 4;
          if ((*(byte *)(param_1 + 0x202) & 0x10) != 0) {
            uVar7 = 8;
          }
          *(undefined *)(param_1 + 0x12) = uVar7;
        }
      }
      else {
        *(char *)(param_1 + 0x12) = (char)iVar5;
      }
      if (0 < iVar13) {
        *(char *)(param_1 + 0x13) = (char)iVar13;
        return in_lr;
      }
      sub_0801E6AC(9);
    }
    uVar7 = 4;
    if ((*(byte *)(param_1 + 0x202) & 0x10) != 0) {
      uVar7 = 8;
    }
    *(undefined *)(param_1 + 0x13) = uVar7;
    return in_lr;
  }
  *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(byte *)(param_1 + 0x17a) = *(byte *)(param_1 + 0x176);
  *(byte *)(param_1 + 0x176) = 0;
  *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
  *(undefined *)(param_1 + 0x177) = 0;
  *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
  *(undefined *)(param_1 + 0x178) = 0;
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 0;
  bVar2 = *(byte *)(param_1 + 10) >> 4;
  uVar1 = **ppuVar12;
  if (*(byte *)(param_1 + 0x17a) < 3) {
    sub_0801E9FC(param_1,7);
    puVar9 = *ppuVar12;
  }
  else {
    puVar9 = (ushort *)sub_0801EF38(param_1,7,0);
    if ((byte)(*(char *)(param_1 + 0x2b6) - 1U) < 2) {
      *(bool *)(param_1 + 0x4c) = (bVar2 & 1) == 0;
      bVar14 = (bVar2 & 1) == 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar14 << 4;
      if (bVar14) {
        bVar3 = *(byte *)(param_1 + 10) | 0x10;
      }
      else {
        bVar3 = *(byte *)(param_1 + 10) & 0xef;
      }
      *(byte *)(param_1 + 10) = bVar3;
      iVar6 = 1;
      goto LAB_08026342;
    }
  }
  iVar6 = 0;
LAB_08026342:
  iVar10 = -1;
  if ((bVar2 & 1) != 0) {
    iVar10 = 1;
  }
  *(uint *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) + iVar10 * ((uint)uVar1 - (uint)puVar9[iVar6]);
  sub_0801F5F4(iVar5,iVar13,ppuVar12,*ppuVar12,*(undefined4 *)(param_1 + 0xdc),
               *(byte *)(param_1 + 10) >> 4 & 1,iVar10,1,0,0,1);
  sub_0801F57C(iVar5,iVar13,ppuVar12,*ppuVar12,*(undefined4 *)(param_1 + 0xdc),
               *(byte *)(param_1 + 10) >> 4 & 1,0x800,0,0,1);
  return in_lr;
}

