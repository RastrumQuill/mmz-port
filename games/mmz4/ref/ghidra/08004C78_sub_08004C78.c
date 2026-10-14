// sub_08004C78 at 0x08004C78 (thumb)

void sub_08004C78(int param_1,undefined4 param_2,uint param_3,int param_4,int param_5,int param_6,
                 byte *param_7,int param_8,int param_9,undefined4 param_10,int param_11,int param_12
                 ,int param_13,int param_14,int param_15)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  ushort *puVar7;
  uint uVar8;
  ushort *puVar9;
  uint unaff_r8;
  int param_19;
  byte *param_20;
  code *UNRECOVERED_JUMPTABLE;
  
  while( true ) {
    puVar9 = (ushort *)(param_19 + param_1 * 4 + param_11);
    param_10 = 0;
    param_4 = (param_4 + 1) * 0x10000 >> 0x10;
    if (2 < param_4) break;
    uVar4 = 0;
    do {
      uVar5 = param_3 >> 0x10;
      iVar2 = (int)(uVar4 * 0x10000) >> 0x10;
      if (param_4 != 0) goto LAB_08004af0;
      uVar3 = param_3 & 0xffff0000;
      if ((int)param_3 >> 0x10 < param_13) {
LAB_08004b1e:
        do {
          unaff_r8 = param_10 & 0xffff;
          if (uVar4 != 0) goto LAB_08004b44;
          if ((short)param_10 < param_15) {
            do {
              while( true ) {
                while( true ) {
                  puVar6 = (ushort *)(*(int *)(param_5 + 0xc) + (uint)*puVar9 * 8);
                  puVar7 = (ushort *)
                           ((param_9 + ((int)uVar3 >> 0x10) & 0x1fU) * 0x80 +
                           (param_8 + (short)unaff_r8 & 0x1fU) * 2 + param_6);
                  *puVar7 = *puVar6 & 0xff | (ushort)((puVar6[1] & 0xff) << 8);
                  puVar7[0x20] = puVar6[2] & 0xff | (ushort)((puVar6[3] & 0xff) << 8);
                  puVar9 = puVar9 + 1;
                  uVar8 = (int)(short)unaff_r8 + 1;
                  unaff_r8 = uVar8 & 0xffff;
                  if (uVar4 != 0) break;
                  if (param_15 <= (short)uVar8) goto LAB_08004bce;
                }
LAB_08004b44:
                sVar1 = (short)unaff_r8;
                if (iVar2 != 1) break;
                if ((0x13 < sVar1) || (0xe < sVar1 + -0xf + param_14)) goto LAB_08004bce;
              }
            } while (sVar1 < 0x14);
          }
LAB_08004bce:
          puVar9 = puVar9 + (0xf - ((int)(short)unaff_r8 - (int)(short)param_10));
          uVar3 = uVar5 * 0x10000 + 0x10000;
          uVar5 = uVar3 >> 0x10;
          if (param_4 == 0) {
            if (param_13 <= (int)uVar3 >> 0x10) break;
            goto LAB_08004b1e;
          }
LAB_08004af0:
          if (param_4 == 1) {
            uVar3 = uVar5 * 0x10000;
            if ((0xc < (int)uVar3 >> 0x10) || (9 < ((int)uVar3 >> 0x10) + -10 + param_12)) break;
            goto LAB_08004b1e;
          }
          uVar3 = uVar5 * 0x10000;
        } while ((int)uVar3 >> 0x10 < 0xd);
      }
      param_10 = unaff_r8;
      if (iVar2 == 2) break;
      param_7 = param_7 + 1;
      if (param_4 == 0) {
        puVar9 = (ushort *)(param_19 + (uint)*param_7 * 300 + param_12 * 0x1e);
      }
      else {
        puVar9 = (ushort *)(param_19 + (uint)*param_7 * 300);
      }
      uVar5 = uVar4 * 0x10000 + 0x10000;
      uVar4 = uVar5 >> 0x10;
    } while ((int)uVar5 >> 0x10 < 3);
    if (param_4 == 2) break;
    param_7 = param_7 + (*param_20 - 2);
    param_1 = (uint)*param_7 * 0x4b;
    param_3 = uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x08004ca6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

