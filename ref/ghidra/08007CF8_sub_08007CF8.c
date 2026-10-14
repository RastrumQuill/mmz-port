// sub_08007CF8 at 0x08007CF8 (thumb)

undefined8 sub_08007CF8(uint param_1,int param_2)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  undefined4 in_lr;
  int local_2c;
  
  piVar11 = (int *)0x0;
  puVar9 = (uint *)0x0;
  iVar12 = 0;
  if (param_1 < 0x780000) {
    local_2c = param_2;
    if (param_2 < 0) {
      local_2c = 0;
    }
    uVar8 = (uint)(byte)(&DAT_082915ec)[(int)param_1 >> 0xc];
    iVar7 = (byte)(&DAT_08290dec)[local_2c >> 0xc] - 1;
    uVar1 = param_1 + uVar8 * -0xf000;
    iVar10 = 0;
    iVar4 = (int)uVar1 >> 0xc;
    uVar6 = local_2c + iVar7 * -0xa000;
    do {
      if ((int)uVar6 < 0xa000) {
LAB_08007dd2:
        if (*puVar9 == (DAT_0200520c & 0x7f)) {
          pbVar2 = (byte *)((uint)(&DAT_0200543c)
                                  [(uint)DAT_0200543c *
                                   (((int)uVar6 >> 0xc) + (iVar7 - puVar9[0x1c]) * 10) +
                                   iVar4 + (uVar8 - puVar9[0x1b]) * 0xf + 2] + *piVar11);
        }
        else {
          pbVar2 = (byte *)((uint)*(ushort *)
                                   ((((int)uVar6 >> 0xc) * 0xf +
                                    (uint)((byte *)piVar11[3])
                                          [(uint)*(byte *)piVar11[3] * (iVar7 - puVar9[0x1c]) +
                                           (uVar8 - puVar9[0x1b]) + 4] * 0x96 + iVar4) * 2 +
                                   piVar11[2]) + *piVar11);
        }
        if (((*pbVar2 & 0x80) != 0) ||
           (iVar3 = sub_080C8AA0(uVar1 & 0xfff,~uVar6 & 0xfff,0xfff,
                                 *(undefined4 *)(&DAT_08290d2c + (*pbVar2 & 0xf) * 4)), iVar3 == 0))
        break;
        iVar12 = iVar12 - iVar3;
        uVar5 = uVar6 - iVar3;
        if (((uVar6 ^ uVar5) & 0x1000) == 0) break;
      }
      else {
        iVar7 = iVar7 + 1;
        if (0x7f < iVar7) goto LAB_08007ecc;
        uVar6 = uVar6 - 0xa000;
        if ((byte)(&DAT_082921ec)[uVar8 + iVar7 * 0x80] < 0xf0) {
          uVar5 = (byte)(&DAT_082921ec)[uVar8 + iVar7 * 0x80] & 0xf;
          piVar11 = (int *)(&DAT_02005140 + uVar5 * 0x10);
          puVar9 = *(uint **)((DAT_02005208 >> (uVar5 << 1) & 3) * 4 + (&DAT_08293bec)[uVar5]);
          goto LAB_08007dd2;
        }
        uVar5 = 0xa000;
        iVar12 = (iVar12 + 0xa000) - uVar6;
        iVar10 = (iVar10 + 10) - ((int)uVar6 >> 0xc);
      }
      iVar10 = iVar10 + 1;
      uVar6 = uVar5;
    } while (iVar10 < 0x10);
    if (iVar10 < 0x10) {
      iVar12 = sub_080095BC(param_1,local_2c + iVar12);
      iVar12 = iVar12 - local_2c;
      goto LAB_08007ed0;
    }
  }
LAB_08007ecc:
  iVar12 = -1;
LAB_08007ed0:
  return CONCAT44(in_lr,iVar12);
}

