// sub_08126498 at 0x08126498 (arm)

void sub_08126498(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,uint *param_7,char *param_8,undefined4 param_9,uint param_10,
                 undefined4 *param_11,undefined4 param_12,undefined4 param_13,undefined4 param_14)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  int unaff_r4;
  undefined4 *puVar12;
  char *unaff_r5;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  char *pcVar16;
  int unaff_r8;
  int iVar17;
  int iVar18;
  uint in_lr;
  bool bVar19;
  bool bVar20;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar4 = unaff_r8;
  if (unaff_r4 == 2) {
    pcVar16 = (char *)(param_1 + 0x350);
  }
  else {
    pcVar16 = unaff_r5 + unaff_r8;
  }
  do {
    iVar7 = ((int)*unaff_r5 + (int)*pcVar16) * param_4;
    cVar3 = (char)((uint)iVar7 >> 8);
    if ((iVar7 >> 8 & 0x80U) != 0) {
      cVar3 = cVar3 + '\x01';
    }
    *unaff_r5 = cVar3;
    iVar7 = iVar4 + -1;
    bVar19 = 0 < iVar4;
    iVar4 = iVar7;
    unaff_r5 = unaff_r5 + 1;
    pcVar16 = pcVar16 + 1;
  } while (iVar7 != 0 && bVar19);
  iVar4 = param_11[6];
  puVar12 = param_11 + 0x14;
  param_6 = (uint)*(byte *)((int)param_11 + 6);
LAB_08126500:
  iVar7 = puVar12[9];
  if (param_10 != 0) {
    bVar2 = DAT_04000006._0_1_;
    uVar8 = (uint)bVar2;
    if (uVar8 < 0xa0) {
      uVar8 = uVar8 + 0xe4;
    }
    if (param_10 <= uVar8) {
LAB_081267a2:
      *param_11 = 0x68736d53;
                    /* WARNING: Could not recover jumptable at 0x081267b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_12,param_13,param_14);
      return;
    }
  }
  bVar2 = *(byte *)puVar12;
  param_9 = (uint)bVar2;
  if ((bVar2 & 199) != 0) {
    if ((bVar2 & 0x80) == 0) {
      uVar8 = (uint)*(byte *)((int)puVar12 + 9);
      if ((bVar2 & 4) == 0) {
        if ((bVar2 & 0x40) == 0) {
          if ((param_9 & 3) == 2) {
            uVar8 = *(byte *)((int)puVar12 + 5) * uVar8 >> 8;
            uVar6 = (uint)*(byte *)((int)puVar12 + 6);
            if (uVar8 <= uVar6) {
              if (uVar6 == 0) goto LAB_08126582;
              param_9 = param_9 - 1;
              *(char *)puVar12 = (char)param_9;
              uVar8 = uVar6;
            }
          }
          else if ((param_9 & 3) == 3) goto LAB_081265b2;
        }
        else {
          uVar8 = *(byte *)((int)puVar12 + 7) * uVar8 >> 8;
          if (uVar8 <= *(byte *)(puVar12 + 3)) {
LAB_08126582:
            if (*(byte *)(puVar12 + 3) == 0) goto LAB_0812656a;
            param_9 = param_9 | 4;
            *(char *)puVar12 = (char)param_9;
            uVar8 = (uint)*(byte *)(puVar12 + 3);
          }
        }
      }
      else {
        bVar2 = *(byte *)((int)puVar12 + 0xd);
        iVar5 = bVar2 - 1;
        *(char *)((int)puVar12 + 0xd) = (char)iVar5;
        if (bVar2 == 0 || iVar5 == 0) goto LAB_0812656a;
      }
    }
    else {
      if ((bVar2 & 0x40) != 0) {
LAB_0812656a:
        *(undefined *)puVar12 = 0;
        goto sub_08126798;
      }
      param_9 = 3;
      *(undefined *)puVar12 = 3;
      puVar12[10] = iVar7 + 0x10;
      puVar12[6] = *(undefined4 *)(iVar7 + 0xc);
      uVar8 = 0;
      *(undefined *)((int)puVar12 + 9) = 0;
      puVar12[7] = 0;
      if ((*(byte *)(iVar7 + 3) & 0xc0) != 0) {
        param_9 = 0x13;
        *(undefined *)puVar12 = 0x13;
      }
LAB_081265b2:
      uVar8 = uVar8 + *(byte *)(puVar12 + 1);
      if (0xfe < uVar8) {
        param_9 = param_9 - 1;
        *(char *)puVar12 = (char)param_9;
        uVar8 = 0xff;
      }
    }
    *(char *)((int)puVar12 + 9) = (char)uVar8;
    *(char *)((int)puVar12 + 10) =
         (char)((uVar8 * (*(byte *)((int)param_11 + 7) + 1) >> 4) *
                ((uint)*(byte *)((int)puVar12 + 2) + (uint)*(byte *)((int)puVar12 + 3)) >> 9);
    param_9 = param_9 & 0x10;
    if (param_9 != 0) {
      param_8 = (char *)(iVar7 + 0x10 + *(int *)(iVar7 + 8));
      param_9 = *(int *)(iVar7 + 0xc) - *(int *)(iVar7 + 8);
    }
    uVar8 = puVar12[6];
    pcVar16 = (char *)puVar12[10];
    iVar7 = (uint)*(byte *)((int)puVar12 + 10) * 0x10000;
    uVar6 = uVar8;
    puVar13 = param_7;
    iVar5 = unaff_r8;
    if ((*(byte *)((int)puVar12 + 1) & 8) == 0) {
      in_lr = puVar12[7];
      iVar17 = puVar12[8];
      uVar6 = (uint)*pcVar16;
      pcVar16 = pcVar16 + 1;
      iVar9 = (int)*pcVar16 - uVar6;
      do {
        uVar15 = *puVar13;
        uVar10 = uVar8;
        do {
          puVar14 = puVar13;
          uVar15 = (iVar7 * (uVar6 + ((int)(in_lr * iVar9) >> 0x17)) & 0xff00ffff) +
                   (uVar15 >> 8 | uVar15 << 0x18);
          in_lr = in_lr + iVar4 * iVar17;
          uVar1 = in_lr >> 0x17;
          uVar8 = uVar10;
          if (uVar1 != 0) {
            in_lr = in_lr & 0xc07fffff;
            uVar8 = uVar10 - uVar1;
            if (uVar8 == 0 || (int)uVar10 < (int)uVar1) {
              if (param_9 == 0) {
                param_9 = 0;
                goto LAB_081266e4;
              }
              iVar18 = -uVar8;
              while( true ) {
                bVar20 = SCARRY4(param_9,uVar8);
                uVar8 = param_9 + uVar8;
                bVar19 = uVar8 == 0;
                uVar6 = param_9;
                pcVar16 = param_8;
                if (!bVar19 && (int)uVar8 < 0 == bVar20) break;
                iVar18 = iVar18 - param_9;
              }
            }
            else {
              iVar18 = uVar1 - 1;
              bVar19 = iVar18 == 0;
              if (bVar19) {
                uVar6 = uVar6 + iVar9;
              }
            }
            if (!bVar19) {
              pcVar16 = pcVar16 + iVar18;
              uVar6 = (uint)*pcVar16;
            }
            pcVar16 = pcVar16 + 1;
            iVar9 = (int)*pcVar16 - uVar6;
          }
          uVar10 = uVar8;
          puVar13 = puVar14 + 0x10000000;
        } while (puVar14 < (uint *)0xc0000000);
        puVar13 = puVar14 + 0x10000001;
        puVar14[0x10000000] = uVar15;
        iVar18 = iVar5 + -4;
        bVar19 = 3 < iVar5;
        iVar5 = iVar18;
      } while (iVar18 != 0 && bVar19);
      pcVar16 = pcVar16 + -1;
      puVar12[7] = in_lr;
    }
    else {
      do {
        uVar8 = uVar6;
        if (4 < (int)uVar6) {
          uVar8 = uVar6 - iVar5;
          if (uVar8 != 0 && iVar5 <= (int)uVar6) {
            in_lr = 0;
          }
          if (uVar8 == 0 || (int)uVar6 < iVar5) {
            iVar17 = (uVar8 + iVar5) - 4;
            in_lr = iVar5 - iVar17;
            uVar8 = uVar8 + iVar5 & 3;
            iVar5 = iVar17;
            if (uVar8 == 0) {
              uVar8 = 4;
            }
          }
          do {
            uVar6 = *puVar13;
            pcVar11 = pcVar16;
            do {
              puVar14 = puVar13;
              pcVar16 = pcVar11 + 1;
              uVar6 = (iVar7 * *pcVar11 & 0xff00ffffU) + (uVar6 >> 8 | uVar6 << 0x18);
              pcVar11 = pcVar16;
              puVar13 = puVar14 + 0x10000000;
            } while (puVar14 < (uint *)0xc0000000);
            puVar13 = puVar14 + 0x10000001;
            puVar14[0x10000000] = uVar6;
            iVar17 = iVar5 + -4;
            bVar19 = 3 < iVar5;
            iVar5 = iVar17;
          } while (iVar17 != 0 && bVar19);
          iVar5 = iVar17 + in_lr;
          if (iVar5 == 0) break;
        }
        uVar15 = *puVar13;
        do {
          puVar14 = puVar13;
          uVar15 = (iVar7 * *pcVar16 & 0xff00ffffU) + (uVar15 >> 8 | uVar15 << 0x18);
          uVar8 = uVar8 - 1;
          pcVar16 = pcVar16 + 1;
          if ((uVar8 == 0) && (uVar8 = param_9, pcVar16 = param_8, param_9 == 0)) goto LAB_081266e4;
          puVar13 = puVar14 + 0x10000000;
        } while (puVar14 < (uint *)0xc0000000);
        puVar13 = puVar14 + 0x10000001;
        puVar14[0x10000000] = uVar15;
        iVar17 = iVar5 + -4;
        bVar19 = 3 < iVar5;
        uVar6 = uVar8;
        iVar5 = iVar17;
      } while (iVar17 != 0 && bVar19);
    }
    puVar12[6] = uVar8;
    puVar12[10] = pcVar16;
  }
  goto sub_08126798;
LAB_081266e4:
  *(char *)puVar12 = (char)param_9;
  uVar8 = (3 - ((uint)puVar14 >> 0x1e)) * 8 & 0x1f;
  *(uint *)((uint)puVar14 & 0x3fffffff) = uVar15 >> uVar8 | uVar15 << 0x20 - uVar8;
sub_08126798:
  if (param_6 - 1 == 0 || (int)param_6 < 1) goto LAB_081267a2;
  puVar12 = puVar12 + 0x10;
  param_6 = param_6 - 1;
  goto LAB_08126500;
}

