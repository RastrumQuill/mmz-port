// sub_080BDB0C at 0x080BDB0C (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_080BDB0C(int param_1)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  short *psVar6;
  undefined2 *puVar7;
  short *psVar8;
  int iVar9;
  uint uVar10;
  undefined *puVar11;
  int iVar12;
  undefined4 in_lr;
  
  if ((DAT_02004ca8 & 8) != 0) {
    *(undefined *)(param_1 + 6) = 3;
    *(undefined *)(param_1 + 7) = 0;
  }
  bVar1 = *(byte *)(param_1 + 6);
  uVar10 = (uint)bVar1;
  if (uVar10 == 1) {
    _DAT_02004f40 = (uint)CONCAT21(DAT_02004f42,bVar1 & *(byte *)(param_1 + 0x42)) << 8;
    bVar2 = *(byte *)(param_1 + 7);
    if (bVar2 == 1) {
      sVar4 = *(short *)(param_1 + 8) + 1;
      *(short *)(param_1 + 8) = sVar4;
      if (0x9f < sVar4) {
        *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
        *(undefined2 *)(param_1 + 8) = 0x9f;
        *(ushort *)(param_1 + 10) = (ushort)bVar1;
        DAT_02004f30 = DAT_02004f30 & 0xdbff;
      }
    }
    else if (bVar2 < 2) {
      if (bVar2 == 0) {
        DAT_02004f30 = DAT_02004f30 | 0x1200;
        *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
        *(undefined2 *)(param_1 + 8) = 0;
        sub_08001E34(0x75);
      }
    }
    else if ((bVar2 == 2) &&
            (sVar4 = *(short *)(param_1 + 10) + -1, *(short *)(param_1 + 10) = sVar4, sVar4 == 0)) {
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      *(undefined *)(param_1 + 7) = 0;
    }
    uVar3 = *(ushort *)(param_1 + 8);
    iVar5 = 0;
    do {
      psVar6 = &DAT_082c9d88 + ((int)((uint)uVar3 << 0x10) >> 0x13) * 0x20;
      psVar8 = (short *)((DAT_02004f36 & 0x1f00) * 8 + iVar5 * 0x40 + 0x6000500 +
                        (*(byte *)(param_1 + 0x42) & 1) * 0x800);
      iVar12 = iVar5 + 1;
      iVar9 = 0x1d;
      do {
        *psVar8 = *psVar6 + ((short)iVar5 + 8) * 0x1000;
        psVar8 = psVar8 + 1;
        psVar6 = psVar6 + 1;
        iVar9 = iVar9 + -1;
      } while (-1 < iVar9);
      iVar5 = iVar12;
    } while (iVar12 < 8);
    psVar8 = (short *)FUN_0800061c(0x140);
    if (psVar8 == (short *)0x0) {
      return in_lr;
    }
    sVar4 = *(short *)(param_1 + 8);
    iVar5 = sub_080C8AD0((int)sVar4 << 6,0xa0);
    iVar5 = (int)sVar4 + ((int)(short)(&DAT_080c8e24)[iVar5 + 0x40] >> 5);
    if (0xa0 < iVar5) {
      iVar5 = 0xa0;
    }
    iVar12 = 0;
    iVar9 = iVar5 + 0x10;
    psVar6 = psVar8;
    if (0 < iVar5) {
      do {
        *psVar6 = *(short *)(param_1 + 8) - (short)iVar12;
        iVar12 = iVar12 + 1;
        psVar6 = psVar6 + 1;
      } while (iVar12 < iVar5);
    }
    if (0xa0 < iVar9) {
      iVar9 = 0xa0;
    }
    sVar4 = (*(ushort *)(param_1 + 8) & 7) + 0xa0;
    uVar10 = 0;
    if (iVar12 < iVar9) {
      psVar6 = psVar8 + iVar12;
      do {
        *psVar6 = (sVar4 + (short)(uVar10 >> 1) * 8) - (short)iVar12;
        uVar10 = uVar10 + 1;
        psVar6 = psVar6 + 1;
        iVar12 = iVar12 + 1;
      } while (iVar12 < iVar9);
    }
    if ((iVar9 < 0xa0) && (iVar9 = iVar9 + (0xa0 - iVar9 >> 1), iVar12 < iVar9)) {
      psVar6 = psVar8 + iVar12;
      do {
        *psVar6 = (sVar4 + (short)(uVar10 - 1 >> 1) * 8) - (short)iVar12;
        psVar6 = psVar6 + 1;
        iVar12 = iVar12 + 1;
      } while (iVar12 < iVar9);
    }
    if (iVar12 < 0xa0) {
      psVar6 = psVar8 + iVar12;
      do {
        *psVar6 = (sVar4 + (short)(uVar10 >> 1) * 8) - (short)iVar12;
        psVar6 = psVar6 + 1;
        iVar12 = iVar12 + 1;
      } while (iVar12 < 0xa0);
    }
    DAT_030004f8 = &DAT_04000016;
    DAT_030004f4 = psVar8;
    DAT_030004fc = 0xa2600001;
    return in_lr;
  }
  if (uVar10 < 2) {
    if (uVar10 != 0) {
      return in_lr;
    }
    DAT_02004f30 = DAT_02004f30 & 0xc8ff;
    DAT_02004f36 = 0x8206;
    DAT_02004f38 = 0x489;
    DAT_02004f46 = 0xffe0;
    DAT_02004f44 = 0xff10;
    _DAT_02004f40 = uVar10;
    sub_080014E8(&DAT_082f1154,0x8000);
    sub_0800179C(&DAT_082f1160,0);
    FUN_080c88ec(&DAT_082e8914,(DAT_02004f38 & 0x1f00) * 8 + 0x6000000,0x200);
    sub_080014E8(&DAT_082f1190,(DAT_02004f36 & 0xc) << 0xc);
    sub_0800179C(&DAT_082f119c,0);
    sub_080014E8(&DAT_082f11a4,(DAT_02004f36 & 0xc) * 0x1000);
    sub_0800179C(&DAT_082f11b0,0);
    psVar8 = &DAT_082c9d88;
    iVar5 = 0;
    do {
      psVar6 = (short *)((DAT_02004f36 & 0x1f00) * 8 + iVar5 * 0x40 + 0x6000000);
      iVar9 = 0x1f;
      do {
        *psVar6 = *psVar8 + -0x8000;
        psVar6 = psVar6 + 1;
        psVar8 = psVar8 + 1;
        iVar9 = iVar9 + -1;
      } while (-1 < iVar9);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x14);
    iVar5 = 0;
    do {
      psVar6 = &DAT_082c9d88;
      psVar8 = (short *)((DAT_02004f36 & 0x1f00) * 8 + iVar5 * 0x40 + 0x6000500);
      iVar12 = iVar5 + 1;
      iVar9 = 0x1d;
      do {
        *psVar8 = *psVar6 + ((short)iVar5 + 8) * 0x1000;
        psVar8 = psVar8 + 1;
        psVar6 = psVar6 + 1;
        iVar9 = iVar9 + -1;
      } while (-1 < iVar9);
      iVar5 = iVar12;
    } while (iVar12 < 8);
    puVar7 = (undefined2 *)((DAT_02004f36 & 0x1f00) * 8 + iVar12 * 0x40 + 0x6000500);
    iVar5 = 0x1d;
    do {
      *puVar7 = 0x8000;
      puVar7 = puVar7 + 1;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    FUN_080c88ec((DAT_02004f36 & 0x1f00) * 8 + 0x6000000,&DAT_06000800 + (DAT_02004f36 & 0x1f00) * 4
                 ,0x200);
    iVar5 = 0;
    puVar11 = &DAT_030018c0;
    do {
      sub_080BE1B0(&DAT_030018a0,puVar11,(uint)((7 - iVar5) * 0x20000000) >> 0x18);
      puVar11 = puVar11 + 0x20;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 7);
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    *(undefined *)(param_1 + 7) = 0;
    return in_lr;
  }
  if (uVar10 != 2) {
    if (uVar10 != 3) {
      return in_lr;
    }
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    *(undefined *)(param_1 + 7) = 0;
    *(undefined *)(param_1 + 6) = 0;
    sub_08001E44(0x75);
    DAT_03001ba2 = 0x40;
    DAT_03001ba1 = 0x40;
    DAT_03001ba0 = 0x40;
    goto LAB_080be18a;
  }
  _DAT_02004f40 = CONCAT22(DAT_02004f42,(short)((*(byte *)(param_1 + 0x42) & 1) << 8));
  bVar2 = *(byte *)(param_1 + 7);
  if (bVar2 == 1) {
LAB_080bdf8a:
    psVar8 = &DAT_082ca588;
    iVar5 = 0;
    do {
      psVar6 = (short *)((DAT_02004f36 & 0x1f00) * 8 + iVar5 * 0x40 + 0x6000000 +
                        (*(byte *)(param_1 + 0x42) & 1) * 0x800);
      iVar5 = iVar5 + 1;
      iVar9 = 0x1f;
      do {
        *psVar6 = *psVar8 + 0x7140;
        psVar6 = psVar6 + 1;
        psVar8 = psVar8 + 1;
        iVar9 = iVar9 + -1;
      } while (-1 < iVar9);
    } while (iVar5 < 0x14);
    iVar5 = *(ushort *)(param_1 + 8) - 1;
    *(short *)(param_1 + 8) = (short)iVar5;
    iVar5 = iVar5 * 0x10000;
    if (iVar5 >> 0x10 != 0) {
      return in_lr;
    }
    DAT_02004f30 = DAT_02004f30 | 0x2400;
    DAT_02004f80 = DAT_02004f80 | 0x2000;
    DAT_02004f8c = 0xff;
    DAT_02004f8e = 0xfb;
    DAT_02004f88 = 0xa0;
    uVar3 = (ushort)((uint)iVar5 >> 0x10);
    DAT_02004f84 = uVar3;
    *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
    *(ushort *)(param_1 + 8) = uVar3;
    *(ushort *)(param_1 + 10) = uVar3;
  }
  else {
    if (bVar2 < 2) {
      if (bVar2 != 0) {
        return in_lr;
      }
      *(undefined *)(param_1 + 7) = 1;
      *(ushort *)(param_1 + 8) = (ushort)bVar1;
      iVar5 = FUN_0800061c(0x140);
      if (iVar5 != 0) {
        sVar4 = -0x6b;
        psVar8 = (short *)(iVar5 + 0x13e);
        do {
          *psVar8 = sVar4;
          sVar4 = sVar4 + 1;
          psVar8 = psVar8 + -1;
        } while (iVar5 <= (int)psVar8);
        DAT_030004f8 = &DAT_04000016;
        DAT_030004fc = 0xa2600001;
        DAT_030004f4 = (short *)iVar5;
      }
      goto LAB_080bdf8a;
    }
    if (bVar2 != 2) {
      if (bVar2 != 3) {
        return in_lr;
      }
      iVar5 = *(ushort *)(param_1 + 8) - 1;
      *(short *)(param_1 + 8) = (short)iVar5;
      if (0 < iVar5 * 0x10000) {
        return in_lr;
      }
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      *(undefined *)(param_1 + 7) = 0;
      return in_lr;
    }
  }
  iVar5 = FUN_0800061c(0x140);
  if (iVar5 == 0) {
    return in_lr;
  }
  if (*(short *)(param_1 + 8) < 0x11) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(short *)(param_1 + 8) + -0x10;
  }
  if (0x20 < iVar9) {
    iVar9 = 0x20;
  }
  iVar12 = 0x3400;
  uVar10 = (uint)(iVar9 << 8) >> 5;
  iVar9 = 0x34;
  psVar8 = (short *)(iVar5 + 0x68);
  do {
    *psVar8 = (short)((uint)iVar12 >> 8) - (short)iVar9;
    iVar12 = iVar12 - uVar10;
    psVar8 = psVar8 + -1;
    iVar9 = iVar9 + -1;
  } while (-1 < iVar9);
  iVar9 = 0x3400;
  iVar12 = 0x34;
  psVar8 = (short *)(iVar5 + 0x68);
  do {
    *psVar8 = (short)((uint)iVar9 >> 8) - (short)iVar12;
    iVar9 = iVar9 + uVar10;
    psVar8 = psVar8 + 1;
    iVar12 = iVar12 + 1;
  } while (iVar12 < 0xa0);
  DAT_030004f8 = &DAT_04000016;
  DAT_030004fc = 0xa2600001;
  DAT_030004f4 = (short *)iVar5;
  if (0x20 < *(short *)(param_1 + 8)) {
    iVar5 = (short)(&DAT_080c8e24)[*(short *)(param_1 + 8) * 2] * 0xf >> 4;
    sVar4 = (short)iVar5;
    *(short *)(param_1 + 10) = sVar4;
    DAT_02004f44 = -sVar4;
    DAT_02004f84 = (ushort)(iVar5 << 8) | 0xf0;
  }
  sVar4 = *(short *)(param_1 + 8) + 1;
  *(short *)(param_1 + 8) = sVar4;
  if (sVar4 < 0x40) {
    return in_lr;
  }
  *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  *(undefined *)(param_1 + 7) = 0;
  *(undefined *)(param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 8) = 4;
  DAT_02004f44 = 0;
LAB_080be18a:
  DAT_02004f80 = DAT_02004f80 & 0xdfff;
  return in_lr;
}

