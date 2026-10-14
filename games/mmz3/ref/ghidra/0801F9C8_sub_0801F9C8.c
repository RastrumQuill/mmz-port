// sub_0801F9C8 at 0x0801F9C8 (thumb)

void sub_0801F9C8(int param_1)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  byte *pbVar10;
  char *pcVar11;
  code *UNRECOVERED_JUMPTABLE;
  
  cVar2 = DAT_020301a2;
  iVar9 = *(int *)(param_1 + 0x20);
  pcVar11 = (char *)(param_1 + 0x17c);
  cVar3 = *pcVar11;
  if (cVar3 == '\0') {
    DAT_020301a8 = DAT_020301a8 | 1;
    if (DAT_020301a2 == '\0') {
      if ((DAT_02030104 & 0x20) == 0) {
        sub_08021D7C(&DAT_020301b0,&DAT_083540a0);
      }
      else {
        sub_08021D7C(&DAT_020301b0,&DAT_08354758);
      }
      sub_0801A4CC(1);
      *(undefined *)(param_1 + 0x17c) = 1;
                    /* WARNING: Subroutine does not return */
      switchD_0801fc06::caseD_1();
    }
    if (DAT_020301a2 != '\x01') {
      if (DAT_020301a2 == '\x02') {
        puVar6 = &DAT_08354188;
LAB_0801fa76:
        sub_08021D7C(&DAT_020301b0,puVar6);
        *pcVar11 = cVar2;
                    /* WARNING: Subroutine does not return */
        switchD_0801fc06::caseD_1();
      }
      if (DAT_020301a2 == '\x03') {
        puVar6 = &DAT_083541e0;
        goto LAB_0801fa76;
      }
      if (DAT_020301a2 != '\x04') {
        if (DAT_020301a2 == '\x05') {
          sub_08021D7C(&DAT_020301b0,&DAT_083543b0);
          *pcVar11 = '\a';
                    /* WARNING: Subroutine does not return */
          switchD_0801fc06::caseD_1();
        }
        if (DAT_020301a2 != '\x06') goto code_r0x0802025a;
        sub_08021D7C(&DAT_020301b0,&DAT_083545e8);
        goto LAB_080201ea;
      }
      sub_08021D7C(&DAT_020301b0,&DAT_08354358);
LAB_08020094:
      *pcVar11 = '\x05';
      goto code_r0x0802025a;
    }
    sub_08021D7C(&DAT_020301b0,&DAT_08354128);
LAB_0801fadc:
    sub_0801A4CC(2);
    *pcVar11 = '\x02';
    goto code_r0x0802025a;
  }
  if (cVar3 == '\x01') goto LAB_0801fadc;
  if (cVar3 == '\x02') {
    iVar7 = *(int *)(iVar9 + 0x54);
    if (iVar7 < 0x52000) {
      if (*(int *)(iVar9 + 0x58) < 0x1a001) {
LAB_0801fbb8:
        DAT_020302e4 = 0;
        DAT_020302e8 = 0x3c0000;
      }
      else {
        iVar5 = 0x3bfff;
        if (iVar7 < 0x3c000) {
LAB_0801fb8c:
          DAT_020302e8 = iVar5 + 1;
        }
        else {
          DAT_020302e4 = 0x3c000;
        }
      }
    }
    else if (iVar7 < 0x6b000) {
      if (*(int *)(iVar9 + 0x58) < 0x1c001) goto LAB_0801fbb8;
      iVar5 = 0x61fff;
      if (iVar7 < 0x62000) goto LAB_0801fb8c;
      DAT_020302e4 = 0x62000;
    }
    else if (iVar7 < 0x83000) {
      if (*(int *)(iVar9 + 0x58) < 0x1c001) goto LAB_0801fbb8;
      iVar5 = 0x7afff;
      if (iVar7 < 0x7b000) goto LAB_0801fb8c;
      DAT_020302e4 = 0x7b000;
    }
    else if (iVar7 < 0xb4000) {
      if (0x16ffe < *(int *)(iVar9 + 0x58) - 0x1b001U) goto LAB_0801fbb8;
      iVar5 = 0xaafff;
      if (iVar7 < 0xab000) goto LAB_0801fb8c;
      DAT_020302e4 = 0xab000;
    }
    if (0xd1fff < *(int *)(iVar9 + 0x54)) {
      sub_0801A4CC(3);
      *(undefined *)(param_1 + 0x17c) = 3;
    }
    goto code_r0x0802025a;
  }
  if (cVar3 != '\x03') {
    if (cVar3 != '\x04') {
      if (cVar3 == '\x05') {
        if (0x12afff < *(int *)(iVar9 + 0x54)) {
          if ((DAT_02030104 & 0x20) == 0) {
            if (DAT_02030308 != 0xffffffff) {
              sub_080046A4(DAT_02030308 & 0xffff);
              DAT_02030308 = 0xffffffff;
            }
          }
          else {
            DAT_030032e1 = DAT_030032e1 | 2;
            *pcVar11 = '\x06';
          }
        }
        if (0x12cfff < *(int *)(iVar9 + 0x54)) {
          DAT_030032e1 = DAT_030032e1 | 2;
          if (DAT_02030308 != 0xa1) {
            if (DAT_02030308 != 0xffffffff) {
              sub_080046A4(DAT_02030308 & 0xffff);
              DAT_02030308 = 0xffffffff;
            }
            sub_08004694(0xa1);
            DAT_02030308 = 0xa1;
          }
          *(undefined *)(param_1 + 0x17c) = 6;
        }
        goto code_r0x0802025a;
      }
      if ((cVar3 == '\x06') && (0x13afff < *(int *)(iVar9 + 0x54))) {
        DAT_030032e1 = 0;
        if ((DAT_02030104 & 0x20) == 0) {
          sub_08021D7C(&DAT_020301b0,&DAT_08354408);
        }
        else {
          sub_08021D7C(&DAT_020301b0,&DAT_083547d0);
          DAT_020301a8 = DAT_020301a8 & 0xfffe;
        }
        sub_0801A4CC(6);
        *(undefined *)(param_1 + 0x17c) = 8;
        goto code_r0x0802025a;
      }
      if ((*(char *)(param_1 + 0x17c) != '\a') || (*(int *)(iVar9 + 0x54) < 0x13b000)) {
        cVar3 = *(char *)(param_1 + 0x17c);
        if (cVar3 == '\b') {
          sub_0801A4CC(5);
          cVar3 = '\t';
        }
        else {
          if ((cVar3 != '\t') || ((DAT_020301a8 & 0x10) == 0)) goto code_r0x0802025a;
          DAT_030032e0 = DAT_030032e0 | 0x80;
          DAT_030032e1 = DAT_030032e1 | 2;
          sub_08021D7C(&DAT_020301b0,&DAT_08354698);
          DAT_020301b2 = DAT_020301b2 & 0xfd;
          DAT_020301a8 = DAT_020301a8 & 0xffef | 4;
          cVar3 = '\x06';
        }
        *(char *)(param_1 + 0x17c) = cVar3;
        goto code_r0x0802025a;
      }
      sub_08021D7C(&DAT_020301b0,&DAT_08354518);
      sub_0801A4CC(6);
LAB_080201ea:
      *(undefined *)(param_1 + 0x17c) = 8;
      goto code_r0x0802025a;
    }
    if (*(int *)(iVar9 + 0x54) < 0xff000) goto code_r0x0802025a;
    sub_0801A4CC(4);
    *(undefined *)(param_1 + 0x17d) = 0;
    goto LAB_08020094;
  }
  switch(DAT_0202f4a4) {
  case '\0':
    if (0xe9fff < *(int *)(iVar9 + 0x54)) {
      DAT_020302e4 = 0xe3000;
      DAT_020302e8 = 0xfd000;
      DAT_0202f4a4 = DAT_0202f4a4 + '\x01';
      *(undefined *)(param_1 + 0x17d) = 0;
    }
    break;
  case '\x04':
    pbVar10 = (byte *)(param_1 + 0x17d);
    bVar1 = *pbVar10;
    if (bVar1 != 1) {
      if (bVar1 < 2) {
        if (bVar1 != 0) break;
        sub_080DE2AC(0);
        sub_080DE2AC(1);
        *(undefined2 *)(param_1 + 0x17e) = 0x3c;
        *pbVar10 = *pbVar10 + 1;
        goto LAB_0801fcc0;
      }
      if (bVar1 != 2) {
        if ((bVar1 != 3) || (*(short *)(DAT_020305e8 + 10) < *(short *)(DAT_020305e8 + 8))) break;
        if ((&DAT_083496bf)[*(int *)(param_1 + 0x180) * 4] != -1) {
          *pbVar10 = 2;
          break;
        }
        *pbVar10 = 0;
        pcVar11 = &DAT_0202f4a4;
        goto LAB_08020058;
      }
LAB_0801fce4:
      sVar4 = *(short *)(param_1 + 0x17e);
      if (sVar4 == 0) {
LAB_0801fd12:
        if ((int)*(short *)(DAT_020305e8 + 8) - (int)*(short *)(DAT_020305e8 + 10) < 4) {
          iVar9 = *(int *)(param_1 + 0x180) * 4;
          if ((&UNK_083496bd)[iVar9] == '\0') {
            sub_08098304(&DAT_0834978c + (uint)(byte)(&DAT_083496bc)[iVar9] * 8);
          }
          else if ((&UNK_083496bd)[iVar9] == '\x01') {
            sub_08093448(*(undefined4 *)(&DAT_0834978c + (uint)(byte)(&DAT_083496bc)[iVar9] * 8),
                         *(undefined4 *)(&DAT_08349790 + (uint)(byte)(&DAT_083496bc)[iVar9] * 8));
          }
          else {
            sub_08094A40(*(undefined4 *)(&DAT_0834978c + (uint)(byte)(&DAT_083496bc)[iVar9] * 8),
                         *(undefined4 *)(&DAT_08349790 + (uint)(byte)(&DAT_083496bc)[iVar9] * 8));
          }
          piVar8 = (int *)(param_1 + 0x180);
          iVar9 = *piVar8;
          *piVar8 = iVar9 + 1;
          bVar1 = (&UNK_083496be)[iVar9 * 4];
          *(ushort *)(param_1 + 0x17e) = (ushort)bVar1;
          if (bVar1 == 0) goto LAB_0801fd00;
          cVar3 = (&DAT_083496bf)[(*(int *)(param_1 + 0x180) + -1) * 4];
joined_r0x0801fffc:
          if (cVar3 != '\0') break;
          goto LAB_08020054;
        }
        break;
      }
LAB_0801ff30:
      *(short *)(param_1 + 0x17e) = sVar4 + -1;
      break;
    }
LAB_0801fcc0:
    sVar4 = *(short *)(param_1 + 0x17e);
    if (sVar4 == 0) {
      *(short *)(param_1 + 0x17e) = 0;
      *(undefined4 *)(param_1 + 0x180) = 0;
      *(char *)(param_1 + 0x17d) = *(char *)(param_1 + 0x17d) + '\x01';
      goto LAB_0801fce4;
    }
    goto LAB_0801ff06;
  case '\x06':
    pbVar10 = (byte *)(param_1 + 0x17d);
    bVar1 = *pbVar10;
    if (bVar1 == 1) {
LAB_0801fe38:
      if ((DAT_020301a8 & 0x10) == 0) break;
      DAT_030032e0 = DAT_030032e0 | 0x80;
      DAT_030032e1 = DAT_030032e1 | 2;
      sub_08021D7C(&DAT_020301b0,&DAT_083542d0);
      DAT_020301b2 = DAT_020301b2 & 0xfd;
      DAT_020301a8 = DAT_020301a8 & 0xffef | 1;
LAB_08020054:
      pcVar11 = (char *)(param_1 + 0x17d);
    }
    else {
      if (bVar1 < 2) {
        if (bVar1 != 0) break;
        sub_08021D7C(&DAT_020301b0,&DAT_08354238);
        *pbVar10 = *pbVar10 + 1;
        goto LAB_0801fe38;
      }
      if (bVar1 != 2) break;
      DAT_030032e0 = DAT_030032e0 & 0x7f;
      DAT_030032e1 = 0;
      *pbVar10 = 0;
      pcVar11 = &DAT_0202f4a4;
    }
LAB_08020058:
    *pcVar11 = *pcVar11 + '\x01';
    break;
  case '\b':
    switch(*(undefined *)(param_1 + 0x17d)) {
    case 0:
      goto switchD_0801fec4_caseD_0;
    case 1:
      goto switchD_0801fec4_caseD_1;
    case 2:
      goto switchD_0801fec4_caseD_2;
    case 3:
      if (*(short *)(DAT_020305e8 + 10) < *(short *)(DAT_020305e8 + 8)) break;
      if ((&DAT_0834970b)[*(int *)(param_1 + 0x180) * 4] != -1) {
        *(undefined *)(param_1 + 0x17d) = 2;
        break;
      }
      sub_08021D7C(&DAT_020301b0,&DAT_08354308);
      goto LAB_08020054;
    default:
      break;
    }
  case '\v':
    *(undefined *)(param_1 + 0x17c) = 4;
  }
  goto code_r0x0802025a;
LAB_0801fd00:
  if ((&DAT_083496bf)[(*piVar8 + -1) * 4] == '\0') goto LAB_08020054;
  goto LAB_0801fd12;
switchD_0801fec4_caseD_0:
  *(undefined2 *)(param_1 + 0x17e) = 0x3c;
  *(char *)(param_1 + 0x17d) = *(char *)(param_1 + 0x17d) + '\x01';
switchD_0801fec4_caseD_1:
  sVar4 = *(short *)(param_1 + 0x17e);
  if (sVar4 == 0) {
    *(short *)(param_1 + 0x17e) = 0;
    *(undefined4 *)(param_1 + 0x180) = 0;
    *(char *)(param_1 + 0x17d) = *(char *)(param_1 + 0x17d) + '\x01';
switchD_0801fec4_caseD_2:
    sVar4 = *(short *)(param_1 + 0x17e);
    if (sVar4 == 0) {
      do {
        if (3 < (int)*(short *)(DAT_020305e8 + 8) - (int)*(short *)(DAT_020305e8 + 10))
        goto code_r0x0802025a;
        iVar9 = *(int *)(param_1 + 0x180) * 4;
        if ((&DAT_08349709)[iVar9] == '\0') {
          sub_08098304(&DAT_0834978c + (uint)(byte)(&DAT_08349708)[iVar9] * 8);
        }
        else if ((&DAT_08349709)[iVar9] == '\x01') {
          sub_08093448(*(undefined4 *)(&DAT_0834978c + (uint)(byte)(&DAT_08349708)[iVar9] * 8),
                       *(undefined4 *)(&DAT_08349790 + (uint)(byte)(&DAT_08349708)[iVar9] * 8));
        }
        else {
          sub_08094A40(*(undefined4 *)(&DAT_0834978c + (uint)(byte)(&DAT_08349708)[iVar9] * 8),
                       *(undefined4 *)(&DAT_08349790 + (uint)(byte)(&DAT_08349708)[iVar9] * 8));
        }
        piVar8 = (int *)(param_1 + 0x180);
        iVar9 = *piVar8;
        *piVar8 = iVar9 + 1;
        bVar1 = (&DAT_0834970a)[iVar9 * 4];
        *(ushort *)(param_1 + 0x17e) = (ushort)bVar1;
        if (bVar1 != 0) {
          cVar3 = (&DAT_0834970b)[(*(int *)(param_1 + 0x180) + -1) * 4];
          goto joined_r0x0801fffc;
        }
      } while ((&DAT_0834970b)[(*piVar8 + -1) * 4] != '\0');
      goto LAB_08020054;
    }
    goto LAB_0801ff30;
  }
LAB_0801ff06:
  *(short *)(param_1 + 0x17e) = sVar4 + -1;
code_r0x0802025a:
                    /* WARNING: Could not recover jumptable at 0x08020260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(0);
  return;
}

