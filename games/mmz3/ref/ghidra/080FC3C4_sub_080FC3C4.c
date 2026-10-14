// sub_080FC3C4 at 0x080FC3C4 (thumb)

void sub_080FC3C4(void)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  byte *unaff_r4;
  byte *pbVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  int unaff_r8;
  int iVar16;
  int in_r12;
  uint in_lr;
  bool bVar17;
  bool bVar18;
  int param_6;
  uint *param_7;
  char *param_8;
  uint param_9;
  uint param_10;
  undefined4 *param_11;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  code *UNRECOVERED_JUMPTABLE;
  
code_r0x080fc3c4:
  do {
    pbVar11 = unaff_r4;
    iVar4 = param_6 + -1;
    if (iVar4 == 0 || param_6 < 1) {
LAB_080fc3ce:
      *param_11 = 0x68736d53;
                    /* WARNING: Could not recover jumptable at 0x080fc3e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(in_stack_0000001c,in_stack_00000020,in_stack_00000024);
      return;
    }
    unaff_r4 = pbVar11 + 0x40;
    iVar8 = *(int *)(pbVar11 + 100);
    if (param_10 != 0) {
      bVar2 = DAT_04000006._0_1_;
      uVar5 = (uint)bVar2;
      if (uVar5 < 0xa0) {
        uVar5 = uVar5 + 0xe4;
      }
      if (param_10 <= uVar5) goto LAB_080fc3ce;
    }
    bVar2 = *unaff_r4;
    param_9 = (uint)bVar2;
    param_6 = iVar4;
  } while ((bVar2 & 199) == 0);
  if ((bVar2 & 0x80) == 0) {
    uVar5 = (uint)pbVar11[0x49];
    if ((bVar2 & 4) == 0) {
      if ((bVar2 & 0x40) == 0) {
        if ((param_9 & 3) == 2) {
          uVar5 = pbVar11[0x45] * uVar5 >> 8;
          uVar3 = (uint)pbVar11[0x46];
          if (uVar5 <= uVar3) {
            if (uVar3 == 0) goto LAB_080fc1ae;
            param_9 = param_9 - 1;
            *unaff_r4 = (byte)param_9;
            uVar5 = uVar3;
          }
        }
        else if ((param_9 & 3) == 3) goto LAB_080fc1de;
      }
      else {
        uVar5 = pbVar11[0x47] * uVar5 >> 8;
        if (uVar5 <= pbVar11[0x4c]) {
LAB_080fc1ae:
          if (pbVar11[0x4c] == 0) goto LAB_080fc196;
          param_9 = param_9 | 4;
          *unaff_r4 = (byte)param_9;
          uVar5 = (uint)pbVar11[0x4c];
        }
      }
    }
    else {
      bVar2 = pbVar11[0x4d];
      iVar4 = bVar2 - 1;
      pbVar11[0x4d] = (byte)iVar4;
      if (bVar2 == 0 || iVar4 == 0) goto LAB_080fc196;
    }
  }
  else {
    if ((bVar2 & 0x40) != 0) {
LAB_080fc196:
      *unaff_r4 = 0;
      goto code_r0x080fc3c4;
    }
    param_9 = 3;
    *unaff_r4 = 3;
    *(int *)(pbVar11 + 0x68) = iVar8 + 0x10;
    *(undefined4 *)(pbVar11 + 0x58) = *(undefined4 *)(iVar8 + 0xc);
    uVar5 = 0;
    pbVar11[0x49] = 0;
    *(undefined4 *)(pbVar11 + 0x5c) = 0;
    if ((*(byte *)(iVar8 + 3) & 0xc0) != 0) {
      param_9 = 0x13;
      *unaff_r4 = 0x13;
    }
LAB_080fc1de:
    uVar5 = uVar5 + pbVar11[0x44];
    if (0xfe < uVar5) {
      param_9 = param_9 - 1;
      *unaff_r4 = (byte)param_9;
      uVar5 = 0xff;
    }
  }
  pbVar11[0x49] = (byte)uVar5;
  pbVar11[0x4a] =
       (byte)((uVar5 * (*(byte *)((int)param_11 + 7) + 1) >> 4) *
              ((uint)pbVar11[0x42] + (uint)pbVar11[0x43]) >> 9);
  param_9 = param_9 & 0x10;
  if (param_9 != 0) {
    param_8 = (char *)(iVar8 + 0x10 + *(int *)(iVar8 + 8));
    param_9 = *(int *)(iVar8 + 0xc) - *(int *)(iVar8 + 8);
  }
  uVar5 = *(uint *)(pbVar11 + 0x58);
  pcVar9 = *(char **)(pbVar11 + 0x68);
  iVar4 = (uint)pbVar11[0x4a] * 0x10000;
  uVar3 = uVar5;
  puVar12 = param_7;
  iVar8 = unaff_r8;
  if ((pbVar11[0x41] & 8) == 0) {
    in_lr = *(uint *)(pbVar11 + 0x5c);
    iVar15 = *(int *)(pbVar11 + 0x60);
    uVar3 = (uint)*pcVar9;
    pcVar9 = pcVar9 + 1;
    iVar6 = (int)*pcVar9 - uVar3;
    do {
      uVar14 = *puVar12;
      uVar7 = uVar5;
      do {
        puVar13 = puVar12;
        uVar14 = (iVar4 * (uVar3 + ((int)(in_lr * iVar6) >> 0x17)) & 0xff00ffff) +
                 (uVar14 >> 8 | uVar14 << 0x18);
        in_lr = in_lr + in_r12 * iVar15;
        uVar1 = in_lr >> 0x17;
        uVar5 = uVar7;
        if (uVar1 != 0) {
          in_lr = in_lr & 0xc07fffff;
          uVar5 = uVar7 - uVar1;
          if (uVar5 == 0 || (int)uVar7 < (int)uVar1) {
            if (param_9 == 0) {
              param_9 = 0;
              goto LAB_080fc310;
            }
            iVar16 = -uVar5;
            while( true ) {
              bVar18 = SCARRY4(param_9,uVar5);
              uVar5 = param_9 + uVar5;
              bVar17 = uVar5 == 0;
              uVar3 = param_9;
              pcVar9 = param_8;
              if (!bVar17 && (int)uVar5 < 0 == bVar18) break;
              iVar16 = iVar16 - param_9;
            }
          }
          else {
            iVar16 = uVar1 - 1;
            bVar17 = iVar16 == 0;
            if (bVar17) {
              uVar3 = uVar3 + iVar6;
            }
          }
          if (!bVar17) {
            pcVar9 = pcVar9 + iVar16;
            uVar3 = (uint)*pcVar9;
          }
          pcVar9 = pcVar9 + 1;
          iVar6 = (int)*pcVar9 - uVar3;
        }
        uVar7 = uVar5;
        puVar12 = puVar13 + 0x10000000;
      } while (puVar13 < (uint *)0xc0000000);
      puVar12 = puVar13 + 0x10000001;
      puVar13[0x10000000] = uVar14;
      iVar16 = iVar8 + -4;
      bVar17 = 3 < iVar8;
      iVar8 = iVar16;
    } while (iVar16 != 0 && bVar17);
    pcVar9 = pcVar9 + -1;
    *(uint *)(pbVar11 + 0x5c) = in_lr;
  }
  else {
    do {
      uVar5 = uVar3;
      if (4 < (int)uVar3) {
        uVar5 = uVar3 - iVar8;
        if (uVar5 != 0 && iVar8 <= (int)uVar3) {
          in_lr = 0;
        }
        if (uVar5 == 0 || (int)uVar3 < iVar8) {
          iVar15 = (uVar5 + iVar8) - 4;
          in_lr = iVar8 - iVar15;
          uVar5 = uVar5 + iVar8 & 3;
          iVar8 = iVar15;
          if (uVar5 == 0) {
            uVar5 = 4;
          }
        }
        do {
          uVar3 = *puVar12;
          pcVar10 = pcVar9;
          do {
            puVar13 = puVar12;
            pcVar9 = pcVar10 + 1;
            uVar3 = (iVar4 * *pcVar10 & 0xff00ffffU) + (uVar3 >> 8 | uVar3 << 0x18);
            pcVar10 = pcVar9;
            puVar12 = puVar13 + 0x10000000;
          } while (puVar13 < (uint *)0xc0000000);
          puVar12 = puVar13 + 0x10000001;
          puVar13[0x10000000] = uVar3;
          iVar15 = iVar8 + -4;
          bVar17 = 3 < iVar8;
          iVar8 = iVar15;
        } while (iVar15 != 0 && bVar17);
        iVar8 = iVar15 + in_lr;
        if (iVar8 == 0) break;
      }
      uVar14 = *puVar12;
      do {
        puVar13 = puVar12;
        uVar14 = (iVar4 * *pcVar9 & 0xff00ffffU) + (uVar14 >> 8 | uVar14 << 0x18);
        uVar5 = uVar5 - 1;
        pcVar9 = pcVar9 + 1;
        if ((uVar5 == 0) && (uVar5 = param_9, pcVar9 = param_8, param_9 == 0)) goto LAB_080fc310;
        puVar12 = puVar13 + 0x10000000;
      } while (puVar13 < (uint *)0xc0000000);
      puVar12 = puVar13 + 0x10000001;
      puVar13[0x10000000] = uVar14;
      iVar15 = iVar8 + -4;
      bVar17 = 3 < iVar8;
      uVar3 = uVar5;
      iVar8 = iVar15;
    } while (iVar15 != 0 && bVar17);
  }
  *(uint *)(pbVar11 + 0x58) = uVar5;
  *(char **)(pbVar11 + 0x68) = pcVar9;
  goto code_r0x080fc3c4;
LAB_080fc310:
  *unaff_r4 = (byte)param_9;
  uVar5 = (3 - ((uint)puVar13 >> 0x1e)) * 8 & 0x1f;
  *(uint *)((uint)puVar13 & 0x3fffffff) = uVar14 >> uVar5 | uVar14 << 0x20 - uVar5;
  goto code_r0x080fc3c4;
}

