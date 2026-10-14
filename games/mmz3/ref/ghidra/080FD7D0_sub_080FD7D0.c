// sub_080FD7D0 at 0x080FD7D0 (thumb)

undefined4 sub_080FD7D0(void)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  byte *extraout_r1;
  uint uVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  uint uVar13;
  byte *pbVar14;
  byte bVar15;
  undefined4 in_lr;
  uint local_3c;
  byte *local_34;
  byte *local_30;
  byte *local_2c;
  
  iVar1 = DAT_03007ff0;
  if (*(char *)(DAT_03007ff0 + 10) == '\0') {
    *(undefined *)(DAT_03007ff0 + 10) = 0xe;
  }
  else {
    *(char *)(DAT_03007ff0 + 10) = *(char *)(DAT_03007ff0 + 10) + -1;
  }
  uVar13 = 1;
  pbVar12 = *(byte **)(iVar1 + 0x1c);
  do {
    bVar2 = *pbVar12;
    pbVar8 = (byte *)(uint)bVar2;
    if ((bVar2 & 199) != 0) {
      if (uVar13 == 2) {
        puVar3 = &DAT_04000061;
        local_34 = &DAT_04000061;
        pbVar14 = &UNK_04000068;
        local_30 = &DAT_04000069;
LAB_080fd888:
        local_2c = puVar3 + 0xb;
        pbVar10 = local_30 + 4;
      }
      else if ((int)uVar13 < 3) {
        if (uVar13 != 1) {
LAB_080fd880:
          puVar3 = &DAT_04000071;
          local_34 = &DAT_04000071;
          pbVar14 = &DAT_04000078;
          local_30 = &DAT_04000079;
          goto LAB_080fd888;
        }
        local_34 = &DAT_04000060;
        pbVar14 = &UNK_04000062;
        local_30 = &DAT_04000063;
        local_2c = &DAT_04000064;
        pbVar10 = &DAT_04000065;
      }
      else {
        if (uVar13 != 3) goto LAB_080fd880;
        local_34 = &DAT_04000070;
        pbVar14 = &UNK_04000072;
        local_30 = &DAT_04000073;
        local_2c = &DAT_04000074;
        pbVar10 = &DAT_04000075;
      }
      local_3c = (uint)*(byte *)(iVar1 + 10);
      bVar15 = *local_30;
      pbVar4 = (byte *)(uint)bVar15;
      if ((bVar2 & 0x80) == 0) {
        if ((bVar2 & 4) == 0) {
          pbVar14 = pbVar12 + 0x40;
          if ((bVar2 & 0x40) == 0) goto LAB_080fd9f8;
          if ((bVar2 & 3) == 0) goto LAB_080fd9f8;
          pbVar14 = (byte *)0x0;
          *pbVar12 = bVar2 & 0xfc;
          pbVar12[0xb] = pbVar12[7];
          if (pbVar12[7] == 0) {
LAB_080fda2a:
            iVar5 = (uint)pbVar12[10] * (uint)pbVar12[0xc] + 0xff;
            pbVar8 = (byte *)0x0;
            pbVar12[9] = (byte)((uint)iVar5 >> 8);
            if ((iVar5 >> 8 & 0xffU) != 0) {
              *pbVar12 = *pbVar12 | 4;
              pbVar12[0x1d] = pbVar12[0x1d] | 1;
              if (uVar13 != 3) {
                bVar15 = 8;
              }
              goto LAB_080fdafe;
            }
            goto LAB_080fd9aa;
          }
          pbVar8 = (byte *)(uint)pbVar12[0x1d];
          pbVar12[0x1d] = pbVar12[0x1d] | 1;
          if (uVar13 != 3) {
            pbVar14 = (byte *)(uint)pbVar12[7];
            pbVar4 = pbVar14;
          }
          goto LAB_080fdaec;
        }
        bVar2 = pbVar12[0xd];
        pbVar12[0xd] = (byte)(bVar2 - 1);
        pbVar8 = (byte *)(uVar13 + 1);
        if (0 < (int)((bVar2 - 1) * 0x1000000)) goto LAB_080fdafe;
LAB_080fd9aa:
        sub_080FD718(uVar13 & 0xff,pbVar8);
        *pbVar12 = 0;
      }
      else {
        pbVar8 = pbVar12 + 0x40;
        if ((bVar2 & 0x40) != 0) goto LAB_080fd9aa;
        *pbVar12 = 3;
        pbVar12[0x1d] = 3;
        sub_080FD768(pbVar12);
        if (uVar13 == 2) {
LAB_080fd8f8:
          *pbVar14 = pbVar12[0x1e] + (char)*(undefined4 *)(pbVar12 + 0x24) * '@';
LAB_080fd958:
          pbVar4 = (byte *)(pbVar12[4] + 8);
          bVar2 = pbVar12[0x1e];
          if (bVar2 != 0) {
            bVar2 = 0x40;
          }
LAB_080fd966:
          pbVar12[0x1a] = bVar2;
        }
        else {
          if ((int)uVar13 < 3) {
            if (uVar13 == 1) {
              *local_34 = pbVar12[0x1f];
              goto LAB_080fd8f8;
            }
LAB_080fd94c:
            *pbVar14 = pbVar12[0x1e];
            *local_2c = (byte)(*(int *)(pbVar12 + 0x24) << 3);
            goto LAB_080fd958;
          }
          if (uVar13 != 3) goto LAB_080fd94c;
          if (*(int *)(pbVar12 + 0x24) != *(int *)(pbVar12 + 0x28)) {
            *local_34 = 0x40;
            puVar11 = *(undefined4 **)(pbVar12 + 0x24);
            DAT_04000090 = *puVar11;
            DAT_04000094 = puVar11[1];
            DAT_04000098 = puVar11[2];
            DAT_0400009c = puVar11[3];
            *(undefined4 **)(pbVar12 + 0x28) = puVar11;
          }
          *local_34 = bVar2 & 0x40;
          *pbVar14 = pbVar12[0x1e];
          if (pbVar12[0x1e] != 0) {
            bVar2 = 0xc0;
            goto LAB_080fd966;
          }
          pbVar12[0x1a] = 0x80;
        }
        pbVar14 = (byte *)0x0;
        pbVar12[0xb] = pbVar12[4];
        pbVar8 = pbVar12 + 0x40;
        if (pbVar12[4] == 0) goto LAB_080fdabe;
        pbVar12[9] = 0;
LAB_080fdaec:
        bVar15 = (byte)pbVar4;
        pbVar12[0xb] = pbVar12[0xb] - 1;
        if (local_3c == 0) {
          local_3c = 0xffffffff;
LAB_080fd9f8:
          bVar15 = (byte)pbVar4;
          if (pbVar12[0xb] == 0) {
            if (uVar13 == 3) {
              pbVar8 = (byte *)(uint)pbVar12[0x1d];
              pbVar12[0x1d] = pbVar12[0x1d] | 1;
            }
            sub_080FD768(pbVar12,pbVar8,pbVar14);
            pbVar14 = (byte *)(uint)*pbVar12;
            if ((*pbVar12 & 3) == 0) {
              bVar2 = pbVar12[9];
              pbVar12[9] = (byte)(bVar2 - 1);
              pbVar8 = (byte *)0xff;
              if (0 < (int)((bVar2 - 1) * 0x1000000)) {
                bVar2 = pbVar12[7];
                goto LAB_080fdaea;
              }
              goto LAB_080fda2a;
            }
            pbVar8 = extraout_r1;
            if (((uint)pbVar14 & 3) == 1) {
LAB_080fda62:
              pbVar12[9] = pbVar12[0x19];
              bVar2 = 7;
            }
            else if (((uint)pbVar14 & 3) == 2) {
              bVar2 = pbVar12[9];
              pbVar12[9] = (byte)(bVar2 - 1);
              iVar6 = (bVar2 - 1) * 0x1000000;
              pbVar14 = (byte *)(uint)pbVar12[0x19];
              pbVar8 = (byte *)((int)pbVar14 * 0x1000000);
              iVar5 = iVar6 + (int)pbVar14 * -0x1000000;
              if (iVar5 == 0 || iVar5 < 0 != SBORROW4(iVar6,(int)pbVar8)) {
LAB_080fda82:
                bVar15 = (byte)pbVar4;
                if (pbVar12[6] != 0) {
                  *pbVar12 = *pbVar12 - 1;
                  pbVar14 = (byte *)(uint)pbVar12[0x1d];
                  pbVar12[0x1d] = pbVar12[0x1d] | 1;
                  if (uVar13 != 3) {
                    pbVar4 = &SupervisorCall;
                  }
                  goto LAB_080fda62;
                }
                *pbVar12 = *pbVar12 & 0xfc;
                goto LAB_080fda2a;
              }
              bVar2 = pbVar12[5];
            }
            else {
              bVar2 = pbVar12[9];
              pbVar12[9] = (byte)(bVar2 + 1);
              pbVar8 = (byte *)0xff;
              pbVar14 = (byte *)(uint)pbVar12[10];
              if (pbVar14 <= (byte *)(bVar2 + 1 & 0xff)) {
LAB_080fdabe:
                pbVar14 = (byte *)0x0;
                *pbVar12 = *pbVar12 - 1;
                pbVar8 = (byte *)(uint)pbVar12[5];
                pbVar12[0xb] = pbVar12[5];
                if (pbVar8 == (byte *)0x0) goto LAB_080fda82;
                pbVar8 = (byte *)(uint)pbVar12[0x1d];
                pbVar12[0x1d] = pbVar12[0x1d] | 1;
                pbVar12[9] = pbVar12[10];
                if (uVar13 != 3) {
                  pbVar14 = (byte *)(uint)pbVar12[5];
                  pbVar4 = pbVar14;
                }
                goto LAB_080fdaec;
              }
              bVar2 = pbVar12[4];
            }
LAB_080fdaea:
            pbVar12[0xb] = bVar2;
          }
          goto LAB_080fdaec;
        }
LAB_080fdafe:
        if ((pbVar12[0x1d] & 2) != 0) {
          if (((int)uVar13 < 4) && ((pbVar12[1] & 8) != 0)) {
            bVar2 = DAT_04000089;
            if (bVar2 < 0x40) {
              uVar7 = *(int *)(pbVar12 + 0x20) + 2;
              uVar9 = 0x7fc;
            }
            else {
              if (0x7f < bVar2) goto LAB_080fdb3e;
              uVar7 = *(int *)(pbVar12 + 0x20) + 1;
              uVar9 = 0x7fe;
            }
            *(uint *)(pbVar12 + 0x20) = uVar7 & uVar9;
          }
LAB_080fdb3e:
          if (uVar13 == 4) {
            *local_2c = (byte)*(undefined4 *)(pbVar12 + 0x20) | *local_2c & 8;
          }
          else {
            *local_2c = (byte)*(undefined4 *)(pbVar12 + 0x20);
          }
          bVar2 = pbVar12[0x21] + (pbVar12[0x1a] & 0xc0);
          pbVar12[0x1a] = bVar2;
          *pbVar10 = bVar2;
        }
        if ((pbVar12[0x1d] & 1) != 0) {
          bVar2 = DAT_04000081;
          DAT_04000081 = bVar2 & ~pbVar12[0x1c] | pbVar12[0x1b];
          if (uVar13 == 3) {
            *local_30 = (&DAT_0810ad08)[pbVar12[9]];
            if ((pbVar12[0x1a] & 0x80) != 0) {
              *local_34 = 0x80;
              *pbVar10 = pbVar12[0x1a];
              pbVar12[0x1a] = pbVar12[0x1a] & 0x7f;
            }
          }
          else {
            *local_30 = pbVar12[9] * '\x10' + (bVar15 & 0xf);
            *pbVar10 = pbVar12[0x1a] | 0x80;
            if ((uVar13 == 1) && ((*local_34 & 8) == 0)) {
              *pbVar10 = pbVar12[0x1a] | 0x80;
            }
          }
        }
      }
      pbVar12[0x1d] = 0;
    }
    uVar13 = uVar13 + 1;
    pbVar12 = pbVar12 + 0x40;
    if (4 < (int)uVar13) {
      return in_lr;
    }
  } while( true );
}

