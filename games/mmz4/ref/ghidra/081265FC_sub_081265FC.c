// sub_081265FC at 0x081265FC (arm)

void sub_081265FC(undefined4 param_1,undefined4 param_2,uint param_3,char *param_4,
                 undefined4 param_5,int param_6,uint *param_7,char *param_8,uint param_9,
                 uint param_10,undefined4 *param_11,undefined4 param_12,undefined4 param_13,
                 undefined4 param_14)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  byte *unaff_r4;
  byte *pbVar7;
  uint *unaff_r5;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  int unaff_r8;
  int iVar11;
  int iVar12;
  int iVar13;
  int in_r12;
  uint in_lr;
  bool bVar14;
  bool bVar15;
  code *UNRECOVERED_JUMPTABLE;
  
code_r0x081265fc:
  iVar4 = (uint)unaff_r4[10] * 0x10000;
  uVar9 = param_3;
  iVar12 = unaff_r8;
  if ((unaff_r4[1] & 8) == 0) {
    in_lr = *(uint *)(unaff_r4 + 0x1c);
    iVar11 = *(int *)(unaff_r4 + 0x20);
    uVar9 = (uint)*param_4;
    param_4 = param_4 + 1;
    iVar5 = (int)*param_4 - uVar9;
    do {
      uVar10 = *unaff_r5;
      uVar3 = param_3;
      do {
        puVar8 = unaff_r5;
        uVar10 = (iVar4 * (uVar9 + ((int)(in_lr * iVar5) >> 0x17)) & 0xff00ffff) +
                 (uVar10 >> 8 | uVar10 << 0x18);
        in_lr = in_lr + in_r12 * iVar11;
        uVar1 = in_lr >> 0x17;
        param_3 = uVar3;
        if (uVar1 != 0) {
          in_lr = in_lr & 0xc07fffff;
          param_3 = uVar3 - uVar1;
          if (param_3 == 0 || (int)uVar3 < (int)uVar1) {
            if (param_9 == 0) {
              param_9 = 0;
              goto LAB_081266e4;
            }
            iVar13 = -param_3;
            while( true ) {
              bVar15 = SCARRY4(param_9,param_3);
              param_3 = param_9 + param_3;
              bVar14 = param_3 == 0;
              uVar9 = param_9;
              param_4 = param_8;
              if (!bVar14 && (int)param_3 < 0 == bVar15) break;
              iVar13 = iVar13 - param_9;
            }
          }
          else {
            iVar13 = uVar1 - 1;
            bVar14 = iVar13 == 0;
            if (bVar14) {
              uVar9 = uVar9 + iVar5;
            }
          }
          if (!bVar14) {
            param_4 = param_4 + iVar13;
            uVar9 = (uint)*param_4;
          }
          param_4 = param_4 + 1;
          iVar5 = (int)*param_4 - uVar9;
        }
        uVar3 = param_3;
        unaff_r5 = puVar8 + 0x10000000;
      } while (puVar8 < (uint *)0xc0000000);
      unaff_r5 = puVar8 + 0x10000001;
      puVar8[0x10000000] = uVar10;
      iVar13 = iVar12 + -4;
      bVar14 = 3 < iVar12;
      iVar12 = iVar13;
    } while (iVar13 != 0 && bVar14);
    param_4 = param_4 + -1;
    *(uint *)(unaff_r4 + 0x1c) = in_lr;
  }
  else {
    do {
      param_3 = uVar9;
      if (4 < (int)uVar9) {
        param_3 = uVar9 - iVar12;
        if (param_3 != 0 && iVar12 <= (int)uVar9) {
          in_lr = 0;
        }
        if (param_3 == 0 || (int)uVar9 < iVar12) {
          iVar11 = (param_3 + iVar12) - 4;
          in_lr = iVar12 - iVar11;
          param_3 = param_3 + iVar12 & 3;
          iVar12 = iVar11;
          if (param_3 == 0) {
            param_3 = 4;
          }
        }
        do {
          uVar9 = *unaff_r5;
          pcVar6 = param_4;
          do {
            puVar8 = unaff_r5;
            param_4 = pcVar6 + 1;
            uVar9 = (iVar4 * *pcVar6 & 0xff00ffffU) + (uVar9 >> 8 | uVar9 << 0x18);
            pcVar6 = param_4;
            unaff_r5 = puVar8 + 0x10000000;
          } while (puVar8 < (uint *)0xc0000000);
          unaff_r5 = puVar8 + 0x10000001;
          puVar8[0x10000000] = uVar9;
          iVar11 = iVar12 + -4;
          bVar14 = 3 < iVar12;
          iVar12 = iVar11;
        } while (iVar11 != 0 && bVar14);
        iVar12 = iVar11 + in_lr;
        if (iVar12 == 0) break;
      }
      uVar10 = *unaff_r5;
      do {
        puVar8 = unaff_r5;
        uVar10 = (iVar4 * *param_4 & 0xff00ffffU) + (uVar10 >> 8 | uVar10 << 0x18);
        param_3 = param_3 - 1;
        param_4 = param_4 + 1;
        if ((param_3 == 0) && (param_3 = param_9, param_4 = param_8, param_9 == 0))
        goto LAB_081266e4;
        unaff_r5 = puVar8 + 0x10000000;
      } while (puVar8 < (uint *)0xc0000000);
      unaff_r5 = puVar8 + 0x10000001;
      puVar8[0x10000000] = uVar10;
      iVar11 = iVar12 + -4;
      bVar14 = 3 < iVar12;
      uVar9 = param_3;
      iVar12 = iVar11;
    } while (iVar11 != 0 && bVar14);
  }
  *(uint *)(unaff_r4 + 0x18) = param_3;
  *(char **)(unaff_r4 + 0x28) = param_4;
  goto sub_08126798;
LAB_081266e4:
  *unaff_r4 = (byte)param_9;
  uVar9 = (3 - ((uint)puVar8 >> 0x1e)) * 8 & 0x1f;
  *(uint *)((uint)puVar8 & 0x3fffffff) = uVar10 >> uVar9 | uVar10 << 0x20 - uVar9;
sub_08126798:
  do {
    pbVar7 = unaff_r4;
    iVar4 = param_6 + -1;
    if (iVar4 == 0 || param_6 < 1) {
LAB_081267a2:
      *param_11 = 0x68736d53;
                    /* WARNING: Could not recover jumptable at 0x081267b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_12,param_13,param_14);
      return;
    }
    unaff_r4 = pbVar7 + 0x40;
    iVar12 = *(int *)(pbVar7 + 100);
    if (param_10 != 0) {
      bVar2 = DAT_04000006._0_1_;
      uVar9 = (uint)bVar2;
      if (uVar9 < 0xa0) {
        uVar9 = uVar9 + 0xe4;
      }
      if (param_10 <= uVar9) goto LAB_081267a2;
    }
    bVar2 = *unaff_r4;
    param_9 = (uint)bVar2;
    param_6 = iVar4;
  } while ((bVar2 & 199) == 0);
  if ((bVar2 & 0x80) == 0) {
    uVar9 = (uint)pbVar7[0x49];
    if ((bVar2 & 4) == 0) {
      if ((bVar2 & 0x40) == 0) {
        if ((param_9 & 3) != 2) {
          if ((param_9 & 3) != 3) goto LAB_081265c0;
          goto LAB_081265b2;
        }
        uVar9 = pbVar7[0x45] * uVar9 >> 8;
        uVar3 = (uint)pbVar7[0x46];
        if (uVar3 < uVar9) goto LAB_081265c0;
        if (uVar3 != 0) {
          param_9 = param_9 - 1;
          *unaff_r4 = (byte)param_9;
          uVar9 = uVar3;
          goto LAB_081265c0;
        }
      }
      else {
        uVar9 = pbVar7[0x47] * uVar9 >> 8;
        if (pbVar7[0x4c] < uVar9) goto LAB_081265c0;
      }
      if (pbVar7[0x4c] != 0) {
        param_9 = param_9 | 4;
        *unaff_r4 = (byte)param_9;
        uVar9 = (uint)pbVar7[0x4c];
        goto LAB_081265c0;
      }
    }
    else {
      bVar2 = pbVar7[0x4d];
      iVar4 = bVar2 - 1;
      pbVar7[0x4d] = (byte)iVar4;
      if (bVar2 != 0 && iVar4 != 0) goto LAB_081265c0;
    }
  }
  else if ((bVar2 & 0x40) == 0) goto code_r0x08126536;
  *unaff_r4 = 0;
  goto sub_08126798;
code_r0x08126536:
  param_9 = 3;
  *unaff_r4 = 3;
  *(int *)(pbVar7 + 0x68) = iVar12 + 0x10;
  *(undefined4 *)(pbVar7 + 0x58) = *(undefined4 *)(iVar12 + 0xc);
  uVar9 = 0;
  pbVar7[0x49] = 0;
  *(undefined4 *)(pbVar7 + 0x5c) = 0;
  if ((*(byte *)(iVar12 + 3) & 0xc0) != 0) {
    param_9 = 0x13;
    *unaff_r4 = 0x13;
  }
LAB_081265b2:
  uVar9 = uVar9 + pbVar7[0x44];
  if (0xfe < uVar9) {
    param_9 = param_9 - 1;
    *unaff_r4 = (byte)param_9;
    uVar9 = 0xff;
  }
LAB_081265c0:
  pbVar7[0x49] = (byte)uVar9;
  pbVar7[0x4a] = (byte)((uVar9 * (*(byte *)((int)param_11 + 7) + 1) >> 4) *
                        ((uint)pbVar7[0x42] + (uint)pbVar7[0x43]) >> 9);
  param_9 = param_9 & 0x10;
  if (param_9 != 0) {
    param_8 = (char *)(iVar12 + 0x10 + *(int *)(iVar12 + 8));
    param_9 = *(int *)(iVar12 + 0xc) - *(int *)(iVar12 + 8);
  }
  param_3 = *(uint *)(pbVar7 + 0x58);
  param_4 = *(char **)(pbVar7 + 0x68);
  unaff_r5 = param_7;
  goto code_r0x081265fc;
}

