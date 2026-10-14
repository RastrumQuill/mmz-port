// sub_08006D3C at 0x08006D3C (thumb)

undefined8 sub_08006D3C(int *param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  sbyte *psVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined4 in_lr;
  
  uVar3 = sub_08006AA4(*param_1,param_1[1]);
  uVar4 = uVar3 & 0xff;
  piVar5 = *(int **)((DAT_02005208 >> ((uVar3 & 0x7f) << 1) & 3) * 4 + (&DAT_08293bec)[uVar4]);
  psVar7 = (sbyte *)piVar5[0x1d];
  if (((uint)(byte)psVar7[2] <=
       (uint)(byte)(&DAT_082915ec)[(*param_1 >> 8) + piVar5[0x1b] * -0xf0 >> 4]) ||
     ((uint)(byte)psVar7[3] <=
      (uint)(byte)(&DAT_08290dec)[(param_1[1] >> 8) + piVar5[0x1c] * -0xa0 >> 4]))
  goto LAB_080070be;
  bVar1 = psVar7[((uint)(byte)(&DAT_08290dec)[(param_1[1] >> 8) + piVar5[0x1c] * -0xa0 >> 4] <<
                 *psVar7) + (uint)(byte)(&DAT_082915ec)[(*param_1 >> 8) + piVar5[0x1b] * -0xf0 >> 4]
                 + 4];
  if (DAT_02005430 >> 8 == uVar4) {
    if ((ushort)(bVar1 >> 4) != (DAT_02005430 & 0xff)) {
LAB_08006e02:
      uVar3 = (uint)(bVar1 >> 4);
      if (uVar3 < 0xe) {
        sub_08001574((undefined *)
                     ((int)(&DAT_086b0000 + *piVar5 * 4) +
                     uVar3 * 0x14 + *(int *)(&DAT_086b0000 + *piVar5 * 4)),0x4000);
        sub_0800179C((undefined *)
                     ((int)(&DAT_086b0000 + *piVar5 * 4) +
                     uVar3 * 0x14 + *(int *)(&DAT_086b0000 + *piVar5 * 4) + 0xc),0);
        DAT_02005430 = (ushort)(bVar1 >> 4) | (ushort)(uVar4 << 8);
      }
      else {
        iVar9 = *param_1;
        iVar8 = param_1[1];
        if (uVar3 == 0xe) {
          iVar9 = iVar9 + 0xf000;
        }
        else {
          iVar8 = iVar8 + 0xa000;
        }
        uVar3 = sub_08006AA4(iVar9,iVar8);
        uVar6 = uVar3 & 0xff;
        piVar10 = *(int **)((DAT_02005208 >> ((uVar3 & 0x7f) << 1) & 3) * 4 + (&DAT_08293bec)[uVar6]
                           );
        bVar2 = (byte)((sbyte *)piVar10[0x1d])
                      [(uint)(byte)(&DAT_082915ec)[(iVar9 >> 8) + piVar10[0x1b] * -0xf0 >> 4] +
                       ((uint)(byte)(&DAT_08290dec)[(iVar8 >> 8) + piVar10[0x1c] * -0xa0 >> 4] <<
                       *(sbyte *)piVar10[0x1d]) + 4] >> 4;
        uVar3 = (uint)bVar2;
        if (DAT_02005430 >> 8 == uVar6) {
          if (uVar3 != (DAT_02005430 & 0xff)) {
LAB_08006f04:
            sub_08001574((undefined *)
                         ((int)(&DAT_086b0000 + *piVar10 * 4) +
                         uVar3 * 0x14 + *(int *)(&DAT_086b0000 + *piVar10 * 4)),0x4000);
            sub_0800179C((undefined *)
                         ((int)(&DAT_086b0000 + *piVar10 * 4) +
                         uVar3 * 0x14 + *(int *)(&DAT_086b0000 + *piVar10 * 4) + 0xc),0);
            DAT_02005430 = (ushort)(uVar6 << 8) | (ushort)bVar2;
          }
        }
        else if (uVar3 != 0xff) goto LAB_08006f04;
      }
    }
  }
  else if (bVar1 >> 4 != 0xff) goto LAB_08006e02;
  uVar3 = bVar1 & 0xf;
  if (DAT_02005432 >> 8 == uVar4) {
    if (uVar3 == (DAT_02005432 & 0xff)) goto LAB_080070be;
  }
  else if (uVar3 == 0xff) goto LAB_080070be;
  uVar3 = bVar1 & 0xf;
  if (uVar3 < 0xe) {
    sub_08001574((undefined *)
                 ((int)(&DAT_086b0000 + *piVar5 * 4) +
                 uVar3 * 0x14 + *(int *)(&DAT_086b0000 + *piVar5 * 4)),0x4000);
    sub_0800179C((undefined *)
                 ((int)(&DAT_086b0000 + *piVar5 * 4) +
                 uVar3 * 0x14 + *(int *)(&DAT_086b0000 + *piVar5 * 4) + 0xc),0);
    DAT_02005432 = (ushort)uVar3 | (ushort)(uVar4 << 8);
  }
  else {
    iVar9 = *param_1;
    iVar8 = param_1[1];
    if (uVar3 == 0xe) {
      iVar9 = iVar9 + 0xf000;
    }
    else {
      iVar8 = iVar8 + 0xa000;
    }
    uVar3 = sub_08006AA4(iVar9,iVar8);
    uVar4 = uVar3 & 0xff;
    piVar10 = *(int **)((DAT_02005208 >> ((uVar3 & 0x7f) << 1) & 3) * 4 + (&DAT_08293bec)[uVar4]);
    uVar3 = (byte)((sbyte *)piVar10[0x1d])
                  [(uint)(byte)(&DAT_082915ec)[(iVar9 >> 8) + piVar10[0x1b] * -0xf0 >> 4] +
                   ((uint)(byte)(&DAT_08290dec)[(iVar8 >> 8) + piVar10[0x1c] * -0xa0 >> 4] <<
                   *(sbyte *)piVar10[0x1d]) + 4] & 0xf;
    if (DAT_02005432 >> 8 == uVar4) {
      if (uVar3 == (DAT_02005432 & 0xff)) goto LAB_080070be;
    }
    else if (uVar3 == 0xff) goto LAB_080070be;
    sub_08001574((undefined *)
                 ((int)(&DAT_086b0000 + *piVar10 * 4) +
                 uVar3 * 0x14 + *(int *)(&DAT_086b0000 + *piVar10 * 4)),0x4000);
    sub_0800179C((undefined *)
                 ((int)(&DAT_086b0000 + *piVar10 * 4) +
                 uVar3 * 0x14 + *(int *)(&DAT_086b0000 + *piVar10 * 4) + 0xc),0);
    DAT_02005432 = (ushort)(uVar4 << 8) | (ushort)uVar3;
  }
LAB_080070be:
  return CONCAT44(in_lr,piVar5);
}

