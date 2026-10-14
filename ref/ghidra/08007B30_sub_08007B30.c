// sub_08007B30 at 0x08007B30 (thumb)

undefined8 sub_08007B30(uint param_1,int param_2)

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
  int *piVar10;
  int iVar11;
  undefined4 in_lr;
  int local_28;
  
  piVar10 = (int *)0x0;
  puVar9 = (uint *)0x0;
  local_28 = 0;
  if (param_1 < 0x780000) {
    if (0x4fffff < param_2) {
      param_2 = 0x4fffff;
    }
    uVar8 = (uint)(byte)(&DAT_082915ec)[(int)param_1 >> 0xc];
    iVar7 = (byte)(&DAT_08290dec)[param_2 >> 0xc] + 1;
    uVar1 = param_1 + uVar8 * -0xf000;
    uVar5 = param_2 + iVar7 * -0xa000;
    iVar11 = 0;
    iVar4 = (int)uVar1 >> 0xc;
    while( true ) {
      uVar6 = uVar5;
      if ((int)uVar5 < 0) {
        iVar7 = iVar7 + -1;
        if (iVar7 < 0) goto LAB_08007ce4;
        uVar6 = uVar5 + 0xa000;
        if (0xef < (byte)(&DAT_082921ec)[uVar8 + iVar7 * 0x80]) {
          iVar4 = 0;
          goto LAB_08007ce6;
        }
        uVar5 = (byte)(&DAT_082921ec)[uVar8 + iVar7 * 0x80] & 0xf;
        piVar10 = (int *)(&DAT_02005140 + uVar5 * 0x10);
        puVar9 = *(uint **)((DAT_02005208 >> (uVar5 << 1) & 3) * 4 + (&DAT_08293bec)[uVar5]);
      }
      if (*puVar9 == (DAT_0200520c & 0x7f)) {
        pbVar2 = (byte *)((uint)(&DAT_0200543c)
                                [(uint)DAT_0200543c *
                                 (((int)uVar6 >> 0xc) + (iVar7 - puVar9[0x1c]) * 10) +
                                 iVar4 + (uVar8 - puVar9[0x1b]) * 0xf + 2] + *piVar10);
      }
      else {
        pbVar2 = (byte *)((uint)*(ushort *)
                                 ((((int)uVar6 >> 0xc) * 0xf +
                                  (uint)((byte *)piVar10[3])
                                        [(uint)*(byte *)piVar10[3] * (iVar7 - puVar9[0x1c]) +
                                         (uVar8 - puVar9[0x1b]) + 4] * 0x96 + iVar4) * 2 +
                                 piVar10[2]) + *piVar10);
      }
      if ((*pbVar2 == 0x8f) ||
         (iVar3 = sub_080C8AA0(uVar1 & 0xfff,uVar6 & 0xfff,0xfff,
                               *(undefined4 *)(&DAT_08290cec + (*pbVar2 & 0xf) * 4)), iVar3 == 0))
      break;
      local_28 = local_28 + iVar3;
      uVar5 = uVar6 + iVar3;
      if ((((uVar6 ^ uVar5) & 0x1000) == 0) || (iVar11 = iVar11 + 1, 0xf < iVar11)) break;
    }
    if (iVar11 < 0x10) {
      iVar4 = sub_08009528(param_1,local_28 + param_2);
      iVar4 = iVar4 - param_2;
      goto LAB_08007ce6;
    }
  }
LAB_08007ce4:
  iVar4 = 1;
LAB_08007ce6:
  return CONCAT44(in_lr,iVar4);
}

