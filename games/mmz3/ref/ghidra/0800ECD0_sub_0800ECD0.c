// sub_0800ECD0 at 0x0800ECD0 (thumb)

undefined4 sub_0800ECD0(int param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  undefined4 *puVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  undefined4 in_lr;
  uint local_40;
  uint local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  uVar13 = *(uint *)(param_1 + 0x5c) << 0x10;
  uVar6 = *(uint *)(param_1 + 0x5c) & 0xffff;
  uVar14 = (uint)*(byte *)(param_1 + 0xe);
  if (uVar14 == 0) {
    uVar7 = *(uint *)(param_1 + 100);
    (&DAT_020023c4)[uVar13 >> 0x14] = (ushort)uVar7 | 0x4044;
    (&DAT_020023cc)[uVar13 >> 0x14] = 0;
    local_40 = uVar14;
    sub_080FE110(&local_40,(uVar7 & 0x1f00) * 8 + 0x6000000,0x1000400);
    DAT_02002400 = 0x3b44;
    DAT_02002402 = 0xc08;
    DAT_0202f4b4 = uVar14;
    *(undefined2 *)(param_1 + 0x10) = 2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar1 = *(char *)(param_1 + 0xe);
  if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
      if (*(char *)(param_1 + 0xf) == '\0') {
        piVar12 = *(int **)(param_2 + 8);
        sub_080093E8(0xf,9,0);
        sub_080093E8(0x10,9,0);
        sub_080093E8(0xf,10,0);
        sub_080093E8(0x10,10,0x36);
        sub_08005204(param_1 + 0x14,param_1 + 0x34,
                     ((ushort)(&DAT_020023c4)[*(uint *)(param_1 + 0x5c) >> 4] & 0x1f00) * 8 +
                     0x6000000,*piVar12 + (int)piVar12,piVar12[2] + (int)piVar12,
                     *(undefined4 *)(param_2 + 0xc + (uint)*(ushort *)(param_1 + 0xc) * 4));
        *(undefined4 *)(param_1 + 0x40) = 0x80000001;
        *(undefined4 *)(param_1 + 0x3c) = 0x80000001;
        *(undefined4 *)(param_1 + 0x68) = 0;
        *(undefined4 *)(param_1 + 0x6c) = 0;
        *(undefined4 *)(param_1 + 0x70) = 0;
        *(undefined4 *)(param_1 + 0x74) = 0;
        DAT_020023c0 = (ushort)(uVar6 << 8) | DAT_020023c0;
        *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      }
      if (*(int *)(param_1 + 0x70) < 0x1e000) {
        iVar8 = *(int *)(param_1 + 0x68) + 4;
        *(int *)(param_1 + 0x68) = iVar8;
        if (0x400 < iVar8) {
          *(undefined4 *)(param_1 + 0x68) = 0x400;
        }
        *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + *(int *)(param_1 + 0x68);
        if (0xff < *(int *)(param_1 + 0x68)) {
          iVar8 = *(int *)(param_1 + 0x6c) + 1;
          *(int *)(param_1 + 0x6c) = iVar8;
          if (0x400 < iVar8) {
            *(undefined4 *)(param_1 + 0x6c) = 0x400;
          }
          *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) - *(int *)(param_1 + 0x6c);
        }
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x70) >> 8;
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x74) >> 8;
      }
      if (3 < DAT_0202f4a4) {
        DAT_020023c0 = DAT_020023c0 & ~(ushort)(uVar6 << 8);
        *(undefined *)(param_1 + 0xf) = 0;
        *(undefined *)(param_1 + 0xe) = 3;
      }
    }
    else if (cVar1 == '\x03') {
      if (*(char *)(param_1 + 0xf) == '\0') {
        sub_080092B4(0xff,0x5a,&DAT_0833b5b4);
        (&DAT_020023c4)[uVar13 >> 0x14] = (&DAT_020023c4)[uVar13 >> 0x14] & 0xfffc | 2;
        *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      }
      if ((DAT_0202f4a4 == 4) && (DAT_0202f4a5 != '\b')) {
        DAT_020023c0 = (ushort)(uVar6 << 8) | DAT_020023c0;
        *(undefined4 *)(param_1 + 0x68) = 0;
        *(undefined4 *)(param_1 + 0x6c) = 0;
        *(undefined4 *)(param_1 + 0x70) = 0;
        *(undefined4 *)(param_1 + 0x74) = 0;
      }
      else if (*(int *)(param_1 + 0x70) < 0x11000) {
        DAT_020023c0 = (ushort)(uVar6 << 8) | DAT_020023c0;
        iVar8 = *(int *)(param_1 + 0x68) + 4;
        *(int *)(param_1 + 0x68) = iVar8;
        if (0x400 < iVar8) {
          *(undefined4 *)(param_1 + 0x68) = 0x400;
        }
        *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + *(int *)(param_1 + 0x68);
        if (0xff < *(int *)(param_1 + 0x68)) {
          iVar8 = *(int *)(param_1 + 0x6c) + 1;
          *(int *)(param_1 + 0x6c) = iVar8;
          if (0x400 < iVar8) {
            *(undefined4 *)(param_1 + 0x6c) = 0x400;
          }
          *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) - *(int *)(param_1 + 0x6c);
        }
      }
      else {
        DAT_020023c0 = DAT_020023c0 & ~(ushort)(uVar6 << 8);
      }
      iVar9 = *(int *)(param_1 + 0x70);
      *(int *)(param_1 + 0x4c) = iVar9 >> 8;
      iVar8 = *(int *)(param_1 + 0x74);
      *(int *)(param_1 + 0x50) = iVar8 >> 8;
      iVar11 = *(int *)(param_1 + 0x34);
      if (iVar11 < 0x12c0) {
        uVar6 = 0;
        while( true ) {
          iVar11 = (int)(short)uVar6;
          local_38 = (&DAT_0833b4f4)[iVar11 * 4] - iVar9;
          local_34 = (&DAT_0833b4f8)[iVar11 * 4] - iVar8;
          sub_0800A788(iVar11 - 0x8000U & 0xffff,0x2001,&local_38,
                       &UNK_0833b4c4 + (&DAT_0833b4fc)[iVar11 * 4] * 8);
          if ((&DAT_0833b500)[iVar11 * 4] == 0) break;
          uVar6 = iVar11 + 1U & 0xffff;
          iVar9 = *(int *)(param_1 + 0x70);
          iVar8 = *(int *)(param_1 + 0x74);
        }
      }
      else if (iVar11 < 0x1590) {
        uVar6 = 0;
        while( true ) {
          iVar11 = (int)(short)uVar6;
          local_30 = (&DAT_0833b524)[iVar11 * 4] - iVar9;
          local_2c = (&DAT_0833b528)[iVar11 * 4] - iVar8;
          sub_0800A788(iVar11 - 0x8000U & 0xffff,0x2001,&local_30,
                       &UNK_0833b4c4 + (&DAT_0833b52c)[iVar11 * 4] * 8);
          if ((&DAT_0833b530)[iVar11 * 4] == 0) break;
          uVar6 = iVar11 + 1U & 0xffff;
          iVar9 = *(int *)(param_1 + 0x70);
          iVar8 = *(int *)(param_1 + 0x74);
        }
      }
      else if (iVar11 < 0x1860) {
        uVar6 = 0;
        while( true ) {
          iVar11 = (int)(short)uVar6;
          local_28 = (&DAT_0833b564)[iVar11 * 4] - iVar9;
          local_24 = (&DAT_0833b568)[iVar11 * 4] - iVar8;
          sub_0800A788(iVar11 - 0x8000U & 0xffff,0x2001,&local_28,
                       &UNK_0833b4c4 + (&DAT_0833b56c)[iVar11 * 4] * 8);
          if ((&DAT_0833b570)[iVar11 * 4] == 0) break;
          uVar6 = iVar11 + 1U & 0xffff;
          iVar9 = *(int *)(param_1 + 0x70);
          iVar8 = *(int *)(param_1 + 0x74);
        }
      }
    }
    goto LAB_0800f42e;
  }
  bVar2 = *(byte *)(param_1 + 0xf);
  if (bVar2 == 1) {
    sVar5 = *(short *)(param_1 + 0x10);
    if (sVar5 != 0) goto LAB_0800f02e;
    if ((*(ushort *)(&DAT_020023cc + (uVar13 >> 0x14)) & 0xe0) == 0) {
      uVar7 = ((ushort)(&DAT_020023c4)[uVar13 >> 0x14] & 0x1f00) * 8;
      uVar14 = uVar7 | 0x6000000;
      if ((*(ushort *)(&DAT_020023cc + (uVar13 >> 0x14)) & 0x100) == 0) {
        uVar14 = uVar7 + 0x6000800;
      }
      sub_080FE110(&DAT_085375b8,uVar14,0x200);
      *(undefined2 *)(param_1 + 0x10) = 2;
LAB_0800ef8e:
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else if (bVar2 < 2) {
    if (bVar2 == 0) {
      sVar5 = *(short *)(param_1 + 0x10);
      if (sVar5 != 0) goto LAB_0800f02e;
      uVar14 = uVar13 >> 0x14;
      if ((((*(ushort *)(&DAT_020023cc + uVar14) & 0x1e0) == 0) &&
          (uVar7 = DAT_0202f4b4 * 0x343fd + 0x269ec3, DAT_0202f4b4 = uVar7 & 0x7fffffff,
          (uVar7 * 2 >> 0x11 & 1) == 0)) && (DAT_0202f4a4 < 2)) {
        uVar7 = ((ushort)(&DAT_020023c4)[uVar14] & 0x1f00) * 8;
        uVar10 = uVar7 | 0x6000000;
        if ((*(ushort *)(&DAT_020023cc + uVar14) & 0x100) == 0) {
          uVar10 = uVar7 + 0x6000800;
        }
        sub_080FE110(&DAT_085370b0,uVar10,0x200);
        *(undefined2 *)(param_1 + 0x10) = 2;
        goto LAB_0800ef8e;
      }
      uVar3 = *(ushort *)(&DAT_020023cc + uVar14);
      if ((uVar3 & 0xe0) == 0) {
        uVar7 = ((ushort)(&DAT_020023c4)[uVar14] & 0x1f00) * 8;
        uVar14 = uVar7 | 0x6000000;
        if ((uVar3 & 0x100) == 0) {
          uVar14 = uVar7 + 0x6000800;
        }
        local_3c = uVar3 & 0xe0;
        sub_080FE110(&local_3c,uVar14,0x1000200);
      }
    }
  }
  else if (bVar2 == 2) {
    sVar5 = *(short *)(param_1 + 0x10);
    if (sVar5 == 0) {
      uVar14 = uVar13 >> 0x14;
      if (((*(ushort *)(&DAT_020023cc + uVar14) & 0x1e0) == 0) &&
         ((uVar7 = DAT_0202f4b4 * 0x343fd + 0x269ec3, DAT_0202f4b4 = uVar7 & 0x7fffffff,
          (uVar7 * 2 >> 0x11 & 3) == 0 || (1 < DAT_0202f4a4)))) {
        uVar7 = ((ushort)(&DAT_020023c4)[uVar14] & 0x1f00) * 8;
        uVar10 = uVar7 | 0x6000000;
        if ((*(ushort *)(&DAT_020023cc + uVar14) & 0x100) == 0) {
          uVar10 = uVar7 + 0x6000800;
        }
        sub_080FE110(&DAT_085384d0,uVar10,0x200);
        *(undefined2 *)(param_1 + 0x10) = 2;
        goto LAB_0800ef8e;
      }
      uVar3 = *(ushort *)(&DAT_020023cc + uVar14);
      if ((uVar3 & 0xe0) == 0) {
        piVar12 = &DAT_085223f8;
        if ((uVar3 & 0x100) == 0) {
          piVar12 = &DAT_085223f4;
        }
        puVar4 = &DAT_08522400;
        if ((uVar3 & 0x100) == 0) {
          puVar4 = &DAT_085223fc;
        }
        uVar14 = ((ushort)(&DAT_020023c4)[uVar14] & 0x1f00) * 8;
        uVar7 = uVar14 | 0x6000000;
        if ((uVar3 & 0x100) == 0) {
          uVar7 = uVar14 + 0x6000800;
        }
        sub_080FE110((int)puVar4 + *piVar12,uVar7,0x200);
      }
    }
    else {
LAB_0800f02e:
      *(short *)(param_1 + 0x10) = sVar5 + -1;
    }
  }
  else if (bVar2 == 3) {
    sVar5 = *(short *)(param_1 + 0x10);
    if (sVar5 != 0) goto LAB_0800f02e;
    if ((*(ushort *)(&DAT_020023cc + (uVar13 >> 0x14)) & 0xe0) == 0) {
      uVar7 = ((ushort)(&DAT_020023c4)[uVar13 >> 0x14] & 0x1f00) * 8;
      uVar14 = uVar7 | 0x6000000;
      if ((*(ushort *)(&DAT_020023cc + (uVar13 >> 0x14)) & 0x100) == 0) {
        uVar14 = uVar7 + 0x6000800;
      }
      sub_080FE110(&DAT_085389d8,uVar14,0x200);
      *(undefined2 *)(param_1 + 0x10) = 2;
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  *(short *)(&DAT_020023cc + (uVar13 >> 0x14)) = *(short *)(&DAT_020023cc + (uVar13 >> 0x14)) + 0x13
  ;
  if (2 < DAT_0202f4a4) {
    DAT_020023c0 = DAT_020023c0 & ~(ushort)(uVar6 << 8);
    DAT_02002400 = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0xe) = 2;
  }
LAB_0800f42e:
  sub_0801ACF8(1,&DAT_020302c0);
  return in_lr;
}

