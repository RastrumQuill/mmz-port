// sub_0800869C at 0x0800869C (thumb)

int sub_0800869C(uint param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  int local_30;
  int *local_28;
  
  local_28 = (int *)0x0;
  puVar11 = (uint *)0x0;
  local_30 = param_2;
  if (param_1 < 0x780000) {
    if (0x4fffff < param_2) {
      local_30 = 0x4fffff;
    }
    uVar2 = (uint)(byte)(&DAT_082915ec)[(int)param_1 >> 0xc];
    uVar7 = (byte)(&DAT_08290dec)[local_30 >> 0xc] + 1;
    uVar3 = param_1 + uVar2 * -0xf000;
    uVar10 = local_30 + uVar7 * -0xa000;
    for (uVar12 = 0; iVar6 = (int)uVar3 >> 0xc, (int)uVar12 < 0x80; uVar12 = uVar12 + 1) {
      uVar9 = uVar10;
      if ((int)uVar10 < 0) {
        uVar8 = uVar7 - 1;
        if ((int)uVar8 < 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = uVar10 + 0xa000;
          if ((byte)(&DAT_082921ec)[uVar8 * 0x80 + uVar2] < 0xf0) {
            uVar7 = (byte)(&DAT_082921ec)[uVar8 * 0x80 + uVar2] & 0xf;
            local_28 = (int *)(&DAT_02005140 + uVar7 * 0x10);
            puVar11 = *(uint **)((DAT_02005208 >> (uVar7 << 1) & 3) * 4 + (&DAT_08293bec)[uVar7]);
            uVar7 = uVar8;
            goto LAB_08008738;
          }
          uVar7 = uVar7 - 2;
          uVar9 = uVar10 + 0x14000;
        }
LAB_0800884e:
        if ((int)uVar12 < 0x80) goto LAB_08008866;
        break;
      }
LAB_08008738:
      iVar13 = (int)uVar9 >> 0xc;
      if (*puVar11 == (DAT_0200520c & 0x7f)) {
        bVar1 = *(byte *)((uint)(&DAT_0200543c)
                                [(iVar13 + (uVar7 - puVar11[0x1c]) * 10) * (uint)DAT_0200543c +
                                 iVar6 + (uVar2 - puVar11[0x1b]) * 0xf + 2] + *local_28);
      }
      else {
        bVar1 = *(byte *)((uint)*(ushort *)
                                 ((iVar13 * 0xf +
                                  (uint)((byte *)local_28[3])
                                        [(uVar7 - puVar11[0x1c]) * (uint)*(byte *)local_28[3] +
                                         (uVar2 - puVar11[0x1b]) + 4] * 0x96 + iVar6) * 2 +
                                 local_28[2]) + *local_28);
      }
      iVar5 = sub_080C8A9C(uVar3 & 0xfff,~uVar9 & 0xfff,
                           *(undefined4 *)(&DAT_08290d2c + (bVar1 & 0xf) * 4));
      if ((iVar5 != 0) && ((bVar1 & 0x80) == 0)) goto LAB_0800884e;
      if ((uVar12 & 1) == 0) {
        uVar10 = iVar13 << 0xc;
      }
      else {
        uVar10 = uVar9 - 1;
      }
    }
    uVar7 = (uint)(byte)(&DAT_08290dec)[local_30 >> 0xc];
    uVar9 = local_30 + uVar7 * -0xa000;
LAB_08008866:
    iVar13 = 0;
    do {
      if ((int)uVar9 < 0xa000) {
LAB_080088d8:
        if (*puVar11 == (DAT_0200520c & 0x7f)) {
          pbVar4 = (byte *)((uint)(&DAT_0200543c)
                                  [(uint)DAT_0200543c *
                                   (((int)uVar9 >> 0xc) + (uVar7 - puVar11[0x1c]) * 10) +
                                   iVar6 + (uVar2 - puVar11[0x1b]) * 0xf + 2] + *local_28);
        }
        else {
          pbVar4 = (byte *)((uint)*(ushort *)
                                   ((((int)uVar9 >> 0xc) * 0xf +
                                    (uint)((byte *)local_28[3])
                                          [(uVar7 - puVar11[0x1c]) * (uint)*(byte *)local_28[3] +
                                           (uVar2 - puVar11[0x1b]) + 4] * 0x96 + iVar6) * 2 +
                                   local_28[2]) + *local_28);
        }
        uVar10 = uVar9;
        if ((((*pbVar4 & 0x80) != 0) ||
            (iVar5 = sub_080C8AA0(uVar3 & 0xfff,~uVar9 & 0xfff,0xfff,
                                  *(undefined4 *)(&DAT_08290d2c + (*pbVar4 & 0xf) * 4)), iVar5 == 0)
            ) || (uVar10 = uVar9 - iVar5, ((uVar9 ^ uVar10) & 0x1000) == 0)) break;
      }
      else {
        uVar7 = uVar7 + 1;
        if (0x7f < (int)uVar7) goto LAB_080089d8;
        uVar9 = uVar9 - 0xa000;
        if ((byte)(&DAT_082921ec)[uVar7 * 0x80 + uVar2] < 0xf0) {
          uVar10 = (byte)(&DAT_082921ec)[uVar7 * 0x80 + uVar2] & 0xf;
          local_28 = (int *)(&DAT_02005140 + uVar10 * 0x10);
          puVar11 = *(uint **)((DAT_02005208 >> (uVar10 << 1) & 3) * 4 + (&DAT_08293bec)[uVar10]);
          goto LAB_080088d8;
        }
        iVar13 = (iVar13 + 10) - ((int)uVar9 >> 0xc);
        uVar10 = 0xa000;
      }
      iVar13 = iVar13 + 1;
      uVar9 = uVar10;
    } while (iVar13 < 0x10);
    if (iVar13 < 0x10) {
      iVar6 = sub_08009894(param_1,local_30,uVar10 + uVar7 * 0xa000);
      return iVar6;
    }
  }
LAB_080089d8:
  return local_30 + -1;
}

