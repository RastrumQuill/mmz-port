// sub_08126A24 at 0x08126A24 (thumb)

void sub_08126A24(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar11;
  
  if (*(int *)(param_1 + 0x34) != 0x68736d53) {
    return;
  }
  *(undefined4 *)(param_1 + 0x34) = 0x68736d54;
  if (*(int *)(param_1 + 0x38) != 0) {
    sub_08126C7C(*(undefined4 *)(param_1 + 0x3c));
  }
  iVar1 = DAT_03007ff0;
  if ((*(int *)(param_1 + 4) < 0) || (sub_081278C8(param_1), *(int *)(param_1 + 4) < 0)) {
LAB_08126c6c:
    *(undefined4 *)(param_1 + 0x34) = 0x68736d53;
                    /* WARNING: Could not recover jumptable at 0x08126c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(unaff_r8,unaff_r9,unaff_r10);
    return;
  }
  uVar2 = (uint)*(ushort *)(param_1 + 0x22) + (uint)*(ushort *)(param_1 + 0x20);
LAB_08126bbc:
  *(short *)(param_1 + 0x22) = (short)uVar2;
  if (0x95 < uVar2) {
    pbVar10 = *(byte **)(param_1 + 0x2c);
    uVar7 = 1;
    uVar8 = 0;
    uVar2 = (uint)*(byte *)(param_1 + 8);
    do {
      if ((*pbVar10 & 0x80) != 0) {
        uVar8 = uVar8 | uVar7;
        for (pbVar9 = *(byte **)(pbVar10 + 0x20); pbVar9 != (byte *)0x0;
            pbVar9 = *(byte **)(pbVar9 + 0x34)) {
          if ((*pbVar9 & 199) == 0) {
            sub_0812740C(pbVar9);
          }
          else if ((pbVar9[0x10] != 0) &&
                  (iVar3 = pbVar9[0x10] - 1, pbVar9[0x10] = (byte)iVar3, iVar3 == 0)) {
            *pbVar9 = *pbVar9 | 0x40;
          }
        }
        if ((*pbVar10 & 0x40) != 0) {
          sub_08127420(pbVar10);
          *pbVar10 = 0x80;
          pbVar10[0xf] = 2;
          pbVar10[0x13] = 0x40;
          pbVar10[0x19] = 0x16;
          pbVar10[0x24] = 1;
        }
        do {
          while( true ) {
            while( true ) {
              if (pbVar10[1] != 0) {
                pbVar10[1] = pbVar10[1] - 1;
                if ((pbVar10[0x19] != 0) && (pbVar10[0x17] != 0)) {
                  if (pbVar10[0x1c] == 0) {
                    iVar3 = (uint)pbVar10[0x1a] + (uint)pbVar10[0x19];
                    pbVar10[0x1a] = (byte)iVar3;
                    if ((iVar3 + -0x40) * 0x1000000 < 0) {
                      iVar3 = (int)(char)(byte)iVar3;
                    }
                    else {
                      iVar3 = 0x80 - iVar3;
                    }
                    uVar6 = (int)(iVar3 * (uint)pbVar10[0x17]) >> 6;
                    if (((pbVar10[0x16] ^ uVar6) & 0xff) != 0) {
                      pbVar10[0x16] = (byte)uVar6;
                      if (pbVar10[0x18] == 0) {
                        bVar5 = 0xc;
                      }
                      else {
                        bVar5 = 3;
                      }
                      *pbVar10 = *pbVar10 | bVar5;
                    }
                  }
                  else {
                    pbVar10[0x1c] = pbVar10[0x1c] - 1;
                  }
                }
                goto LAB_08126b98;
              }
              pbVar9 = *(byte **)(pbVar10 + 0x40);
              bVar5 = *pbVar9;
              uVar6 = (uint)bVar5;
              if (uVar6 < 0x80) {
                uVar6 = (uint)pbVar10[7];
              }
              else {
                pbVar9 = pbVar9 + 1;
                *(byte **)(pbVar10 + 0x40) = pbVar9;
                if (0xbc < uVar6) {
                  pbVar10[7] = bVar5;
                }
              }
              if (uVar6 < 0xcf) break;
              sub_08126C7C(uVar6 - 0xcf,param_1,pbVar10,*(undefined4 *)(iVar1 + 0x38));
            }
            if (0xb0 < uVar6) break;
            pbVar10[1] = (&DAT_081366b0)[uVar6];
          }
          *(char *)(param_1 + 10) = (char)(uVar6 - 0xb1);
          sub_08126C7C(param_1,pbVar10,pbVar9,
                       *(undefined4 *)(*(int *)(iVar1 + 0x34) + (uVar6 - 0xb1) * 4));
        } while (*pbVar10 != 0);
      }
LAB_08126b98:
      if (uVar2 - 1 == 0 || (int)uVar2 < 1) goto LAB_08126ba4;
      pbVar10 = pbVar10 + 0x50;
      uVar7 = uVar7 << 1;
      uVar2 = uVar2 - 1;
    } while( true );
  }
  pbVar10 = *(byte **)(param_1 + 0x2c);
  uVar2 = (uint)*(byte *)(param_1 + 8);
  do {
    if (((*pbVar10 & 0x80) != 0) && ((*pbVar10 & 0xf) != 0)) {
      sub_08127990(param_1,pbVar10);
      for (pbVar9 = *(byte **)(pbVar10 + 0x20); pbVar9 != (byte *)0x0;
          pbVar9 = *(byte **)(pbVar9 + 0x34)) {
        if ((*pbVar9 & 199) == 0) {
          sub_0812740C(pbVar9);
        }
        else {
          bVar5 = pbVar9[1];
          if (((*pbVar10 & 3) != 0) && (sub_08126CD0(), (bVar5 & 7) != 0)) {
            pbVar9[0x1d] = pbVar9[0x1d] | 1;
          }
          if ((*pbVar10 & 0xc) != 0) {
            iVar3 = (uint)pbVar9[8] + (int)(char)pbVar10[8];
            if (iVar3 < 0) {
              iVar3 = 0;
            }
            if ((bVar5 & 7) == 0) {
              uVar4 = sub_08126F90(*(undefined4 *)(pbVar9 + 0x24),iVar3,pbVar10[9]);
              *(undefined4 *)(pbVar9 + 0x20) = uVar4;
            }
            else {
              uVar4 = sub_08126C7C(bVar5 & 7,iVar3,pbVar10[9],*(undefined4 *)(iVar1 + 0x30));
              *(undefined4 *)(pbVar9 + 0x20) = uVar4;
              pbVar9[0x1d] = pbVar9[0x1d] | 2;
            }
          }
        }
      }
      *pbVar10 = *pbVar10 & 0xf0;
    }
  } while ((uVar2 - 1 != 0 && 0 < (int)uVar2) &&
          (bVar11 = SCARRY4((int)pbVar10,0x50), pbVar10 = pbVar10 + 0x50, uVar2 = uVar2 - 1,
          pbVar10 != (byte *)0x0 && (int)pbVar10 < 0 == bVar11));
  goto LAB_08126c6c;
LAB_08126ba4:
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (uVar8 == 0) {
    *(undefined4 *)(param_1 + 4) = 0x80000000;
    goto LAB_08126c6c;
  }
  *(uint *)(param_1 + 4) = uVar8;
  uVar2 = *(ushort *)(param_1 + 0x22) - 0x96;
  goto LAB_08126bbc;
}

