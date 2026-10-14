// sub_08028330 at 0x08028330 (thumb)

undefined4 sub_08028330(int param_1,byte param_2,uint param_3)

{
  byte bVar1;
  undefined uVar2;
  undefined uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 in_lr;
  
  uVar7 = (uint)param_2;
  bVar1 = *(byte *)(param_1 + 0x10);
  uVar4 = (uint)bVar1;
  iVar14 = param_1;
  if ((*(int *)(param_1 + 0xb8) << 8 | (uint)*(byte *)(param_1 + 0x70)) ==
      (uint)*(ushort *)(&DAT_082ab348 + uVar4 * 4)) {
    iVar15 = (param_3 & 0xff) * 4;
    iVar9 = *(int *)(iVar15 + *(int *)(param_1 + 0x5c));
    iVar11 = **(int **)(&DAT_082ac4b8 + uVar4 * 4);
    *(int *)(param_1 + 0x5c) = iVar11;
    iVar11 = *(int *)(uVar7 * 4 + iVar11);
    if (iVar11 == 0) {
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    }
    else if (iVar9 == 0) {
      uVar5 = sub_08028574(param_1,iVar11);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_080055FC(param_1 + 0x74,uVar5,param_1 + 0x4c,0);
      *(int *)(param_1 + 0xb4) = param_1;
      *(undefined4 *)(param_1 + 0xb0) = 0x80285ad;
    }
    else {
      uVar5 = sub_08028574(param_1,iVar11);
      sub_0800561C(param_1 + 0x74,uVar5);
    }
    uVar2 = *(undefined *)(param_1 + 0x11);
    uVar3 = *(undefined *)(param_1 + 0x54);
    for (uVar6 = (uint)(byte)(&DAT_082ac548)[uVar4]; uVar6 != 0; uVar6 = uVar6 - 1) {
      piVar12 = *(int **)(uVar6 * 4 + *(int *)(&DAT_082ac4b8 + uVar4 * 4));
      iVar9 = *piVar12;
      iVar10 = 0;
      iVar13 = 0;
      iVar11 = *(int *)(iVar14 + 0x24);
      piVar8 = piVar12;
      if (uVar7 != 0) {
        do {
          iVar10 = iVar9;
          piVar8 = piVar8 + 1;
          iVar13 = iVar13 + 1;
          iVar9 = *piVar8;
          if ((int)uVar7 <= iVar13) break;
        } while ((iVar9 != 0) || (iVar10 == 0));
      }
      if ((iVar9 != 0) || (iVar10 == 0)) {
        if (iVar11 == 0) {
          iVar11 = sub_080054C0(iVar14);
          if (iVar11 == 0) {
            return in_lr;
          }
          *(undefined *)(iVar11 + 0x1e) = 1;
          *(undefined *)(iVar11 + 9) = 2;
          *(undefined4 *)(iVar11 + 0x14) = 0x80276c9;
          *(int *)(iVar11 + 0x20) = iVar14;
          *(undefined4 *)(iVar11 + 0x24) = 0;
          *(int *)(iVar14 + 0x24) = iVar11;
          *(undefined4 *)(param_1 + 0xc) = 1;
          *(undefined4 *)(param_1 + 0x14) =
               *(undefined4 *)((&DAT_082aa198)[*(byte *)(param_1 + 9)] + 4);
          *(undefined4 *)(param_1 + 0x68) = 0;
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
          iVar10 = 0;
        }
        else {
          iVar10 = *(int *)(iVar15 + *(int *)(iVar11 + 0x5c));
        }
        *(byte *)(iVar11 + 0x10) = bVar1;
        *(undefined *)(iVar11 + 0x11) = uVar2;
        *(undefined *)(iVar11 + 0x54) = uVar3;
        *(byte *)(iVar11 + 0x13) = param_2;
        *(char *)(iVar11 + 0x12) = (char)uVar6;
        *(int **)(iVar11 + 0x5c) = piVar12;
        iVar14 = iVar11;
        if (iVar9 != 0) {
          if (iVar10 == 0) {
            uVar5 = sub_08028574(iVar11,iVar9);
            *(byte *)(iVar11 + 10) = *(byte *)(iVar11 + 10) | 4;
            sub_080055FC(iVar11 + 0x74,uVar5,iVar11 + 0x4c,0);
            *(int *)(iVar11 + 0xb4) = iVar11;
            *(undefined4 *)(iVar11 + 0xb0) = 0x80285ad;
          }
          else {
            uVar5 = sub_08028574(iVar11,iVar9);
            sub_0800561C(iVar11 + 0x74,uVar5);
          }
        }
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  }
  iVar14 = *(int *)(iVar14 + 0x24);
  while (iVar14 != 0) {
    iVar15 = *(int *)(iVar14 + 0x24);
    sub_08027F0C(iVar14);
    iVar14 = iVar15;
  }
  return in_lr;
}

