// sub_080BE70C at 0x080BE70C (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_080BE70C(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined2 *puVar3;
  ushort *puVar4;
  short *psVar5;
  undefined2 *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined *puVar9;
  int iVar10;
  int *piVar11;
  byte *pbVar12;
  uint uVar13;
  short *psVar14;
  int iVar15;
  int iVar16;
  undefined4 in_lr;
  byte *local_34;
  
  iVar15 = 0;
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    sVar2 = *(short *)(param_1 + 8) + 4;
    *(short *)(param_1 + 8) = sVar2;
    if (0x3f < sVar2) {
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      *(undefined2 *)(param_1 + 8) = 0x40;
      uVar13 = 0;
      do {
        iVar15 = sub_080BEF9C(&DAT_082f1214,uVar13 & 0xff);
        if (iVar15 != 0) {
          sub_080BEEF4(iVar15,&DAT_030017a0 + uVar13 * 0x10,0);
        }
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < 8);
      DAT_030017a0 = 0;
      DAT_02004f30 = DAT_02004f30 | 0x2400;
    }
    DAT_03001ba0 = (undefined)*(undefined2 *)(param_1 + 8);
    DAT_03001ba1 = DAT_03001ba0;
    DAT_03001ba2 = DAT_03001ba0;
    return in_lr;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      return in_lr;
    }
    if (*(char *)(param_1 + 7) != '\0') {
      if (*(char *)(param_1 + 7) != '\x01') {
        return in_lr;
      }
      DAT_02004f30 = DAT_02004f30 | 0x1200;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      *(undefined *)(param_1 + 7) = 0;
      *(undefined2 *)(param_1 + 8) = 0;
      return in_lr;
    }
    DAT_02004f36 = 0x6287;
    _DAT_02004f40 = 0;
    DAT_02004f42 = 0;
    *(undefined2 *)(param_1 + 0x40) = 0;
    sub_080014E8(&DAT_082f11cc,0x4000);
    sub_0800179C(&DAT_082f11d8,0);
    puVar3 = (undefined2 *)((DAT_02004f36 & 0x1f00) * 8 + 0x6000000);
    puVar6 = &DAT_082cb5dc;
    iVar15 = 0x280;
    do {
      *puVar3 = *puVar6;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
    puVar3 = &DAT_06000800 + (DAT_02004f36 & 0x1f00) * 4;
    iVar15 = 0x200;
    do {
      *puVar3 = 0x5000;
      puVar3 = puVar3 + 1;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
    iVar15 = 0x200;
    do {
      *puVar3 = 0xc;
      puVar3 = puVar3 + 1;
      iVar15 = iVar15 + 1;
    } while (iVar15 < 0x400);
    puVar3 = &DAT_030017a0;
    iVar15 = 0xff;
    do {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
      iVar15 = iVar15 + -1;
    } while (-1 < iVar15);
    DAT_02004f38 = 0x104;
    DAT_02004f44 = 0;
    DAT_02004f46 = 0xff60;
    sub_080014E8(&DAT_082f121c,0x9020);
    sub_0800179C(&DAT_082f1228,0);
    puVar9 = &DAT_06005000 + (DAT_02004f38 & 0xc) * 0x1000;
    iVar15 = 0x1f;
    do {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
      iVar15 = iVar15 + -1;
    } while (-1 < iVar15);
    FUN_0800065c(0xf280,(DAT_02004f38 & 0x1f00) * 8 + 0x6000000,0x800);
    sVar2 = 0;
    puVar4 = (ushort *)((DAT_02004f38 & 0x1f00) * 8 + 0x6000000);
    iVar15 = 0x1d;
    do {
      *puVar4 = sVar2 + 0x281U | 0xf000;
      puVar4 = puVar4 + 1;
      sVar2 = sVar2 + 1;
      iVar15 = iVar15 + -1;
    } while (-1 < iVar15);
    puVar4 = (ushort *)((DAT_02004f38 & 0x1f00) * 8 + 0x6000040);
    iVar15 = 0x16;
    do {
      *puVar4 = sVar2 + 0x281U | 0xf000;
      puVar4 = puVar4 + 1;
      sVar2 = sVar2 + 1;
      iVar15 = iVar15 + -1;
    } while (-1 < iVar15);
    sub_080014E8(&DAT_082f11f4,0x10000);
    sub_0800179C(&DAT_082f1200,0x200);
    puVar3 = &DAT_030019a0;
    iVar15 = 0x7f;
    do {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
      iVar15 = iVar15 + -1;
    } while (-1 < iVar15);
    iVar15 = 0;
    psVar14 = &DAT_082cbdf4;
    iVar16 = 0;
    do {
      iVar10 = iVar15 * 0x20;
      sub_08003214(&DAT_02002040 + iVar10,&DAT_02002140 + iVar15 * 2,3,
                   *(undefined2 *)((int)&DAT_082cbdf8 + iVar16));
      (&DAT_0200204d)[iVar10] = (&DAT_0200204d)[iVar10] | 0x20;
      (&DAT_02002051)[iVar10] = (&DAT_02002051)[iVar10] & 0xf3 | 4;
      (&DAT_02002140)[iVar15 * 2] = (int)*psVar14 << 8;
      (&DAT_02002144)[iVar15 * 2] = (int)psVar14[1] << 8;
      psVar14 = psVar14 + 3;
      iVar16 = iVar16 + 6;
      iVar15 = iVar15 + 1;
    } while (iVar15 < 8);
    *(undefined *)(param_1 + 0x4b) = 0;
    *(undefined *)(param_1 + 0x4a) = 0;
    *(undefined *)(param_1 + 0x49) = 0;
    *(undefined *)(param_1 + 0x48) = 0;
    *(undefined *)(param_1 + 0x47) = 0;
    *(undefined *)(param_1 + 0x46) = 0;
    *(undefined *)(param_1 + 0x45) = 0;
    *(undefined *)(param_1 + 0x44) = 0;
    *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
    return in_lr;
  }
  if (bVar1 != 2) {
    if (bVar1 != 3) {
      return in_lr;
    }
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    *(undefined *)(param_1 + 6) = 0;
    return in_lr;
  }
  bVar1 = *(byte *)(param_1 + 7);
  if (bVar1 == 1) {
LAB_080beae8:
    iVar16 = *(ushort *)(param_1 + 8) - 1;
    *(short *)(param_1 + 8) = (short)iVar16;
    if (0x17 < iVar16 * 0x10000 >> 0x10) {
      uVar13 = 0;
      do {
        iVar16 = sub_080BEF9C(&DAT_082f123c,uVar13 & 0xff);
        if (iVar16 != 0) {
          sub_080BEEF4(iVar16,&DAT_030019a0 + uVar13 * 0x10,
                       (*(char *)(param_1 + 8) + -0x18) * -0x10 + -0x80);
        }
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < 8);
    }
    if (0 < *(short *)(param_1 + 8)) goto LAB_080bebd6;
    *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
    *(undefined2 *)(param_1 + 8) = 0xf0;
LAB_080beb48:
    if ((ushort)(*(short *)(param_1 + 8) - 0x34U) < 0x80) {
      uVar13 = 0;
      do {
        iVar16 = sub_080BEF9C(&DAT_082f1214,uVar13 & 0xff);
        if (iVar16 != 0) {
          sub_080BEEF4(iVar16,&DAT_030017a0 + uVar13 * 0x10,-0x4c - *(char *)(param_1 + 8));
        }
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < 8);
      DAT_030017a0 = 0;
    }
    iVar16 = *(ushort *)(param_1 + 8) - 1;
    *(short *)(param_1 + 8) = (short)iVar16;
    if (0 < iVar16 * 0x10000) goto LAB_080bebd6;
    *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
    *(undefined2 *)(param_1 + 8) = 0x20;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_080bebd6;
      iVar16 = *(ushort *)(param_1 + 8) - 4;
      *(short *)(param_1 + 8) = (short)iVar16;
      DAT_03001ba0 = (undefined)iVar16;
      iVar16 = iVar16 * 0x10000 >> 0x10;
      if (0x30 < iVar16) {
        iVar15 = (*(short *)(param_1 + 8) + -0x20) * 2;
      }
      DAT_03001ba1 = DAT_03001ba0;
      DAT_03001ba2 = DAT_03001ba0;
      if (0x20 < iVar16) goto LAB_080bebd6;
      *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
      *(undefined2 *)(param_1 + 8) = 0x20;
      goto LAB_080beae8;
    }
    if (bVar1 == 2) goto LAB_080beb48;
    if (bVar1 != 3) goto LAB_080bebd6;
  }
  sVar2 = *(short *)(param_1 + 8) + 1;
  *(short *)(param_1 + 8) = sVar2;
  DAT_03001ba0 = (undefined)sVar2;
  DAT_03001ba1 = DAT_03001ba0;
  DAT_03001ba2 = DAT_03001ba0;
  if (0x3f < sVar2) {
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    *(undefined *)(param_1 + 7) = 0;
  }
LAB_080bebd6:
  puVar4 = (ushort *)(param_1 + 0x40);
  if (*(short *)(param_1 + 8) < 0xb4) {
    *puVar4 = *puVar4 + 1;
  }
  _DAT_02004f40 = (ushort)(((uint)*puVar4 << 0x11) >> 0x14);
  iVar16 = 0;
  piVar11 = &DAT_02002140;
  do {
    if (*(char *)(param_1 + 7) == '\x01') {
      if (iVar16 < 4) {
        iVar10 = *piVar11 + 0x20 + (int)(short)(&DAT_080c8e24)[*(short *)(param_1 + 8) * 2];
      }
      else {
        iVar10 = (*piVar11 + -0x10) - (int)(short)(&DAT_080c8e24)[*(short *)(param_1 + 8) * 2];
      }
    }
    else if (iVar16 < 4) {
      iVar10 = *piVar11 + 0x20;
    }
    else {
      iVar10 = *piVar11 + -0x10;
    }
    *piVar11 = iVar10;
    sub_08003378(param_1 + 0x14,&DAT_02002040 + iVar16 * 0x20);
    piVar11 = piVar11 + 2;
    iVar16 = iVar16 + 1;
  } while (iVar16 < 8);
  psVar14 = (short *)FUN_0800061c(0x140);
  if (psVar14 != (short *)0x0) {
    iVar15 = (int)(short)(&DAT_080c8e24)[iVar15] >> 6;
    pbVar7 = (byte *)(param_1 + 0x45);
    pbVar12 = (byte *)(param_1 + 0x44);
    if (iVar15 == 0) {
      if (*pbVar12 < 0x10) {
        *pbVar12 = *pbVar12 + 1;
      }
      if ((4 < *pbVar12) && (*pbVar7 < 0x10)) {
        *pbVar7 = *pbVar7 + 1;
      }
      pbVar8 = (byte *)(param_1 + 0x46);
      if ((4 < *pbVar7) && (*pbVar8 < 0x10)) {
        *pbVar8 = *pbVar8 + 1;
      }
      if ((4 < *pbVar8) && (bVar1 = *(byte *)(param_1 + 0x47), bVar1 < 0x10)) {
        *(byte *)(param_1 + 0x47) = bVar1 + 1;
      }
    }
    local_34 = (byte *)(param_1 + 0x47);
    iVar16 = 0;
    psVar5 = psVar14;
    if (0 < 0x3c - iVar15) {
      do {
        *psVar5 = 0x10 - (short)iVar16;
        iVar16 = iVar16 + 1;
        psVar5 = psVar5 + 1;
      } while (iVar16 < 0x3c - iVar15);
    }
    if ((iVar15 != 0) && (iVar16 < 0x3c)) {
      psVar5 = psVar14 + iVar16;
      do {
        *psVar5 = -(short)iVar16;
        psVar5 = psVar5 + 1;
        iVar16 = iVar16 + 1;
      } while (iVar16 < 0x3c);
    }
    psVar14[iVar16] = (ushort)*(byte *)(param_1 + 0x46) - (short)iVar16;
    psVar14[iVar16 + 1] = (ushort)*pbVar12 - (short)(iVar16 + 1);
    psVar14[iVar16 + 2] = (ushort)*pbVar7 - (short)(iVar16 + 2);
    psVar14[iVar16 + 3] = (ushort)*local_34 - (short)(iVar16 + 3);
    iVar16 = iVar16 + 4;
    if ((iVar15 != 0) && (iVar15 = iVar16 + iVar15, iVar16 < iVar15)) {
      psVar5 = psVar14 + iVar16;
      do {
        *psVar5 = -(short)iVar16;
        psVar5 = psVar5 + 1;
        iVar16 = iVar16 + 1;
      } while (iVar16 < iVar15);
    }
    if (iVar16 < 0xa0) {
      psVar5 = psVar14 + iVar16;
      do {
        *psVar5 = 0x10 - (short)iVar16;
        psVar5 = psVar5 + 1;
        iVar16 = iVar16 + 1;
      } while (iVar16 < 0xa0);
    }
    DAT_03000514 = &DAT_0400001a;
    DAT_03000518 = 0x1010001;
    DAT_03000510 = psVar14;
  }
  return in_lr;
}

