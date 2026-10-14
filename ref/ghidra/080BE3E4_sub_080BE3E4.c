// sub_080BE3E4 at 0x080BE3E4 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_080BE3E4(int param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort *puVar3;
  undefined2 *puVar4;
  int *piVar5;
  ushort uVar6;
  undefined2 *puVar7;
  short sVar8;
  int iVar9;
  undefined *puVar10;
  int iVar11;
  short *psVar12;
  int iVar13;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      *(undefined *)(param_1 + 6) = 0;
      DAT_02023680 = DAT_02023680 & 0xfffffffe;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    if (*(char *)(param_1 + 7) == '\0') {
      DAT_02004f36 = 0x6286;
      _DAT_02004f40 = 0;
      DAT_02004f42 = _DAT_02004f40;
      *(undefined2 *)(param_1 + 0x40) = 0;
      sub_080014E8(&DAT_082f11b8,0x4000);
      sub_0800179C(&DAT_082f11c4,0);
      puVar4 = (undefined2 *)((DAT_02004f36 & 0x1f00) * 8 + 0x6000000);
      puVar7 = &DAT_082caddc;
      iVar11 = 0x280;
      do {
        *puVar4 = *puVar7;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      sub_080BEE0C(param_1,&DAT_082caddc,0x40,0xffffffa0,0xfffffff8,0x28);
      sub_080014E8(&DAT_082f11e0,0x10000);
      sub_0800179C(&DAT_082f11ec,0x200);
      iVar11 = 0;
      psVar12 = &DAT_082cbddc;
      iVar13 = 0;
      do {
        iVar9 = iVar11 * 0x20;
        sub_08003214(&DAT_02002040 + iVar9,&DAT_02002140 + iVar11 * 2,3,
                     *(undefined2 *)((int)&DAT_082cbde0 + iVar13));
        (&DAT_0200204d)[iVar9] = (&DAT_0200204d)[iVar9] | 0x20;
        (&DAT_02002051)[iVar9] = (&DAT_02002051)[iVar9] & 0xf3;
        (&DAT_02002140)[iVar11 * 2] = (*psVar12 + -0xb4) * 0x100;
        (&DAT_02002144)[iVar11 * 2] = (int)psVar12[1] << 8;
        psVar12 = psVar12 + 3;
        iVar13 = iVar13 + 6;
        iVar11 = iVar11 + 1;
      } while (iVar11 < 4);
      *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
      return in_lr;
    }
    if (*(char *)(param_1 + 7) != '\x01') {
      return in_lr;
    }
    DAT_02004f30 = DAT_02004f30 | 0x1200;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    *(undefined *)(param_1 + 7) = 0;
    *(undefined2 *)(param_1 + 8) = 0;
    return in_lr;
  }
  puVar3 = (ushort *)(param_1 + 0x40);
  uVar2 = *puVar3;
  bVar1 = *(byte *)(param_1 + 7);
  if (bVar1 == 1) {
LAB_080be5d0:
    if (*(short *)(param_1 + 8) < 0xb4) {
      piVar5 = &DAT_02002140;
      iVar11 = 3;
      do {
        *piVar5 = *piVar5 + 0x100;
        piVar5 = piVar5 + 2;
        iVar11 = iVar11 + -1;
      } while (-1 < iVar11);
    }
    iVar11 = *(ushort *)(param_1 + 8) - 1;
    *(short *)(param_1 + 8) = (short)iVar11;
    if (0 < iVar11 * 0x10000) goto LAB_080be656;
    *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
    *(undefined2 *)(param_1 + 8) = 0x20;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_080be656;
      sVar8 = *(short *)(param_1 + 8) + 1;
      *(short *)(param_1 + 8) = sVar8;
      DAT_03001ba0 = (undefined)sVar8;
      DAT_03001ba1 = DAT_03001ba0;
      DAT_03001ba2 = DAT_03001ba0;
      if (sVar8 < 0x20) goto LAB_080be656;
      *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
      *(undefined2 *)(param_1 + 8) = 0xf0;
      goto LAB_080be5d0;
    }
    if (bVar1 != 2) goto LAB_080be656;
  }
  piVar5 = &DAT_02002140;
  iVar11 = 3;
  do {
    *piVar5 = *piVar5 + 0x80;
    piVar5 = piVar5 + 2;
    iVar11 = iVar11 + -1;
  } while (-1 < iVar11);
  iVar11 = *(ushort *)(param_1 + 8) - 1;
  *(short *)(param_1 + 8) = (short)iVar11;
  DAT_03001ba0 = (undefined)iVar11;
  DAT_03001ba1 = DAT_03001ba0;
  DAT_03001ba2 = DAT_03001ba0;
  if (iVar11 * 0x10000 < 1) {
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    *(undefined *)(param_1 + 7) = 0;
  }
LAB_080be656:
  uVar6 = *puVar3 + 1;
  *puVar3 = uVar6;
  _DAT_02004f40 = (short)uVar6 >> 1 & 0xfff;
  sub_080BEE0C(param_1,&DAT_082caddc,(int)((uint)uVar6 << 0x10) >> 0x11,
               (int)((uint)uVar2 << 0x10) >> 0x11,0xfffffff8,0x28);
  puVar10 = &DAT_02002040;
  iVar11 = 3;
  do {
    sub_08003378(param_1 + 0x14,puVar10);
    puVar10 = puVar10 + 0x20;
    iVar11 = iVar11 + -1;
  } while (-1 < iVar11);
  return in_lr;
}

