// sub_08008360 at 0x08008360 (thumb)

int sub_08008360(uint param_1,int param_2)

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
  int *piVar12;
  uint uVar13;
  int iVar14;
  int local_30;
  
  piVar12 = (int *)0x0;
  puVar11 = (uint *)0x0;
  local_30 = param_2;
  if (param_1 < 0x780000) {
    if (param_2 < 0) {
      local_30 = 0;
    }
    uVar2 = (uint)(byte)(&DAT_082915ec)[(int)param_1 >> 0xc];
    uVar7 = (byte)(&DAT_08290dec)[local_30 >> 0xc] - 1;
    uVar3 = param_1 + uVar2 * -0xf000;
    uVar10 = local_30 + uVar7 * -0xa000;
    for (uVar13 = 0; iVar6 = (int)uVar3 >> 0xc, (int)uVar13 < 0x80; uVar13 = uVar13 + 1) {
      uVar9 = uVar10;
      if (0x9fff < (int)uVar10) {
        uVar8 = uVar7 + 1;
        if ((int)uVar8 < 0x80) {
          uVar9 = uVar10 - 0xa000;
          if ((byte)(&DAT_082921ec)[uVar8 * 0x80 + uVar2] < 0xf0) {
            uVar7 = (byte)(&DAT_082921ec)[uVar8 * 0x80 + uVar2] & 0xf;
            piVar12 = (int *)(&DAT_02005140 + uVar7 * 0x10);
            puVar11 = *(uint **)((DAT_02005208 >> (uVar7 << 1) & 3) * 4 + (&DAT_08293bec)[uVar7]);
            uVar7 = uVar8;
            goto LAB_080083f6;
          }
          uVar7 = uVar7 + 2;
          uVar9 = uVar10 - 0x14000;
        }
        else {
          uVar9 = 0x9fff;
        }
LAB_08008504:
        if ((int)uVar13 < 0x80) goto LAB_0800851c;
        break;
      }
LAB_080083f6:
      if (*puVar11 == (DAT_0200520c & 0x7f)) {
        pbVar4 = (byte *)((uint)(&DAT_0200543c)
                                [(uint)DAT_0200543c *
                                 (((int)uVar9 >> 0xc) + (uVar7 - puVar11[0x1c]) * 10) +
                                 iVar6 + (uVar2 - puVar11[0x1b]) * 0xf + 2] + *piVar12);
      }
      else {
        pbVar4 = (byte *)((uint)*(ushort *)
                                 ((((int)uVar9 >> 0xc) * 0xf +
                                  (uint)((byte *)piVar12[3])
                                        [(uVar7 - puVar11[0x1c]) * (uint)*(byte *)piVar12[3] +
                                         (uVar2 - puVar11[0x1b]) + 4] * 0x96 + iVar6) * 2 +
                                 piVar12[2]) + *piVar12);
      }
      bVar1 = *pbVar4;
      iVar14 = sub_080C8A9C(uVar3 & 0xfff,uVar9 & 0xfff,
                            *(undefined4 *)(&DAT_08290cec + (bVar1 & 0xf) * 4));
      if ((iVar14 != 0) && (bVar1 != 0x8f)) goto LAB_08008504;
      if ((uVar13 & 1) == 0) {
        uVar10 = ((int)(uVar9 + 0x1000) >> 0xc) * 0x1000 - 1;
      }
      else {
        uVar10 = uVar9 + 1;
      }
    }
    uVar7 = (uint)(byte)(&DAT_08290dec)[local_30 >> 0xc];
    uVar9 = local_30 + uVar7 * -0xa000;
LAB_0800851c:
    iVar14 = 0;
    do {
      uVar10 = uVar9;
      if ((int)uVar9 < 0) {
        uVar7 = uVar7 - 1;
        if ((int)uVar7 < 0) goto LAB_08008688;
        uVar10 = uVar9 + 0xa000;
        if (0xef < (byte)(&DAT_082921ec)[uVar7 * 0x80 + uVar2]) {
          iVar6 = sub_080097E0(param_1,local_30,0x7fffffff);
          return iVar6;
        }
        uVar13 = (byte)(&DAT_082921ec)[uVar7 * 0x80 + uVar2] & 0xf;
        piVar12 = (int *)(&DAT_02005140 + uVar13 * 0x10);
        puVar11 = *(uint **)((DAT_02005208 >> (uVar13 << 1) & 3) * 4 + (&DAT_08293bec)[uVar13]);
      }
      if (*puVar11 == (DAT_0200520c & 0x7f)) {
        pbVar4 = (byte *)((uint)(&DAT_0200543c)
                                [(uint)DAT_0200543c *
                                 (((int)uVar10 >> 0xc) + (uVar7 - puVar11[0x1c]) * 10) +
                                 iVar6 + (uVar2 - puVar11[0x1b]) * 0xf + 2] + *piVar12);
      }
      else {
        pbVar4 = (byte *)((uint)*(ushort *)
                                 ((((int)uVar10 >> 0xc) * 0xf +
                                  (uint)((byte *)piVar12[3])
                                        [(uVar7 - puVar11[0x1c]) * (uint)*(byte *)piVar12[3] +
                                         (uVar2 - puVar11[0x1b]) + 4] * 0x96 + iVar6) * 2 +
                                 piVar12[2]) + *piVar12);
      }
      uVar9 = uVar10;
    } while ((((*pbVar4 != 0x8f) &&
              (iVar5 = sub_080C8AA0(uVar3 & 0xfff,uVar10 & 0xfff,0xfff,
                                    *(undefined4 *)(&DAT_08290cec + (*pbVar4 & 0xf) * 4)),
              iVar5 != 0)) && (uVar9 = iVar5 + uVar10, ((uVar10 ^ uVar9) & 0x1000) != 0)) &&
            (iVar14 = iVar14 + 1, iVar14 < 0x10));
    if (iVar14 < 0x10) {
      iVar6 = sub_080097E0(param_1,local_30,uVar9 + uVar7 * 0xa000);
      return iVar6;
    }
  }
LAB_08008688:
  return local_30 + 1;
}

