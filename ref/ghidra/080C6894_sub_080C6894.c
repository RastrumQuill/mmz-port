// sub_080C6894 at 0x080C6894 (thumb)

void sub_080C6894(int param_1)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  int unaff_r4;
  undefined4 *puVar12;
  undefined4 *unaff_r5;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  uint unaff_r8;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint in_lr;
  bool bVar19;
  bool bVar20;
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
  
  bVar2 = *(byte *)(param_1 + 5);
  if (bVar2 == 0) {
    if ((unaff_r8 >> 2 & 1) != 0) {
      *unaff_r5 = 0;
      unaff_r5 = unaff_r5 + 1;
    }
    uVar7 = unaff_r8 >> 4;
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
      uVar6 = uVar7 - 1;
      bVar19 = 0 < (int)uVar7;
      uVar7 = uVar6;
    } while (uVar6 != 0 && bVar19);
  }
  else {
    uVar7 = unaff_r8;
    if (unaff_r4 == 2) {
      pcVar10 = (char *)(param_1 + 0x350);
    }
    else {
      pcVar10 = (char *)((int)unaff_r5 + unaff_r8);
    }
    do {
      iVar4 = ((int)*(char *)unaff_r5 + (int)*pcVar10) * (uint)bVar2;
      cVar3 = (char)((uint)iVar4 >> 8);
      if ((iVar4 >> 8 & 0x80U) != 0) {
        cVar3 = cVar3 + '\x01';
      }
      *(char *)unaff_r5 = cVar3;
      uVar6 = uVar7 - 1;
      bVar19 = 0 < (int)uVar7;
      uVar7 = uVar6;
      unaff_r5 = (undefined4 *)((int)unaff_r5 + 1);
      pcVar10 = pcVar10 + 1;
    } while (uVar6 != 0 && bVar19);
  }
  iVar4 = in_stack_00000018[6];
  puVar12 = in_stack_00000018 + 0x14;
  uStack00000004 = (uint)*(byte *)((int)in_stack_00000018 + 6);
LAB_080c6908:
  iVar9 = puVar12[9];
  if (in_stack_00000014 != 0) {
    bVar2 = DAT_04000006._0_1_;
    uVar7 = (uint)bVar2;
    if (uVar7 < 0xa0) {
      uVar7 = uVar7 + 0xe4;
    }
    if (in_stack_00000014 <= uVar7) {
LAB_080c6baa:
      *in_stack_00000018 = 0x68736d53;
                    /* WARNING: Could not recover jumptable at 0x080c6bbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(in_stack_0000001c,in_stack_00000020,in_stack_00000024);
      return;
    }
  }
  bVar2 = *(byte *)puVar12;
  uStack00000010 = (uint)bVar2;
  if ((bVar2 & 199) != 0) {
    if ((bVar2 & 0x80) == 0) {
      uVar7 = (uint)*(byte *)((int)puVar12 + 9);
      if ((bVar2 & 4) == 0) {
        if ((bVar2 & 0x40) == 0) {
          if ((uStack00000010 & 3) == 2) {
            uVar7 = *(byte *)((int)puVar12 + 5) * uVar7 >> 8;
            uVar6 = (uint)*(byte *)((int)puVar12 + 6);
            if (uVar7 <= uVar6) {
              if (uVar6 == 0) goto LAB_080c698a;
              uStack00000010 = uStack00000010 - 1;
              *(char *)puVar12 = (char)uStack00000010;
              uVar7 = uVar6;
            }
          }
          else if ((uStack00000010 & 3) == 3) goto LAB_080c69ba;
        }
        else {
          uVar7 = *(byte *)((int)puVar12 + 7) * uVar7 >> 8;
          if (uVar7 <= *(byte *)(puVar12 + 3)) {
LAB_080c698a:
            if (*(byte *)(puVar12 + 3) == 0) goto LAB_080c6972;
            uStack00000010 = uStack00000010 | 4;
            *(char *)puVar12 = (char)uStack00000010;
            uVar7 = (uint)*(byte *)(puVar12 + 3);
          }
        }
      }
      else {
        bVar2 = *(byte *)((int)puVar12 + 0xd);
        iVar5 = bVar2 - 1;
        *(char *)((int)puVar12 + 0xd) = (char)iVar5;
        if (bVar2 == 0 || iVar5 == 0) goto LAB_080c6972;
      }
    }
    else {
      if ((bVar2 & 0x40) != 0) {
LAB_080c6972:
        *(undefined *)puVar12 = 0;
        goto sub_080C6BA0;
      }
      uStack00000010 = 3;
      *(undefined *)puVar12 = 3;
      puVar12[10] = iVar9 + 0x10;
      puVar12[6] = *(undefined4 *)(iVar9 + 0xc);
      uVar7 = 0;
      *(undefined *)((int)puVar12 + 9) = 0;
      puVar12[7] = 0;
      if ((*(byte *)(iVar9 + 3) & 0xc0) != 0) {
        uStack00000010 = 0x13;
        *(undefined *)puVar12 = 0x13;
      }
LAB_080c69ba:
      uVar7 = uVar7 + *(byte *)(puVar12 + 1);
      if (0xfe < uVar7) {
        uStack00000010 = uStack00000010 - 1;
        *(char *)puVar12 = (char)uStack00000010;
        uVar7 = 0xff;
      }
    }
    *(char *)((int)puVar12 + 9) = (char)uVar7;
    *(char *)((int)puVar12 + 10) =
         (char)((uVar7 * (*(byte *)((int)in_stack_00000018 + 7) + 1) >> 4) *
                ((uint)*(byte *)((int)puVar12 + 2) + (uint)*(byte *)((int)puVar12 + 3)) >> 9);
    uStack00000010 = uStack00000010 & 0x10;
    if (uStack00000010 != 0) {
      in_stack_0000000c = (char *)(iVar9 + 0x10 + *(int *)(iVar9 + 8));
      uStack00000010 = *(int *)(iVar9 + 0xc) - *(int *)(iVar9 + 8);
    }
    uVar7 = puVar12[6];
    pcVar10 = (char *)puVar12[10];
    iVar9 = (uint)*(byte *)((int)puVar12 + 10) * 0x10000;
    uVar6 = uVar7;
    puVar13 = in_stack_00000008;
    uVar16 = unaff_r8;
    if ((*(byte *)((int)puVar12 + 1) & 8) == 0) {
      in_lr = puVar12[7];
      iVar5 = puVar12[8];
      uVar6 = (uint)*pcVar10;
      pcVar10 = pcVar10 + 1;
      iVar8 = (int)*pcVar10 - uVar6;
      do {
        uVar15 = *puVar13;
        uVar17 = uVar7;
        do {
          puVar14 = puVar13;
          uVar15 = (iVar9 * (uVar6 + ((int)(in_lr * iVar8) >> 0x17)) & 0xff00ffff) +
                   (uVar15 >> 8 | uVar15 << 0x18);
          in_lr = in_lr + iVar4 * iVar5;
          uVar1 = in_lr >> 0x17;
          uVar7 = uVar17;
          if (uVar1 != 0) {
            in_lr = in_lr & 0xc07fffff;
            uVar7 = uVar17 - uVar1;
            if (uVar7 == 0 || (int)uVar17 < (int)uVar1) {
              if (uStack00000010 == 0) {
                uStack00000010 = 0;
                goto LAB_080c6aec;
              }
              iVar18 = -uVar7;
              while( true ) {
                bVar20 = SCARRY4(uStack00000010,uVar7);
                uVar7 = uStack00000010 + uVar7;
                bVar19 = uVar7 == 0;
                uVar6 = uStack00000010;
                pcVar10 = in_stack_0000000c;
                if (!bVar19 && (int)uVar7 < 0 == bVar20) break;
                iVar18 = iVar18 - uStack00000010;
              }
            }
            else {
              iVar18 = uVar1 - 1;
              bVar19 = iVar18 == 0;
              if (bVar19) {
                uVar6 = uVar6 + iVar8;
              }
            }
            if (!bVar19) {
              pcVar10 = pcVar10 + iVar18;
              uVar6 = (uint)*pcVar10;
            }
            pcVar10 = pcVar10 + 1;
            iVar8 = (int)*pcVar10 - uVar6;
          }
          uVar17 = uVar7;
          puVar13 = puVar14 + 0x10000000;
        } while (puVar14 < (uint *)0xc0000000);
        puVar13 = puVar14 + 0x10000001;
        puVar14[0x10000000] = uVar15;
        uVar17 = uVar16 - 4;
        bVar19 = 3 < (int)uVar16;
        uVar16 = uVar17;
      } while (uVar17 != 0 && bVar19);
      pcVar10 = pcVar10 + -1;
      puVar12[7] = in_lr;
    }
    else {
      do {
        uVar7 = uVar6;
        if (4 < (int)uVar6) {
          uVar7 = uVar6 - uVar16;
          if (uVar7 != 0 && (int)uVar16 <= (int)uVar6) {
            in_lr = 0;
          }
          if (uVar7 == 0 || (int)uVar6 < (int)uVar16) {
            uVar6 = (uVar7 + uVar16) - 4;
            in_lr = uVar16 - uVar6;
            uVar7 = uVar7 + uVar16 & 3;
            uVar16 = uVar6;
            if (uVar7 == 0) {
              uVar7 = 4;
            }
          }
          do {
            uVar6 = *puVar13;
            pcVar11 = pcVar10;
            do {
              puVar14 = puVar13;
              pcVar10 = pcVar11 + 1;
              uVar6 = (iVar9 * *pcVar11 & 0xff00ffffU) + (uVar6 >> 8 | uVar6 << 0x18);
              pcVar11 = pcVar10;
              puVar13 = puVar14 + 0x10000000;
            } while (puVar14 < (uint *)0xc0000000);
            puVar13 = puVar14 + 0x10000001;
            puVar14[0x10000000] = uVar6;
            uVar6 = uVar16 - 4;
            bVar19 = 3 < (int)uVar16;
            uVar16 = uVar6;
          } while (uVar6 != 0 && bVar19);
          uVar16 = uVar6 + in_lr;
          if (uVar16 == 0) break;
        }
        uVar15 = *puVar13;
        do {
          puVar14 = puVar13;
          uVar15 = (iVar9 * *pcVar10 & 0xff00ffffU) + (uVar15 >> 8 | uVar15 << 0x18);
          uVar7 = uVar7 - 1;
          pcVar10 = pcVar10 + 1;
          if ((uVar7 == 0) &&
             (uVar7 = uStack00000010, pcVar10 = in_stack_0000000c, uStack00000010 == 0))
          goto LAB_080c6aec;
          puVar13 = puVar14 + 0x10000000;
        } while (puVar14 < (uint *)0xc0000000);
        puVar13 = puVar14 + 0x10000001;
        puVar14[0x10000000] = uVar15;
        uVar17 = uVar16 - 4;
        bVar19 = 3 < (int)uVar16;
        uVar6 = uVar7;
        uVar16 = uVar17;
      } while (uVar17 != 0 && bVar19);
    }
    puVar12[6] = uVar7;
    puVar12[10] = pcVar10;
  }
  goto sub_080C6BA0;
LAB_080c6aec:
  *(char *)puVar12 = (char)uStack00000010;
  uVar7 = (3 - ((uint)puVar14 >> 0x1e)) * 8 & 0x1f;
  *(uint *)((uint)puVar14 & 0x3fffffff) = uVar15 >> uVar7 | uVar15 << 0x20 - uVar7;
sub_080C6BA0:
  if (uStack00000004 - 1 == 0 || (int)uStack00000004 < 1) goto LAB_080c6baa;
  puVar12 = puVar12 + 0x10;
  uStack00000004 = uStack00000004 - 1;
  goto LAB_080c6908;
}

