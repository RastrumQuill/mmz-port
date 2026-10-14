// sub_080ECF7A at 0x080ECF7A (thumb)

void sub_080ECF7A(void)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  undefined4 *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  int unaff_r8;
  int iVar16;
  int iVar17;
  uint in_lr;
  bool bVar18;
  bool bVar19;
  uint param_6;
  uint *param_7;
  char *param_8;
  uint param_9;
  uint param_10;
  undefined4 *param_11;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar3 = param_11[6];
  puVar12 = param_11 + 0x14;
  param_6 = (uint)*(byte *)((int)param_11 + 6);
LAB_080ecf84:
  iVar9 = puVar12[9];
  if (param_10 != 0) {
    bVar2 = DAT_04000006._0_1_;
    uVar6 = (uint)bVar2;
    if (uVar6 < 0xa0) {
      uVar6 = uVar6 + 0xe4;
    }
    if (param_10 <= uVar6) {
LAB_080ed226:
      *param_11 = 0x68736d53;
                    /* WARNING: Could not recover jumptable at 0x080ed23a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(in_stack_0000001c,in_stack_00000020,in_stack_00000024);
      return;
    }
  }
  bVar2 = *(byte *)puVar12;
  param_9 = (uint)bVar2;
  if ((bVar2 & 199) != 0) {
    if ((bVar2 & 0x80) == 0) {
      uVar6 = (uint)*(byte *)((int)puVar12 + 9);
      if ((bVar2 & 4) == 0) {
        if ((bVar2 & 0x40) == 0) {
          if ((param_9 & 3) == 2) {
            uVar6 = *(byte *)((int)puVar12 + 5) * uVar6 >> 8;
            uVar5 = (uint)*(byte *)((int)puVar12 + 6);
            if (uVar6 <= uVar5) {
              if (uVar5 == 0) goto LAB_080ed006;
              param_9 = param_9 - 1;
              *(char *)puVar12 = (char)param_9;
              uVar6 = uVar5;
            }
          }
          else if ((param_9 & 3) == 3) goto LAB_080ed036;
        }
        else {
          uVar6 = *(byte *)((int)puVar12 + 7) * uVar6 >> 8;
          if (uVar6 <= *(byte *)(puVar12 + 3)) {
LAB_080ed006:
            if (*(byte *)(puVar12 + 3) == 0) goto LAB_080ecfee;
            param_9 = param_9 | 4;
            *(char *)puVar12 = (char)param_9;
            uVar6 = (uint)*(byte *)(puVar12 + 3);
          }
        }
      }
      else {
        bVar2 = *(byte *)((int)puVar12 + 0xd);
        iVar4 = bVar2 - 1;
        *(char *)((int)puVar12 + 0xd) = (char)iVar4;
        if (bVar2 == 0 || iVar4 == 0) goto LAB_080ecfee;
      }
    }
    else {
      if ((bVar2 & 0x40) != 0) {
LAB_080ecfee:
        *(undefined *)puVar12 = 0;
        goto sub_080ED21C;
      }
      param_9 = 3;
      *(undefined *)puVar12 = 3;
      puVar12[10] = iVar9 + 0x10;
      puVar12[6] = *(undefined4 *)(iVar9 + 0xc);
      uVar6 = 0;
      *(undefined *)((int)puVar12 + 9) = 0;
      puVar12[7] = 0;
      if ((*(byte *)(iVar9 + 3) & 0xc0) != 0) {
        param_9 = 0x13;
        *(undefined *)puVar12 = 0x13;
      }
LAB_080ed036:
      uVar6 = uVar6 + *(byte *)(puVar12 + 1);
      if (0xfe < uVar6) {
        param_9 = param_9 - 1;
        *(char *)puVar12 = (char)param_9;
        uVar6 = 0xff;
      }
    }
    *(char *)((int)puVar12 + 9) = (char)uVar6;
    *(char *)((int)puVar12 + 10) =
         (char)((uVar6 * (*(byte *)((int)param_11 + 7) + 1) >> 4) *
                ((uint)*(byte *)((int)puVar12 + 2) + (uint)*(byte *)((int)puVar12 + 3)) >> 9);
    param_9 = param_9 & 0x10;
    if (param_9 != 0) {
      param_8 = (char *)(iVar9 + 0x10 + *(int *)(iVar9 + 8));
      param_9 = *(int *)(iVar9 + 0xc) - *(int *)(iVar9 + 8);
    }
    uVar6 = puVar12[6];
    pcVar10 = (char *)puVar12[10];
    iVar9 = (uint)*(byte *)((int)puVar12 + 10) * 0x10000;
    uVar5 = uVar6;
    puVar13 = param_7;
    iVar4 = unaff_r8;
    if ((*(byte *)((int)puVar12 + 1) & 8) == 0) {
      in_lr = puVar12[7];
      iVar16 = puVar12[8];
      uVar5 = (uint)*pcVar10;
      pcVar10 = pcVar10 + 1;
      iVar7 = (int)*pcVar10 - uVar5;
      do {
        uVar15 = *puVar13;
        uVar8 = uVar6;
        do {
          puVar14 = puVar13;
          uVar15 = (iVar9 * (uVar5 + ((int)(in_lr * iVar7) >> 0x17)) & 0xff00ffff) +
                   (uVar15 >> 8 | uVar15 << 0x18);
          in_lr = in_lr + iVar3 * iVar16;
          uVar1 = in_lr >> 0x17;
          uVar6 = uVar8;
          if (uVar1 != 0) {
            in_lr = in_lr & 0xc07fffff;
            uVar6 = uVar8 - uVar1;
            if (uVar6 == 0 || (int)uVar8 < (int)uVar1) {
              if (param_9 == 0) {
                param_9 = 0;
                goto LAB_080ed168;
              }
              iVar17 = -uVar6;
              while( true ) {
                bVar19 = SCARRY4(param_9,uVar6);
                uVar6 = param_9 + uVar6;
                bVar18 = uVar6 == 0;
                uVar5 = param_9;
                pcVar10 = param_8;
                if (!bVar18 && (int)uVar6 < 0 == bVar19) break;
                iVar17 = iVar17 - param_9;
              }
            }
            else {
              iVar17 = uVar1 - 1;
              bVar18 = iVar17 == 0;
              if (bVar18) {
                uVar5 = uVar5 + iVar7;
              }
            }
            if (!bVar18) {
              pcVar10 = pcVar10 + iVar17;
              uVar5 = (uint)*pcVar10;
            }
            pcVar10 = pcVar10 + 1;
            iVar7 = (int)*pcVar10 - uVar5;
          }
          uVar8 = uVar6;
          puVar13 = puVar14 + 0x10000000;
        } while (puVar14 < (uint *)0xc0000000);
        puVar13 = puVar14 + 0x10000001;
        puVar14[0x10000000] = uVar15;
        iVar17 = iVar4 + -4;
        bVar18 = 3 < iVar4;
        iVar4 = iVar17;
      } while (iVar17 != 0 && bVar18);
      pcVar10 = pcVar10 + -1;
      puVar12[7] = in_lr;
    }
    else {
      do {
        uVar6 = uVar5;
        if (4 < (int)uVar5) {
          uVar6 = uVar5 - iVar4;
          if (uVar6 != 0 && iVar4 <= (int)uVar5) {
            in_lr = 0;
          }
          if (uVar6 == 0 || (int)uVar5 < iVar4) {
            iVar16 = (uVar6 + iVar4) - 4;
            in_lr = iVar4 - iVar16;
            uVar6 = uVar6 + iVar4 & 3;
            iVar4 = iVar16;
            if (uVar6 == 0) {
              uVar6 = 4;
            }
          }
          do {
            uVar5 = *puVar13;
            pcVar11 = pcVar10;
            do {
              puVar14 = puVar13;
              pcVar10 = pcVar11 + 1;
              uVar5 = (iVar9 * *pcVar11 & 0xff00ffffU) + (uVar5 >> 8 | uVar5 << 0x18);
              pcVar11 = pcVar10;
              puVar13 = puVar14 + 0x10000000;
            } while (puVar14 < (uint *)0xc0000000);
            puVar13 = puVar14 + 0x10000001;
            puVar14[0x10000000] = uVar5;
            iVar16 = iVar4 + -4;
            bVar18 = 3 < iVar4;
            iVar4 = iVar16;
          } while (iVar16 != 0 && bVar18);
          iVar4 = iVar16 + in_lr;
          if (iVar4 == 0) break;
        }
        uVar15 = *puVar13;
        do {
          puVar14 = puVar13;
          uVar15 = (iVar9 * *pcVar10 & 0xff00ffffU) + (uVar15 >> 8 | uVar15 << 0x18);
          uVar6 = uVar6 - 1;
          pcVar10 = pcVar10 + 1;
          if ((uVar6 == 0) && (uVar6 = param_9, pcVar10 = param_8, param_9 == 0)) goto LAB_080ed168;
          puVar13 = puVar14 + 0x10000000;
        } while (puVar14 < (uint *)0xc0000000);
        puVar13 = puVar14 + 0x10000001;
        puVar14[0x10000000] = uVar15;
        iVar16 = iVar4 + -4;
        bVar18 = 3 < iVar4;
        uVar5 = uVar6;
        iVar4 = iVar16;
      } while (iVar16 != 0 && bVar18);
    }
    puVar12[6] = uVar6;
    puVar12[10] = pcVar10;
  }
  goto sub_080ED21C;
LAB_080ed168:
  *(char *)puVar12 = (char)param_9;
  uVar6 = (3 - ((uint)puVar14 >> 0x1e)) * 8 & 0x1f;
  *(uint *)((uint)puVar14 & 0x3fffffff) = uVar15 >> uVar6 | uVar15 << 0x20 - uVar6;
sub_080ED21C:
  if (param_6 - 1 == 0 || (int)param_6 < 1) goto LAB_080ed226;
  puVar12 = puVar12 + 0x10;
  param_6 = param_6 - 1;
  goto LAB_080ecf84;
}

