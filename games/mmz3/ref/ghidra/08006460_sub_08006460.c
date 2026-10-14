// sub_08006460 at 0x08006460 (thumb)

void sub_08006460(uint param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int param_6,byte *param_7,int param_8,int param_9,uint param_10,int param_11,
                 int param_12,int param_13,int param_14,int param_15,int param_16,byte *param_17,
                 undefined4 param_18,uint param_19,int param_20)

{
  short sVar1;
  ushort *puVar2;
  ushort *puVar3;
  uint uVar4;
  ushort *unaff_r7;
  uint unaff_r8;
  int unaff_r9;
  int unaff_r10;
  uint in_r12;
  code *UNRECOVERED_JUMPTABLE;
  
code_r0x08006460:
  if (0xc < param_2) goto LAB_0800654c;
  do {
    unaff_r8 = param_10 & 0xffff;
    if (unaff_r9 != 0) goto LAB_0800648c;
    if ((short)param_10 < param_15) {
      do {
        while( true ) {
          while( true ) {
            puVar2 = (ushort *)(*(int *)(param_5 + 0xc) + (uint)*unaff_r7 * 8);
            puVar3 = (ushort *)
                     ((param_9 + ((int)param_1 >> 0x10) & 0x1fU) * 0x80 +
                     (param_8 + (short)unaff_r8 & 0x1fU) * 2 + param_6);
            *puVar3 = *puVar2 & 0xff | (ushort)((puVar2[1] & 0xff) << 8);
            puVar3[0x20] = puVar2[2] & 0xff | (ushort)((puVar2[3] & 0xff) << 8);
            unaff_r7 = unaff_r7 + 1;
            uVar4 = (int)(short)unaff_r8 + 1;
            unaff_r8 = uVar4 & 0xffff;
            if (unaff_r9 != 0) break;
            if (param_15 <= (short)uVar4) goto LAB_08006516;
          }
LAB_0800648c:
          sVar1 = (short)unaff_r8;
          if (unaff_r9 >> 0x10 != 1) break;
          if ((0x13 < sVar1) || (0xe < sVar1 + -0xf + param_14)) goto LAB_08006516;
        }
      } while (sVar1 < 0x14);
    }
LAB_08006516:
    unaff_r7 = unaff_r7 + (0xf - ((int)(short)unaff_r8 - (int)(short)param_10));
    param_1 = in_r12 * 0x10000 + 0x10000;
    in_r12 = param_1 >> 0x10;
    uVar4 = param_1;
    if (unaff_r10 != 0) goto LAB_08006438;
    while (param_13 <= (int)uVar4 >> 0x10) {
LAB_0800654c:
      if (unaff_r9 >> 0x10 == 2) {
LAB_080065a2:
        if (param_20 >> 0x10 == 2) {
LAB_080065e0:
                    /* WARNING: Could not recover jumptable at 0x080065ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)();
          return;
        }
        param_7 = param_7 + (*param_17 - 2);
        unaff_r7 = (ushort *)(param_16 + (uint)*param_7 * 300 + param_11);
        param_10 = 0;
        param_20 = ((param_20 >> 0x10) + 1) * 0x10000;
        unaff_r10 = param_20 >> 0x10;
        if (2 < unaff_r10) goto LAB_080065e0;
        uVar4 = 0;
        param_19 = param_1 & 0xffff0000;
      }
      else {
        param_7 = param_7 + 1;
        if (unaff_r10 == 0) {
          unaff_r7 = (ushort *)(param_16 + (uint)*param_7 * 300 + param_12 * 0x1e);
        }
        else {
          unaff_r7 = (ushort *)(param_16 + (uint)*param_7 * 300);
        }
        uVar4 = unaff_r9 + 0x10000U >> 0x10;
        param_10 = unaff_r8;
        if (2 < (int)(unaff_r9 + 0x10000U) >> 0x10) goto LAB_080065a2;
      }
      in_r12 = param_19 >> 0x10;
      unaff_r9 = uVar4 << 0x10;
      if (unaff_r10 != 0) {
LAB_08006438:
        if (unaff_r10 != 1) {
          param_1 = in_r12 << 0x10;
          param_2 = (int)param_1 >> 0x10;
          goto code_r0x08006460;
        }
        param_1 = in_r12 * 0x10000;
        if (((int)param_1 >> 0x10 < 0xd) && (((int)param_1 >> 0x10) + -10 + param_12 < 10)) break;
        goto LAB_0800654c;
      }
      param_1 = param_19 & 0xffff0000;
      uVar4 = param_19;
    }
  } while( true );
}

