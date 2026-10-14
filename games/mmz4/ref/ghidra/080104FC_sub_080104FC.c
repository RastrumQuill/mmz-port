// sub_080104FC at 0x080104FC (thumb)

void sub_080104FC(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  code *UNRECOVERED_JUMPTABLE;
  uint *local_24;
  
  if ((DAT_0202cac0 & 0xf) == 3) {
    iVar15 = 0x9f;
    uVar2 = *(ushort *)(param_1 + 0x34);
    uVar1 = *(ushort *)(param_1 + 0x38);
    puVar4 = (uint *)sub_08000A70(0x280);
    if (puVar4 == (uint *)0x0) {
      FUN_080113b2();
    }
    DAT_03001708 = &DAT_0400001c;
    DAT_0300170c = 0xa6600001;
    iVar11 = (uint)uVar1 * 0x10000;
    iVar13 = (uint)uVar2 << 0x10;
    iVar8 = iVar13 >> 0x12;
    uVar14 = ((*(int *)(param_1 + 0x68) << 3) >> 3) + iVar8 & 0xffff;
    iVar5 = iVar11 + -0x4600000 >> 0xe;
    DAT_03001704 = puVar4;
    iVar12 = FUN_081288bc(iVar5,6);
    iVar9 = (iVar12 + 0x74) * 0x10000 >> 0x10;
    if (0xfe < iVar9 + 0x9f) {
      uVar10 = 0x600000;
      puVar6 = puVar4 + 0x9f;
      do {
        *puVar6 = uVar10 | uVar14;
        uVar10 = uVar10 + 0x10000;
        puVar6 = puVar6 + -1;
        iVar15 = iVar15 + -1;
        if (iVar9 + iVar15 < 0xff) break;
      } while (-1 < iVar15);
    }
    uVar10 = (iVar12 + 0x74) * 0x10000;
    iVar12 = (int)uVar10 >> 0x10;
    if ((0xf7 < iVar12 + iVar15) && (-1 < iVar15)) {
      puVar6 = puVar4 + iVar15;
      do {
        *puVar6 = uVar10 | uVar14;
        puVar6 = puVar6 + -1;
        iVar15 = iVar15 + -1;
        if (iVar12 + iVar15 < 0xf8) break;
      } while (-1 < iVar15);
    }
    iVar12 = FUN_081288bc(iVar5,0xc);
    uVar14 = (*(int *)(param_1 + 0x68) * 7 >> 3) + iVar8 & 0xffff;
    iVar9 = (iVar12 + 0x74) * 0x10000 >> 0x10;
    if ((0xf7 < iVar9 + iVar15) && (-1 < iVar15)) {
      uVar10 = iVar15 * -0x10000 + 0xb80000;
      puVar6 = puVar4 + iVar15;
      do {
        *puVar6 = uVar10 | uVar14;
        uVar10 = uVar10 + 0x10000;
        puVar6 = puVar6 + -1;
        iVar15 = iVar15 + -1;
        if (iVar9 + iVar15 < 0xf8) break;
      } while (-1 < iVar15);
    }
    uVar10 = (iVar12 + 0x74) * 0x10000;
    iVar12 = (int)uVar10 >> 0x10;
    if ((0xdd < iVar12 + iVar15) && (-1 < iVar15)) {
      puVar6 = puVar4 + iVar15;
      do {
        *puVar6 = uVar10 | uVar14;
        puVar6 = puVar6 + -1;
        iVar15 = iVar15 + -1;
        if (iVar12 + iVar15 < 0xde) break;
      } while (-1 < iVar15);
    }
    iVar12 = FUN_081288bc(iVar5,0x12);
    uVar14 = (*(int *)(param_1 + 0x68) * 6 >> 3) + (iVar13 >> 0x13) & 0xffff;
    iVar9 = (iVar12 + 0x74) * 0x10000 >> 0x10;
    if ((0xdd < iVar9 + iVar15) && (-1 < iVar15)) {
      uVar10 = iVar15 * -0x10000 + 0xdd0000;
      puVar6 = puVar4 + iVar15;
      do {
        *puVar6 = uVar10 | uVar14;
        uVar10 = uVar10 + 0x10000;
        puVar6 = puVar6 + -1;
        iVar15 = iVar15 + -1;
        if (iVar9 + iVar15 < 0xde) break;
      } while (-1 < iVar15);
    }
    uVar10 = (iVar12 + 0x74) * 0x10000;
    iVar12 = (int)uVar10 >> 0x10;
    if ((0xbe < iVar12 + iVar15) && (-1 < iVar15)) {
      puVar6 = puVar4 + iVar15;
      do {
        *puVar6 = uVar10 | uVar14;
        puVar6 = puVar6 + -1;
        iVar15 = iVar15 + -1;
        if (iVar12 + iVar15 < 0xbf) break;
      } while (-1 < iVar15);
    }
    iVar12 = FUN_081288bc(iVar5,0x14);
    iVar9 = *(int *)(param_1 + 0x68);
    iVar7 = (iVar12 + 0x74) * 0x10000 >> 0x10;
    if ((0xbe < iVar7 + iVar15) && (-1 < iVar15)) {
      uVar14 = iVar15 * -0x10000 + 0xbf0000;
      puVar6 = puVar4 + iVar15;
      do {
        *puVar6 = uVar14;
        uVar14 = uVar14 + 0x10000;
        puVar6 = puVar6 + -1;
        iVar15 = iVar15 + -1;
        if (iVar7 + iVar15 < 0xbf) break;
      } while (-1 < iVar15);
    }
    uVar14 = (iVar12 + 0x74) * 0x10000;
    iVar12 = (int)uVar14 >> 0x10;
    if ((0xb7 < iVar12 + iVar15) && (-1 < iVar15)) {
      puVar6 = puVar4 + iVar15;
      do {
        *puVar6 = uVar14 | ((iVar9 << 2) >> 3) + (iVar13 >> 0x14) & 0xffffU;
        puVar6 = puVar6 + -1;
        iVar15 = iVar15 + -1;
        if (iVar12 + iVar15 < 0xb8) break;
      } while (-1 < iVar15);
    }
    iVar12 = FUN_081288bc(iVar5,0x15);
    iVar7 = *(int *)(param_1 + 0x68);
    iVar9 = (iVar12 + 0x74) * 0x10000 >> 0x10;
    if ((0xb7 < iVar9 + iVar15) && (-1 < iVar15)) {
      uVar14 = iVar15 * -0x10000 + 0xb80000;
      puVar6 = puVar4 + iVar15;
      do {
        *puVar6 = uVar14;
        uVar14 = uVar14 + 0x10000;
        puVar6 = puVar6 + -1;
        iVar15 = iVar15 + -1;
        if (iVar9 + iVar15 < 0xb8) break;
      } while (-1 < iVar15);
    }
    uVar14 = (iVar12 + 0x74) * 0x10000;
    iVar12 = (int)uVar14 >> 0x10;
    if ((0xaf < iVar12 + iVar15) && (-1 < iVar15)) {
      puVar6 = puVar4 + iVar15;
      do {
        *puVar6 = uVar14 | (iVar7 * 3 >> 3) + (iVar13 >> 0x15) & 0xffffU;
        puVar6 = puVar6 + -1;
        iVar15 = iVar15 + -1;
        if (iVar12 + iVar15 < 0xb0) break;
      } while (-1 < iVar15);
    }
    iVar12 = FUN_081288bc(iVar5,0x16);
    uVar14 = ((*(int *)(param_1 + 0x68) << 1) >> 3) + (iVar13 >> 0x16) & 0xffff;
    iVar9 = (iVar12 + 0x74) * 0x10000 >> 0x10;
    if ((0xaf < iVar9 + iVar15) && (-1 < iVar15)) {
      uVar10 = iVar15 * -0x10000 + 0xb00000;
      puVar6 = puVar4 + iVar15;
      do {
        *puVar6 = uVar10 | uVar14;
        uVar10 = uVar10 + 0x10000;
        puVar6 = puVar6 + -1;
        iVar15 = iVar15 + -1;
        if (iVar9 + iVar15 < 0xb0) break;
      } while (-1 < iVar15);
    }
    uVar10 = (iVar12 + 0x74) * 0x10000;
    iVar12 = (int)uVar10 >> 0x10;
    if ((0xa7 < iVar12 + iVar15) && (-1 < iVar15)) {
      puVar6 = puVar4 + iVar15;
      do {
        *puVar6 = uVar10 | uVar14;
        puVar6 = puVar6 + -1;
        iVar15 = iVar15 + -1;
        if (iVar12 + iVar15 < 0xa8) break;
      } while (-1 < iVar15);
    }
    iVar5 = FUN_081288bc(iVar5,0x17);
    iVar12 = iVar13 >> 0x17;
    uVar14 = (*(int *)(param_1 + 0x68) >> 3) + iVar12 & 0xffff;
    iVar9 = (iVar5 + 0x74) * 0x10000 >> 0x10;
    if ((0xa7 < iVar9 + iVar15) && (-1 < iVar15)) {
      uVar10 = iVar15 * -0x10000 + 0xa80000;
      puVar6 = puVar4 + iVar15;
      do {
        *puVar6 = uVar10 | uVar14;
        uVar10 = uVar10 + 0x10000;
        puVar6 = puVar6 + -1;
        iVar15 = iVar15 + -1;
        if (iVar9 + iVar15 < 0xa8) break;
      } while (-1 < iVar15);
    }
    uVar10 = (iVar5 + 0x74) * 0x10000;
    iVar5 = (int)uVar10 >> 0x10;
    if ((0x9f < iVar5 + iVar15) && (-1 < iVar15)) {
      puVar6 = puVar4 + iVar15;
      do {
        *puVar6 = uVar10 | uVar14;
        puVar6 = puVar6 + -1;
        iVar15 = iVar15 + -1;
        if (iVar5 + iVar15 < 0xa0) break;
      } while (-1 < iVar15);
    }
    iVar5 = iVar11 + -0x1400000 >> 0xd;
    iVar9 = FUN_081288bc(iVar5,0x18);
    iVar7 = *(int *)(param_1 + 0x68);
    iVar16 = 0;
    iVar11 = iVar9 * 0x10000 >> 0x10;
    sVar3 = (short)iVar15;
    if ((iVar11 < 0x1a) && (puVar6 = puVar4, -1 < sVar3)) {
      do {
        *puVar6 = iVar9 * 0x10000 | (iVar7 * 7 >> 4) + iVar8 & 0xffffU;
        iVar16 = iVar16 + 1;
        if (0x19 < iVar11 + iVar16) break;
        puVar6 = puVar6 + 1;
      } while (iVar16 <= sVar3);
    }
    iVar15 = iVar5;
    if (iVar5 < 0) {
      iVar15 = iVar5 + 0x1f;
    }
    uVar14 = (*(int *)(param_1 + 0x68) * 6 >> 4) + (iVar13 >> 0x13) & 0xffff;
    iVar8 = (iVar15 << 0xb) >> 0x10;
    iVar9 = (int)sVar3;
    if ((iVar8 + iVar16 < 0x1a) && (iVar16 <= iVar9)) {
      uVar10 = iVar16 * -0x10000 + 0x1a0000;
      local_24 = puVar4 + iVar16;
      do {
        *local_24 = uVar10 | uVar14;
        local_24 = local_24 + 1;
        uVar10 = uVar10 - 0x10000;
        iVar16 = iVar16 + 1;
        if (0x19 < iVar8 + iVar16) break;
      } while (iVar16 <= iVar9);
    }
    if ((iVar8 + iVar16 < 0x27) && (iVar16 <= iVar9)) {
      puVar6 = puVar4 + iVar16;
      do {
        *puVar6 = iVar15 << 0xb & 0xffff0000U | uVar14;
        puVar6 = puVar6 + 1;
        iVar16 = iVar16 + 1;
        if (0x26 < iVar8 + iVar16) break;
      } while (iVar16 <= iVar9);
    }
    iVar15 = FUN_081288bc(iVar5,0x28);
    uVar14 = (*(int *)(param_1 + 0x68) * 5 >> 4) + (iVar13 >> 0x14) & 0xffff;
    if (((short)iVar15 + iVar16 < 0x27) && (iVar16 <= iVar9)) {
      uVar10 = iVar16 * -0x10000 + 0x270000;
      local_24 = puVar4 + iVar16;
      do {
        *local_24 = uVar10 | uVar14;
        local_24 = local_24 + 1;
        uVar10 = uVar10 - 0x10000;
        iVar16 = iVar16 + 1;
        if (0x26 < (short)iVar15 + iVar16) break;
      } while (iVar16 <= iVar9);
    }
    iVar8 = iVar15 * 0x10000 >> 0x10;
    if ((iVar8 + iVar16 < 0x40) && (iVar16 <= iVar9)) {
      puVar6 = puVar4 + iVar16;
      do {
        *puVar6 = iVar15 * 0x10000 | uVar14;
        puVar6 = puVar6 + 1;
        iVar16 = iVar16 + 1;
        if (0x3f < iVar8 + iVar16) break;
      } while (iVar16 <= iVar9);
    }
    iVar15 = FUN_081288bc(iVar5,0x30);
    uVar14 = ((*(int *)(param_1 + 0x68) << 2) >> 4) + (iVar13 >> 0x15) & 0xffff;
    if (((short)iVar15 + iVar16 < 0x40) && (iVar16 <= iVar9)) {
      uVar10 = iVar16 * -0x10000 + 0x400000;
      local_24 = puVar4 + iVar16;
      do {
        *local_24 = uVar10 | uVar14;
        local_24 = local_24 + 1;
        uVar10 = uVar10 - 0x10000;
        iVar16 = iVar16 + 1;
        if (0x3f < (short)iVar15 + iVar16) break;
      } while (iVar16 <= iVar9);
    }
    iVar8 = iVar15 * 0x10000 >> 0x10;
    if ((iVar8 + iVar16 < 0x4f) && (iVar16 <= iVar9)) {
      puVar6 = puVar4 + iVar16;
      do {
        *puVar6 = iVar15 * 0x10000 | uVar14;
        puVar6 = puVar6 + 1;
        iVar16 = iVar16 + 1;
        if (0x4e < iVar8 + iVar16) break;
      } while (iVar16 <= iVar9);
    }
    iVar15 = FUN_081288bc(iVar5,0x38);
    uVar14 = (*(int *)(param_1 + 0x68) * 3 >> 4) + (iVar13 >> 0x16) & 0xffff;
    if (((short)iVar15 + iVar16 < 0x4f) && (iVar16 <= iVar9)) {
      uVar10 = iVar16 * -0x10000 + 0x4f0000;
      local_24 = puVar4 + iVar16;
      do {
        *local_24 = uVar10 | uVar14;
        local_24 = local_24 + 1;
        uVar10 = uVar10 - 0x10000;
        iVar16 = iVar16 + 1;
        if (0x4e < (short)iVar15 + iVar16) break;
      } while (iVar16 <= iVar9);
    }
    iVar8 = iVar15 * 0x10000 >> 0x10;
    if ((iVar8 + iVar16 < 0x6a) && (iVar16 <= iVar9)) {
      puVar6 = puVar4 + iVar16;
      do {
        *puVar6 = iVar15 * 0x10000 | uVar14;
        puVar6 = puVar6 + 1;
        iVar16 = iVar16 + 1;
        if (0x69 < iVar8 + iVar16) break;
      } while (iVar16 <= iVar9);
    }
    iVar15 = FUN_081288bc(iVar5,0x3c);
    uVar14 = ((*(int *)(param_1 + 0x68) << 1) >> 4) + iVar12 & 0xffff;
    if (((short)iVar15 + iVar16 < 0x6a) && (iVar16 <= iVar9)) {
      uVar10 = iVar16 * -0x10000 + 0x6a0000;
      local_24 = puVar4 + iVar16;
      do {
        *local_24 = uVar10 | uVar14;
        local_24 = local_24 + 1;
        uVar10 = uVar10 - 0x10000;
        iVar16 = iVar16 + 1;
        if (0x69 < (short)iVar15 + iVar16) break;
      } while (iVar16 <= iVar9);
    }
    iVar8 = iVar15 * 0x10000 >> 0x10;
    if ((iVar8 + iVar16 < 0x9f) && (iVar16 <= iVar9)) {
      puVar6 = puVar4 + iVar16;
      do {
        *puVar6 = iVar15 * 0x10000 | uVar14;
        puVar6 = puVar6 + 1;
        iVar16 = iVar16 + 1;
        if (0x9e < iVar8 + iVar16) break;
      } while (iVar16 <= iVar9);
    }
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0x3f;
    }
    uVar14 = (*(int *)(param_1 + 0x68) >> 4) + iVar12 & 0xffff;
    if ((iVar5 >> 6) + iVar16 < 0x9f) {
      if (iVar9 < iVar16) goto code_r0x080113b2;
      uVar10 = iVar16 * -0x10000 + 0x9f0000;
      puVar6 = puVar4 + iVar16;
      do {
        *puVar6 = uVar10 | uVar14;
        puVar6 = puVar6 + 1;
        uVar10 = uVar10 - 0x10000;
        iVar16 = iVar16 + 1;
        if (0x9e < (iVar5 >> 6) + iVar16) break;
      } while (iVar16 <= iVar9);
    }
    if (iVar16 <= iVar9) {
      uVar10 = iVar16 * -0x10000 + 0xa00000;
      puVar4 = puVar4 + iVar16;
      do {
        *puVar4 = uVar10 | uVar14;
        puVar4 = puVar4 + 1;
        uVar10 = uVar10 - 0x10000;
        iVar16 = iVar16 + 1;
      } while (iVar16 <= iVar9);
    }
  }
  else {
    iVar15 = 0x9f;
    uVar2 = *(ushort *)(param_1 + 0x34);
    uVar14 = (uint)*(ushort *)(param_1 + 0x38);
    if (*(short *)(param_1 + 0x38) < 0x1b0) {
      uVar14 = 0x1b0;
    }
    puVar4 = (uint *)sub_08000A70(0x280);
    if (puVar4 != (uint *)0x0) {
      DAT_03001708 = &DAT_0400001c;
      DAT_0300170c = 0xa6600001;
      iVar13 = uVar14 * 0x10000;
      iVar8 = *(int *)(param_1 + 0x68);
      iVar12 = (uint)uVar2 << 0x10;
      iVar5 = (iVar13 + -0x2a00000 >> 0x12) + 0x10;
      iVar9 = iVar5 * 0x10000 >> 0x10;
      DAT_03001704 = puVar4;
      if (0xfe < iVar9 + 0x9f) {
        uVar14 = 0x190000;
        puVar6 = puVar4 + 0x9f;
        do {
          *puVar6 = uVar14;
          uVar14 = uVar14 + 0x10000;
          puVar6 = puVar6 + -1;
          iVar15 = iVar15 + -1;
          if (iVar9 + iVar15 < 0xff) break;
        } while (-1 < iVar15);
      }
      uVar14 = iVar5 * 0x10000;
      iVar5 = (int)uVar14 >> 0x10;
      if ((0xf8 < iVar5 + iVar15) && (-1 < iVar15)) {
        puVar6 = puVar4 + iVar15;
        do {
          *puVar6 = uVar14 | (iVar8 * 6 >> 3) + (iVar12 >> 0x12) & 0xffffU;
          puVar6 = puVar6 + -1;
          iVar15 = iVar15 + -1;
          if (iVar5 + iVar15 < 0xf9) break;
        } while (-1 < iVar15);
      }
      iVar5 = (iVar13 + -0x2800000 >> 0x12) + 0x10;
      uVar14 = (*(int *)(param_1 + 0x68) * 5 >> 3) + (iVar12 >> 0x13) & 0xffff;
      iVar8 = iVar5 * 0x10000 >> 0x10;
      if ((0xf8 < iVar8 + iVar15) && (-1 < iVar15)) {
        uVar10 = iVar15 * -0x10000 + 0xf80000;
        puVar6 = puVar4 + iVar15;
        do {
          *puVar6 = uVar10 | uVar14;
          uVar10 = uVar10 + 0x10000;
          puVar6 = puVar6 + -1;
          iVar15 = iVar15 + -1;
          if (iVar8 + iVar15 < 0xf9) break;
        } while (-1 < iVar15);
      }
      uVar10 = iVar5 * 0x10000;
      iVar5 = (int)uVar10 >> 0x10;
      if ((0xdd < iVar5 + iVar15) && (-1 < iVar15)) {
        puVar6 = puVar4 + iVar15;
        do {
          *puVar6 = uVar10 | uVar14;
          puVar6 = puVar6 + -1;
          iVar15 = iVar15 + -1;
          if (iVar5 + iVar15 < 0xde) break;
        } while (-1 < iVar15);
      }
      iVar5 = (iVar13 + -0x2400000 >> 0x12) + 0x10;
      uVar14 = ((*(int *)(param_1 + 0x68) << 2) >> 3) + (iVar12 >> 0x14) & 0xffff;
      iVar8 = iVar5 * 0x10000 >> 0x10;
      if ((0xdd < iVar8 + iVar15) && (-1 < iVar15)) {
        uVar10 = iVar15 * -0x10000 + 0xdd0000;
        puVar6 = puVar4 + iVar15;
        do {
          *puVar6 = uVar10 | uVar14;
          uVar10 = uVar10 + 0x10000;
          puVar6 = puVar6 + -1;
          iVar15 = iVar15 + -1;
          if (iVar8 + iVar15 < 0xde) break;
        } while (-1 < iVar15);
      }
      uVar10 = iVar5 * 0x10000;
      iVar5 = (int)uVar10 >> 0x10;
      if ((0xc4 < iVar5 + iVar15) && (-1 < iVar15)) {
        puVar6 = puVar4 + iVar15;
        do {
          *puVar6 = uVar10 | uVar14;
          puVar6 = puVar6 + -1;
          iVar15 = iVar15 + -1;
          if (iVar5 + iVar15 < 0xc5) break;
        } while (-1 < iVar15);
      }
      iVar8 = *(int *)(param_1 + 0x68);
      if ((0xbb < iVar5 + iVar15) && (-1 < iVar15)) {
        puVar6 = puVar4 + iVar15;
        do {
          *puVar6 = uVar10 | (iVar8 * 3 >> 3) + (iVar12 >> 0x15) & 0xffffU;
          puVar6 = puVar6 + -1;
          iVar15 = iVar15 + -1;
          if (iVar5 + iVar15 < 0xbc) break;
        } while (-1 < iVar15);
      }
      iVar8 = *(int *)(param_1 + 0x68);
      if ((0xb3 < iVar5 + iVar15) && (-1 < iVar15)) {
        puVar6 = puVar4 + iVar15;
        do {
          *puVar6 = uVar10 | ((iVar8 << 1) >> 3) + (iVar12 >> 0x16) & 0xffffU;
          puVar6 = puVar6 + -1;
          iVar15 = iVar15 + -1;
          if (iVar5 + iVar15 < 0xb4) break;
        } while (-1 < iVar15);
      }
      iVar8 = (iVar13 + -0x2200000 >> 0x12) + 0x10;
      iVar5 = *(int *)(param_1 + 0x68);
      iVar9 = iVar8 * 0x10000 >> 0x10;
      if ((0xb3 < iVar9 + iVar15) && (-1 < iVar15)) {
        uVar14 = iVar15 * -0x10000 + 0xb40000;
        puVar6 = puVar4 + iVar15;
        do {
          *puVar6 = uVar14;
          uVar14 = uVar14 + 0x10000;
          puVar6 = puVar6 + -1;
          iVar15 = iVar15 + -1;
          if (iVar9 + iVar15 < 0xb4) break;
        } while (-1 < iVar15);
      }
      uVar14 = iVar8 * 0x10000;
      iVar8 = (int)uVar14 >> 0x10;
      if ((0xa9 < iVar8 + iVar15) && (-1 < iVar15)) {
        puVar6 = puVar4 + iVar15;
        do {
          *puVar6 = uVar14 | (iVar5 >> 4) + (iVar12 >> 0x17) & 0xffffU;
          puVar6 = puVar6 + -1;
          iVar15 = iVar15 + -1;
          if (iVar8 + iVar15 < 0xaa) break;
        } while (-1 < iVar15);
      }
      iVar5 = *(int *)(param_1 + 0x68);
      if ((0xa0 < iVar8 + iVar15) && (-1 < iVar15)) {
        puVar6 = puVar4 + iVar15;
        do {
          *puVar6 = uVar14 | ((iVar5 << 1) >> 4) + (iVar12 >> 0x17) & 0xffffU;
          puVar6 = puVar6 + -1;
          iVar15 = iVar15 + -1;
          if (iVar8 + iVar15 < 0xa1) break;
        } while (-1 < iVar15);
      }
      iVar5 = *(int *)(param_1 + 0x68);
      if ((0x97 < iVar8 + iVar15) && (-1 < iVar15)) {
        puVar6 = puVar4 + iVar15;
        do {
          *puVar6 = uVar14 | ((iVar5 << 2) >> 4) + (iVar12 >> 0x16) & 0xffffU;
          puVar6 = puVar6 + -1;
          iVar15 = iVar15 + -1;
          if (iVar8 + iVar15 < 0x98) break;
        } while (-1 < iVar15);
      }
      iVar5 = *(int *)(param_1 + 0x68);
      if ((0x8c < iVar8 + iVar15) && (-1 < iVar15)) {
        puVar6 = puVar4 + iVar15;
        do {
          *puVar6 = uVar14 | (iVar5 * 5 >> 4) + (iVar12 >> 0x15) & 0xffffU;
          puVar6 = puVar6 + -1;
          iVar15 = iVar15 + -1;
          if (iVar8 + iVar15 < 0x8d) break;
        } while (-1 < iVar15);
      }
      iVar5 = (iVar13 + -0x2100000 >> 0x12) + 0x10;
      iVar8 = *(int *)(param_1 + 0x68);
      iVar12 = iVar12 >> 0x10;
      iVar9 = FUN_081288bc(iVar12,0x38);
      iVar11 = (int)(short)iVar5;
      if ((0x8c < iVar11 + iVar15) && (-1 < iVar15)) {
        uVar14 = iVar15 * -0x10000 + 0x8d0000;
        puVar6 = puVar4 + iVar15;
        do {
          *puVar6 = uVar14;
          uVar14 = uVar14 + 0x10000;
          puVar6 = puVar6 + -1;
          iVar15 = iVar15 + -1;
          if (iVar11 + iVar15 < 0x8d) break;
        } while (-1 < iVar15);
      }
      uVar14 = iVar5 * 0x10000;
      iVar5 = (int)uVar14 >> 0x10;
      if ((0x76 < iVar5 + iVar15) && (-1 < iVar15)) {
        puVar6 = puVar4 + iVar15;
        do {
          *puVar6 = uVar14 | (iVar8 * 6 >> 4) + iVar9 & 0xffffU;
          puVar6 = puVar6 + -1;
          iVar15 = iVar15 + -1;
          if (iVar5 + iVar15 < 0x77) break;
        } while (-1 < iVar15);
      }
      iVar5 = (iVar13 + -0x2000000 >> 0x12) + 0x10;
      iVar8 = *(int *)(param_1 + 0x68);
      iVar9 = FUN_081288bc(iVar12,0x30);
      iVar11 = (int)(short)iVar5;
      if ((0x76 < iVar11 + iVar15) && (-1 < iVar15)) {
        uVar14 = iVar15 * -0x10000 + 0x760000;
        puVar6 = puVar4 + iVar15;
        do {
          *puVar6 = uVar14;
          uVar14 = uVar14 + 0x10000;
          puVar6 = puVar6 + -1;
          iVar15 = iVar15 + -1;
          if (iVar11 + iVar15 < 0x77) break;
        } while (-1 < iVar15);
      }
      uVar14 = iVar5 * 0x10000;
      iVar5 = (int)uVar14 >> 0x10;
      if ((0x5d < iVar5 + iVar15) && (-1 < iVar15)) {
        puVar6 = puVar4 + iVar15;
        do {
          *puVar6 = uVar14 | (iVar8 * 7 >> 4) + iVar9 & 0xffffU;
          puVar6 = puVar6 + -1;
          iVar15 = iVar15 + -1;
          if (iVar5 + iVar15 < 0x5e) break;
        } while (-1 < iVar15);
      }
      iVar5 = (iVar13 + -0x1f00000 >> 0x12) + 0x10;
      iVar11 = *(int *)(param_1 + 0x68);
      iVar8 = FUN_081288bc(iVar12,0x28);
      iVar9 = (int)(short)iVar5;
      if ((0x5d < iVar9 + iVar15) && (-1 < iVar15)) {
        uVar14 = iVar15 * -0x10000 + 0x5d0000;
        puVar6 = puVar4 + iVar15;
        do {
          *puVar6 = uVar14;
          uVar14 = uVar14 + 0x10000;
          puVar6 = puVar6 + -1;
          iVar15 = iVar15 + -1;
          if (iVar9 + iVar15 < 0x5e) break;
        } while (-1 < iVar15);
      }
      uVar14 = iVar5 * 0x10000;
      iVar5 = (int)uVar14 >> 0x10;
      if ((0x50 < iVar5 + iVar15) && (-1 < iVar15)) {
        puVar6 = puVar4 + iVar15;
        do {
          *puVar6 = uVar14 | ((iVar11 << 3) >> 4) + iVar8 & 0xffffU;
          puVar6 = puVar6 + -1;
          iVar15 = iVar15 + -1;
          if (iVar5 + iVar15 < 0x51) break;
        } while (-1 < iVar15);
      }
      iVar8 = *(int *)(param_1 + 0x68);
      iVar5 = iVar12;
      if (iVar12 < 0) {
        iVar5 = iVar12 + 0x1f;
      }
      uVar14 = ((iVar13 + -0x1e00000 >> 0x12) + 0x10) * 0x10000;
      iVar9 = (int)uVar14 >> 0x10;
      if ((0x50 < iVar9 + iVar15) && (-1 < iVar15)) {
        uVar10 = iVar15 * -0x10000 + 0x5d0000;
        puVar6 = puVar4 + iVar15;
        do {
          *puVar6 = uVar10;
          uVar10 = uVar10 + 0x10000;
          puVar6 = puVar6 + -1;
          iVar15 = iVar15 + -1;
          if (iVar9 + iVar15 < 0x51) break;
        } while (-1 < iVar15);
      }
      if ((0x30 < iVar9 + iVar15) && (-1 < iVar15)) {
        puVar6 = puVar4 + iVar15;
        do {
          *puVar6 = uVar14 | (iVar8 * 9 >> 4) + (iVar5 >> 5) & 0xffffU;
          puVar6 = puVar6 + -1;
          iVar15 = iVar15 + -1;
          if (iVar9 + iVar15 < 0x31) break;
        } while (-1 < iVar15);
      }
      iVar5 = (iVar13 + -0x1d00000 >> 0x12) + 0x10;
      iVar8 = *(int *)(param_1 + 0x68);
      iVar9 = FUN_081288bc(iVar12,0x18);
      iVar11 = (int)(short)iVar5;
      if ((0x30 < iVar11 + iVar15) && (-1 < iVar15)) {
        uVar14 = iVar15 * -0x10000 + 0x310000;
        puVar6 = puVar4 + iVar15;
        do {
          *puVar6 = uVar14;
          uVar14 = uVar14 + 0x10000;
          puVar6 = puVar6 + -1;
          iVar15 = iVar15 + -1;
          if (iVar11 + iVar15 < 0x31) break;
        } while (-1 < iVar15);
      }
      uVar14 = iVar5 * 0x10000;
      iVar5 = (int)uVar14 >> 0x10;
      if ((0x18 < iVar5 + iVar15) && (-1 < iVar15)) {
        puVar6 = puVar4 + iVar15;
        do {
          *puVar6 = uVar14 | (iVar8 * 10 >> 4) + iVar9 & 0xffffU;
          puVar6 = puVar6 + -1;
          iVar15 = iVar15 + -1;
          if (iVar5 + iVar15 < 0x19) break;
        } while (-1 < iVar15);
      }
      iVar5 = *(int *)(param_1 + 0x68);
      if (iVar12 < 0) {
        iVar12 = iVar12 + 0xf;
      }
      uVar14 = ((iVar13 + -0x1c00000 >> 0x12) + 0x10) * 0x10000;
      iVar8 = (int)uVar14 >> 0x10;
      if ((0x18 < iVar8 + iVar15) && (-1 < iVar15)) {
        uVar10 = iVar15 * -0x10000 + 0x190000;
        puVar6 = puVar4 + iVar15;
        do {
          *puVar6 = uVar10;
          uVar10 = uVar10 + 0x10000;
          puVar6 = puVar6 + -1;
          iVar15 = iVar15 + -1;
          if (iVar8 + iVar15 < 0x19) break;
        } while (-1 < iVar15);
      }
      if ((-1 < iVar8 + iVar15) && (-1 < iVar15)) {
        puVar4 = puVar4 + iVar15;
        do {
          *puVar4 = uVar14 | (iVar5 * 0xb >> 4) + (iVar12 >> 4) & 0xffffU;
          puVar4 = puVar4 + -1;
          iVar15 = iVar15 + -1;
          if (iVar8 + iVar15 < 0) break;
        } while (-1 < iVar15);
      }
    }
  }
code_r0x080113b2:
                    /* WARNING: Could not recover jumptable at 0x080113c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

