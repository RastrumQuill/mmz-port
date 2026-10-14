// sub_080FC92C at 0x080FC92C (thumb)

undefined8 sub_080FC92C(int param_1,int param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  byte *pbVar5;
  byte bVar6;
  byte bVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  byte *pbVar14;
  byte *pbVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 unaff_r9;
  undefined4 in_lr;
  bool bVar18;
  
  iVar4 = DAT_03007ff0;
  param_3[4] = (&DAT_0810ad18)[param_1];
  pbVar8 = *(byte **)(param_3 + 0x40);
  if (*pbVar8 < 0x80) {
    param_3[5] = *pbVar8;
    pbVar9 = pbVar8 + 1;
    if (*pbVar9 < 0x80) {
      param_3[6] = *pbVar9;
      pbVar9 = pbVar8 + 2;
      if (*pbVar9 < 0x80) {
        param_3[4] = param_3[4] + *pbVar9;
        pbVar9 = pbVar8 + 3;
      }
    }
    *(byte **)(param_3 + 0x40) = pbVar9;
  }
  bVar6 = 0;
  pbVar8 = param_3 + 0x24;
  bVar1 = *pbVar8;
  if ((bVar1 & 0xc0) == 0) {
    bVar7 = param_3[5];
  }
  else {
    bVar7 = param_3[5];
    uVar10 = (uint)bVar7;
    if ((bVar1 & 0x40) != 0) {
      uVar10 = (uint)*(byte *)(*(int *)(param_3 + 0x2c) + uVar10);
    }
    pbVar8 = (byte *)(uVar10 * 0xc + *(int *)(param_3 + 0x28));
    if ((*pbVar8 & 0xc0) != 0) goto LAB_080fcb12;
    if ((bVar1 & 0x80) != 0) {
      if ((pbVar8[3] & 0x80) != 0) {
        bVar6 = (pbVar8[3] + 0x40) * '\x02';
      }
      bVar7 = pbVar8[1];
    }
  }
  uVar10 = (uint)param_3[0x1d] + (uint)*(byte *)(param_2 + 9);
  if (0xff < uVar10) {
    uVar10 = 0xff;
  }
  bVar1 = *pbVar8;
  if ((bVar1 & 7) == 0) {
    bVar3 = false;
    pbVar15 = (byte *)(iVar4 + 0x50);
    uVar11 = (uint)*(byte *)(iVar4 + 6);
    uVar16 = uVar10;
    pbVar9 = param_3;
    pbVar5 = (byte *)0x0;
    do {
      pbVar14 = pbVar15;
      if ((*pbVar15 & 199) == 0) goto LAB_080fca6c;
      pbVar14 = pbVar5;
      if ((*pbVar15 & 0x40) == 0) {
        if (!bVar3) goto LAB_080fca44;
        goto LAB_080fca60;
      }
      if (bVar3) {
LAB_080fca44:
        uVar12 = (uint)pbVar15[0x13];
        if (uVar12 < uVar16) {
          uVar16 = uVar12;
          pbVar5 = *(byte **)(pbVar15 + 0x2c);
          goto LAB_080fca5e;
        }
        if (uVar12 <= uVar16) {
          pbVar5 = *(byte **)(pbVar15 + 0x2c);
          bVar18 = pbVar9 <= pbVar5;
          if ((pbVar9 < pbVar5) || (pbVar5 = pbVar9, bVar18)) goto LAB_080fca5e;
        }
      }
      else {
        bVar3 = true;
        uVar16 = (uint)pbVar15[0x13];
        pbVar5 = *(byte **)(pbVar15 + 0x2c);
LAB_080fca5e:
        pbVar9 = pbVar5;
        pbVar14 = pbVar15;
      }
LAB_080fca60:
      pbVar15 = pbVar15 + 0x40;
      uVar12 = uVar11 - 1;
      bVar18 = 0 < (int)uVar11;
      uVar11 = uVar12;
      pbVar5 = pbVar14;
    } while (uVar12 != 0 && bVar18);
    if (pbVar14 == (byte *)0x0) goto LAB_080fcb12;
  }
  else {
    if (*(int *)(iVar4 + 0x1c) == 0) goto LAB_080fcb12;
    pbVar14 = (byte *)(*(int *)(iVar4 + 0x1c) + ((bVar1 & 7) - 1) * 0x40);
    if (((((*pbVar14 & 199) != 0) && ((*pbVar14 & 0x40) == 0)) && (uVar10 <= pbVar14[0x13])) &&
       ((pbVar14[0x13] != uVar10 || (*(byte **)(pbVar14 + 0x2c) < param_3)))) goto LAB_080fcb12;
  }
LAB_080fca6c:
  sub_080FD038(pbVar14);
  *(undefined4 *)(pbVar14 + 0x30) = 0;
  iVar13 = *(int *)(param_3 + 0x20);
  *(int *)(pbVar14 + 0x34) = iVar13;
  if (iVar13 != 0) {
    *(byte **)(iVar13 + 0x30) = pbVar14;
  }
  *(byte **)(param_3 + 0x20) = pbVar14;
  *(byte **)(pbVar14 + 0x2c) = param_3;
  bVar2 = param_3[0x1b];
  param_3[0x1c] = bVar2;
  if (bVar2 != 0) {
    sub_080FCB6C(bVar2,param_3);
  }
  sub_080FD5BC(param_2,param_3);
  *(undefined4 *)(pbVar14 + 0x10) = *(undefined4 *)(param_3 + 4);
  pbVar14[0x13] = (byte)uVar10;
  pbVar14[8] = bVar7;
  pbVar14[0x14] = bVar6;
  pbVar14[1] = *pbVar8;
  uVar17 = *(undefined4 *)(pbVar8 + 4);
  *(undefined4 *)(pbVar14 + 0x24) = uVar17;
  *(undefined4 *)(pbVar14 + 4) = *(undefined4 *)(pbVar8 + 8);
  *(undefined2 *)(pbVar14 + 0xc) = *(undefined2 *)(param_3 + 0x1e);
  sub_080FC8FC();
  iVar13 = (uint)pbVar14[8] + (int)(char)param_3[8];
  if (iVar13 < 0) {
    iVar13 = 0;
  }
  if ((bVar1 & 7) == 0) {
    uVar17 = sub_080FCBBC(uVar17,iVar13,param_3[9]);
  }
  else {
    pbVar14[0x1e] = pbVar8[2];
    bVar6 = pbVar8[3];
    if (((bVar6 & 0x80) != 0) || ((bVar6 & 0x70) == 0)) {
      bVar6 = 8;
    }
    pbVar14[0x1f] = bVar6;
    uVar17 = sub_080FC8A8(bVar1 & 7,iVar13,param_3[9],*(undefined4 *)(iVar4 + 0x30));
  }
  *(undefined4 *)(pbVar14 + 0x20) = uVar17;
  *pbVar14 = 0x80;
  *param_3 = *param_3 & 0xf0;
LAB_080fcb12:
  return CONCAT44(unaff_r9,in_lr);
}

