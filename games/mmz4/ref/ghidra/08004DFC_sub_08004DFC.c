// sub_08004DFC at 0x08004DFC (thumb)

undefined4
sub_08004DFC(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,int param_6,
            byte *param_7,uint param_8,int param_9,int param_10,int param_11_00,int param_11,
            int param_13_00,int param_12,int param_13,int param_14,int param_17,int param_15,
            uint param_19,int param_16)

{
  short sVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  uint unaff_r5;
  ushort *puVar6;
  uint unaff_r6;
  ushort *unaff_r7;
  uint unaff_r8;
  int unaff_r9;
  byte *unaff_r10;
  int in_r12;
  undefined4 in_stack_0000005c;
  
code_r0x08004dfc:
  param_1 = param_1 + param_4;
LAB_08004e10:
  if (0xe < param_1) goto LAB_08004e76;
  do {
    puVar4 = (ushort *)(*(int *)(param_5 + 0xc) + (uint)*unaff_r7 * 8);
    puVar6 = (ushort *)(((int)unaff_r8 >> 9) + (short)unaff_r5 * 2 + param_6);
    *puVar6 = *puVar4 & 0xff | (ushort)((puVar4[1] & 0xff) << 8);
    puVar6[0x20] = puVar4[2] & 0xff | (ushort)((puVar4[3] & 0xff) << 8);
    unaff_r7 = unaff_r7 + 1;
    uVar5 = (int)(short)unaff_r5 + 1;
    unaff_r5 = uVar5 & 0xffff;
    if (unaff_r9 != 0) goto LAB_08004dec;
    sVar1 = (short)uVar5;
    while (param_15 <= sVar1) {
LAB_08004e76:
      unaff_r7 = unaff_r7 + (0xf - ((int)(short)unaff_r5 - (in_r12 >> 0x10)));
      unaff_r8 = unaff_r6 * 0x10000 + 0x10000;
      unaff_r6 = unaff_r8 >> 0x10;
      uVar5 = unaff_r8;
      if (param_12 != 0) goto LAB_08004d86;
      while (param_14 <= (int)uVar5 >> 0x10) {
LAB_08004ea6:
        if (unaff_r9 >> 0x10 == 3) {
LAB_08004efc:
          if (param_16 >> 0x10 == 4) {
            return in_stack_0000005c;
          }
          unaff_r10 = param_7 + **(byte **)(param_5 + 0x14);
          unaff_r7 = (ushort *)(*(int *)(param_5 + 0x10) + (uint)*unaff_r10 * 300 + param_11);
          param_8 = 0;
          param_13_00 = ((param_16 >> 0x10) + 1) * 0x10000;
          param_12 = param_13_00 >> 0x10;
          if (4 < param_12) {
            return in_stack_0000005c;
          }
          uVar5 = 0;
          param_7 = unaff_r10;
          param_19 = unaff_r8;
          param_16 = param_13_00;
        }
        else {
          unaff_r10 = unaff_r10 + 1;
          if (param_12 == 2) {
            iVar3 = *(int *)(param_5 + 0x10) + (uint)*unaff_r10 * 300;
            iVar2 = param_13 * 0x1e;
          }
          else {
            iVar2 = (uint)*unaff_r10 * 300;
            iVar3 = *(int *)(param_5 + 0x10);
          }
          unaff_r7 = (ushort *)(iVar3 + iVar2);
          uVar5 = unaff_r9 + 0x10000U >> 0x10;
          param_8 = unaff_r5;
          if (3 < (int)(unaff_r9 + 0x10000U) >> 0x10) goto LAB_08004efc;
        }
        unaff_r6 = param_19 >> 0x10;
        unaff_r9 = uVar5 << 0x10;
        if (param_12 != 0) {
LAB_08004d86:
          iVar2 = param_13_00 >> 0x10;
          if (iVar2 == 1) {
            iVar2 = (short)unaff_r6 + -10 + param_13;
            goto LAB_08004dc2;
          }
          if (iVar2 == 2) goto code_r0x08004da0;
          if (iVar2 == 3) {
            unaff_r8 = unaff_r6 << 0x10;
            if ((int)unaff_r8 >> 0x10 < 0x20) {
              iVar2 = ((int)unaff_r8 >> 0x10) + param_10;
              goto LAB_08004dc2;
            }
          }
          else {
            unaff_r8 = unaff_r6 << 0x10;
            if ((int)unaff_r8 >> 0x10 < 0x20) break;
          }
          goto LAB_08004ea6;
        }
        unaff_r8 = param_19 & 0xffff0000;
        uVar5 = param_19;
      }
LAB_08004dd2:
      in_r12 = param_8 << 0x10;
      unaff_r5 = param_8 & 0xffff;
      if (unaff_r9 != 0) {
LAB_08004dec:
        sVar1 = (short)unaff_r5;
        if (unaff_r9 >> 0x10 == 1) {
          param_1 = sVar1 + -0xf;
          param_4 = param_17;
          goto code_r0x08004dfc;
        }
        if (unaff_r9 >> 0x10 == 2) {
          if (sVar1 < 0x20) {
            param_1 = sVar1 + param_11_00;
            goto LAB_08004e10;
          }
        }
        else if (sVar1 < 0x20) break;
        goto LAB_08004e76;
      }
      sVar1 = (short)param_8;
    }
  } while( true );
code_r0x08004da0:
  unaff_r8 = unaff_r6 << 0x10;
  if ((int)unaff_r8 >> 0x10 < 0x20) {
    iVar2 = ((int)unaff_r8 >> 0x10) + param_9;
LAB_08004dc2:
    unaff_r8 = unaff_r6 << 0x10;
    if (iVar2 < 10) goto LAB_08004dd2;
  }
  goto LAB_08004ea6;
}

