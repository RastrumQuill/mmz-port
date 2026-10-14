// sub_080C68E0 at 0x080C68E0 (thumb)

void sub_080C68E0(void)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined4 *unaff_r5;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  uint unaff_r8;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint in_lr;
  bool bVar18;
  bool bVar19;
  uint uStack00000004;
  uint *in_stack_00000008;
  char *in_stack_0000000c;
  uint uStack00000010;
  uint in_stack_00000014;
  undefined4 *in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((unaff_r8 >> 2 & 1) != 0) {
    *unaff_r5 = 0;
    unaff_r5 = unaff_r5 + 1;
  }
  uVar6 = unaff_r8 >> 4;
  if ((unaff_r8 >> 3 & 1) != 0) {
    *unaff_r5 = 0;
    unaff_r5[1] = 0;
    unaff_r5 = unaff_r5 + 2;
  }
  do {
    *unaff_r5 = 0;
    unaff_r5[1] = 0;
    unaff_r5[2] = 0;
    unaff_r5[3] = 0;
    unaff_r5 = unaff_r5 + 4;
    uVar5 = uVar6 - 1;
    bVar18 = 0 < (int)uVar6;
    uVar6 = uVar5;
  } while (uVar5 != 0 && bVar18);
  iVar3 = in_stack_00000018[6];
  puVar11 = in_stack_00000018 + 0x14;
  uStack00000004 = (uint)*(byte *)((int)in_stack_00000018 + 6);
LAB_080c6908:
  iVar8 = puVar11[9];
  if (in_stack_00000014 != 0) {
    bVar2 = DAT_04000006._0_1_;
    uVar6 = (uint)bVar2;
    if (uVar6 < 0xa0) {
      uVar6 = uVar6 + 0xe4;
    }
    if (in_stack_00000014 <= uVar6) {
LAB_080c6baa:
      *in_stack_00000018 = 0x68736d53;
                    /* WARNING: Could not recover jumptable at 0x080c6bbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(in_stack_0000001c,in_stack_00000020,in_stack_00000024);
      return;
    }
  }
  bVar2 = *(byte *)puVar11;
  uStack00000010 = (uint)bVar2;
  if ((bVar2 & 199) != 0) {
    if ((bVar2 & 0x80) == 0) {
      uVar6 = (uint)*(byte *)((int)puVar11 + 9);
      if ((bVar2 & 4) == 0) {
        if ((bVar2 & 0x40) == 0) {
          if ((uStack00000010 & 3) == 2) {
            uVar6 = *(byte *)((int)puVar11 + 5) * uVar6 >> 8;
            uVar5 = (uint)*(byte *)((int)puVar11 + 6);
            if (uVar6 <= uVar5) {
              if (uVar5 == 0) goto LAB_080c698a;
              uStack00000010 = uStack00000010 - 1;
              *(char *)puVar11 = (char)uStack00000010;
              uVar6 = uVar5;
            }
          }
          else if ((uStack00000010 & 3) == 3) goto LAB_080c69ba;
        }
        else {
          uVar6 = *(byte *)((int)puVar11 + 7) * uVar6 >> 8;
          if (uVar6 <= *(byte *)(puVar11 + 3)) {
LAB_080c698a:
            if (*(byte *)(puVar11 + 3) == 0) goto LAB_080c6972;
            uStack00000010 = uStack00000010 | 4;
            *(char *)puVar11 = (char)uStack00000010;
            uVar6 = (uint)*(byte *)(puVar11 + 3);
          }
        }
      }
      else {
        bVar2 = *(byte *)((int)puVar11 + 0xd);
        iVar4 = bVar2 - 1;
        *(char *)((int)puVar11 + 0xd) = (char)iVar4;
        if (bVar2 == 0 || iVar4 == 0) goto LAB_080c6972;
      }
    }
    else {
      if ((bVar2 & 0x40) != 0) {
LAB_080c6972:
        *(undefined *)puVar11 = 0;
        goto sub_080C6BA0;
      }
      uStack00000010 = 3;
      *(undefined *)puVar11 = 3;
      puVar11[10] = iVar8 + 0x10;
      puVar11[6] = *(undefined4 *)(iVar8 + 0xc);
      uVar6 = 0;
      *(undefined *)((int)puVar11 + 9) = 0;
      puVar11[7] = 0;
      if ((*(byte *)(iVar8 + 3) & 0xc0) != 0) {
        uStack00000010 = 0x13;
        *(undefined *)puVar11 = 0x13;
      }
LAB_080c69ba:
      uVar6 = uVar6 + *(byte *)(puVar11 + 1);
      if (0xfe < uVar6) {
        uStack00000010 = uStack00000010 - 1;
        *(char *)puVar11 = (char)uStack00000010;
        uVar6 = 0xff;
      }
    }
    *(char *)((int)puVar11 + 9) = (char)uVar6;
    *(char *)((int)puVar11 + 10) =
         (char)((uVar6 * (*(byte *)((int)in_stack_00000018 + 7) + 1) >> 4) *
                ((uint)*(byte *)((int)puVar11 + 2) + (uint)*(byte *)((int)puVar11 + 3)) >> 9);
    uStack00000010 = uStack00000010 & 0x10;
    if (uStack00000010 != 0) {
      in_stack_0000000c = (char *)(iVar8 + 0x10 + *(int *)(iVar8 + 8));
      uStack00000010 = *(int *)(iVar8 + 0xc) - *(int *)(iVar8 + 8);
    }
    uVar6 = puVar11[6];
    pcVar9 = (char *)puVar11[10];
    iVar8 = (uint)*(byte *)((int)puVar11 + 10) * 0x10000;
    uVar5 = uVar6;
    puVar12 = in_stack_00000008;
    uVar15 = unaff_r8;
    if ((*(byte *)((int)puVar11 + 1) & 8) == 0) {
      in_lr = puVar11[7];
      iVar4 = puVar11[8];
      uVar5 = (uint)*pcVar9;
      pcVar9 = pcVar9 + 1;
      iVar7 = (int)*pcVar9 - uVar5;
      do {
        uVar14 = *puVar12;
        uVar16 = uVar6;
        do {
          puVar13 = puVar12;
          uVar14 = (iVar8 * (uVar5 + ((int)(in_lr * iVar7) >> 0x17)) & 0xff00ffff) +
                   (uVar14 >> 8 | uVar14 << 0x18);
          in_lr = in_lr + iVar3 * iVar4;
          uVar1 = in_lr >> 0x17;
          uVar6 = uVar16;
          if (uVar1 != 0) {
            in_lr = in_lr & 0xc07fffff;
            uVar6 = uVar16 - uVar1;
            if (uVar6 == 0 || (int)uVar16 < (int)uVar1) {
              if (uStack00000010 == 0) {
                uStack00000010 = 0;
                goto LAB_080c6aec;
              }
              iVar17 = -uVar6;
              while( true ) {
                bVar19 = SCARRY4(uStack00000010,uVar6);
                uVar6 = uStack00000010 + uVar6;
                bVar18 = uVar6 == 0;
                uVar5 = uStack00000010;
                pcVar9 = in_stack_0000000c;
                if (!bVar18 && (int)uVar6 < 0 == bVar19) break;
                iVar17 = iVar17 - uStack00000010;
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
              pcVar9 = pcVar9 + iVar17;
              uVar5 = (uint)*pcVar9;
            }
            pcVar9 = pcVar9 + 1;
            iVar7 = (int)*pcVar9 - uVar5;
          }
          uVar16 = uVar6;
          puVar12 = puVar13 + 0x10000000;
        } while (puVar13 < (uint *)0xc0000000);
        puVar12 = puVar13 + 0x10000001;
        puVar13[0x10000000] = uVar14;
        uVar16 = uVar15 - 4;
        bVar18 = 3 < (int)uVar15;
        uVar15 = uVar16;
      } while (uVar16 != 0 && bVar18);
      pcVar9 = pcVar9 + -1;
      puVar11[7] = in_lr;
    }
    else {
      do {
        uVar6 = uVar5;
        if (4 < (int)uVar5) {
          uVar6 = uVar5 - uVar15;
          if (uVar6 != 0 && (int)uVar15 <= (int)uVar5) {
            in_lr = 0;
          }
          if (uVar6 == 0 || (int)uVar5 < (int)uVar15) {
            uVar5 = (uVar6 + uVar15) - 4;
            in_lr = uVar15 - uVar5;
            uVar6 = uVar6 + uVar15 & 3;
            uVar15 = uVar5;
            if (uVar6 == 0) {
              uVar6 = 4;
            }
          }
          do {
            uVar5 = *puVar12;
            pcVar10 = pcVar9;
            do {
              puVar13 = puVar12;
              pcVar9 = pcVar10 + 1;
              uVar5 = (iVar8 * *pcVar10 & 0xff00ffffU) + (uVar5 >> 8 | uVar5 << 0x18);
              pcVar10 = pcVar9;
              puVar12 = puVar13 + 0x10000000;
            } while (puVar13 < (uint *)0xc0000000);
            puVar12 = puVar13 + 0x10000001;
            puVar13[0x10000000] = uVar5;
            uVar5 = uVar15 - 4;
            bVar18 = 3 < (int)uVar15;
            uVar15 = uVar5;
          } while (uVar5 != 0 && bVar18);
          uVar15 = uVar5 + in_lr;
          if (uVar15 == 0) break;
        }
        uVar14 = *puVar12;
        do {
          puVar13 = puVar12;
          uVar14 = (iVar8 * *pcVar9 & 0xff00ffffU) + (uVar14 >> 8 | uVar14 << 0x18);
          uVar6 = uVar6 - 1;
          pcVar9 = pcVar9 + 1;
          if ((uVar6 == 0) &&
             (uVar6 = uStack00000010, pcVar9 = in_stack_0000000c, uStack00000010 == 0))
          goto LAB_080c6aec;
          puVar12 = puVar13 + 0x10000000;
        } while (puVar13 < (uint *)0xc0000000);
        puVar12 = puVar13 + 0x10000001;
        puVar13[0x10000000] = uVar14;
        uVar16 = uVar15 - 4;
        bVar18 = 3 < (int)uVar15;
        uVar5 = uVar6;
        uVar15 = uVar16;
      } while (uVar16 != 0 && bVar18);
    }
    puVar11[6] = uVar6;
    puVar11[10] = pcVar9;
  }
  goto sub_080C6BA0;
LAB_080c6aec:
  *(char *)puVar11 = (char)uStack00000010;
  uVar6 = (3 - ((uint)puVar13 >> 0x1e)) * 8 & 0x1f;
  *(uint *)((uint)puVar13 & 0x3fffffff) = uVar14 >> uVar6 | uVar14 << 0x20 - uVar6;
sub_080C6BA0:
  if (uStack00000004 - 1 == 0 || (int)uStack00000004 < 1) goto LAB_080c6baa;
  puVar11 = puVar11 + 0x10;
  uStack00000004 = uStack00000004 - 1;
  goto LAB_080c6908;
}

