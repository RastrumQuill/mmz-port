// sub_080207E8 at 0x080207E8 (thumb)

void sub_080207E8(int param_1,undefined4 param_2,undefined2 *param_3,uint param_4)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  undefined uVar5;
  ushort uVar6;
  ushort uVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  int iVar12;
  byte *pbVar13;
  char *pcVar14;
  uint uVar15;
  code *UNRECOVERED_JUMPTABLE;
  
  cVar3 = DAT_020301a2;
  uVar15 = *(uint *)(param_1 + 0x20);
  pcVar14 = (char *)(param_1 + 0x17c);
  cVar1 = *pcVar14;
  if (cVar1 == '\0') {
    uVar6 = DAT_020301a8 | 1;
    DAT_02030104 = DAT_02030104 | 4;
    if (DAT_020301a2 == '\0') {
      uVar15 = 0;
      DAT_020301a8 = uVar6;
      do {
        (&DAT_02030104)[(ushort)(&DAT_0834979c)[(short)uVar15] >> 3] =
             (&DAT_02030104)[(ushort)(&DAT_0834979c)[(short)uVar15] >> 3] &
             ~(byte)(1 << ((ushort)(&DAT_0834979c)[(short)uVar15] & 7));
        uVar10 = (int)(short)uVar15 + 1;
        uVar15 = uVar10 & 0xffff;
      } while ((int)(uVar10 * 0x10000) >> 0x10 < 8);
      sub_08021D7C(&DAT_020301b0,&DAT_08355b4c);
      sub_0801A4CC(1);
      *(undefined *)(param_1 + 0x17c) = 1;
                    /* WARNING: Subroutine does not return */
      FUN_080216c2();
    }
    if (DAT_020301a2 != '\x01') {
      if (DAT_020301a2 == '\x02') {
        puVar8 = &DAT_08355c34;
        DAT_020301a8 = uVar6;
      }
      else {
        if (DAT_020301a2 == '\x03') {
          DAT_020301a8 = uVar6;
          sub_08021D7C(&DAT_020301b0,&DAT_08355c8c);
          *pcVar14 = '\x04';
                    /* WARNING: Subroutine does not return */
          FUN_080216c2();
        }
        bVar2 = (byte)(DAT_020301aa >> 8);
        if (DAT_020301a2 != '\x04') {
          if (DAT_020301a2 == '\x05') {
            DAT_020301a8 = uVar6;
            sub_08021D7C(&DAT_020301b0,&DAT_0835661c);
            *pcVar14 = '\a';
                    /* WARNING: Subroutine does not return */
            FUN_080216c2();
          }
          if (DAT_020301a2 == '\x06') {
            puVar8 = &DAT_08356674;
            DAT_020301a8 = uVar6;
          }
          else {
            if (DAT_020301a2 != '\a') {
              if (DAT_020301a2 == '\b') {
                DAT_020301a8 = uVar6;
                sub_08021D7C(&DAT_020301b0,&DAT_08357074);
                *pcVar14 = '\f';
                    /* WARNING: Subroutine does not return */
                FUN_080216c2();
              }
              if (DAT_020301a2 == '\t') {
                DAT_020301a8 = uVar6;
                sub_08021D7C(&DAT_020301b0,&DAT_083570cc);
                    /* WARNING: Subroutine does not return */
                FUN_080212ec();
              }
              if (DAT_020301a2 == '\n') {
                DAT_020301a8 = uVar6;
                sub_08021D7C(&DAT_020301b0,&DAT_0835739c);
                DAT_020301aa = DAT_020301aa | 1;
                sub_0801A4CC(9);
                *(undefined *)(param_1 + 0x17c) = 0xf;
                    /* WARNING: Subroutine does not return */
                FUN_080216c2();
              }
              if (DAT_020301a2 == '\v') {
                DAT_020301a8 = uVar6;
                sub_08021D7C(&DAT_020301b0,&DAT_08357744);
                DAT_020301aa = DAT_020301aa | 2;
                sub_0801A4CC(9);
                *(undefined *)(param_1 + 0x17c) = 0x11;
                    /* WARNING: Subroutine does not return */
                FUN_080216c2();
              }
              if (DAT_020301a2 == '\f') {
                DAT_020301a8 = uVar6;
                sub_08021D7C(&DAT_020301b0,&DAT_08357c8c);
                DAT_020301aa = DAT_020301aa | 4;
                sub_0801A4CC(9);
                *(undefined *)(param_1 + 0x17c) = 0x13;
                    /* WARNING: Subroutine does not return */
                FUN_080216c2();
              }
              if (DAT_020301a2 == '\r') {
                DAT_020301a8 = DAT_020301a8 | 5;
                DAT_020300de = DAT_020300de | 1;
                sub_08021D7C(&DAT_020301b0,&DAT_08358154);
                sub_0801A4CC(0xe);
                *(undefined *)(param_1 + 0x17c) = 0x17;
                    /* WARNING: Subroutine does not return */
                FUN_080216c2();
              }
              if (DAT_020301a2 == '\x0e') {
                DAT_020301a8 = DAT_020301a8 | 0x41;
                DAT_030016f5 = 2;
                sub_080E9250();
                DAT_020023c0 = DAT_020023c0 & 0xf0ff | 0x100;
                sub_08021D7C(&DAT_020301b0,&DAT_083584ac);
                sub_0801A4CC(0xf);
                *(undefined *)(param_1 + 0x17c) = 0x18;
                    /* WARNING: Subroutine does not return */
                FUN_080216c2();
              }
              if (DAT_020301a2 == '\x0f') {
                DAT_030016f5 = 1;
                DAT_020301a8 = DAT_020301a8 & 0xffbe;
                *(undefined *)(param_1 + 0x17c) = 0x19;
                    /* WARNING: Subroutine does not return */
                FUN_080216c2();
              }
              DAT_020301a8 = uVar6;
                    /* WARNING: Subroutine does not return */
              FUN_080216c2();
            }
            DAT_020302f4 = 1;
            DAT_020301a8 = uVar6;
            *(byte *)(param_1 + 0x17d) = bVar2;
            puVar8 = (undefined *)(&DAT_08358530)[(uint)*(byte *)(param_1 + 0x17d) * 2];
          }
          sub_08021D7C(&DAT_020301b0,puVar8);
          *pcVar14 = '\t';
                    /* WARNING: Subroutine does not return */
          FUN_080216c2();
        }
        DAT_020302f4 = 1;
        DAT_020301a8 = uVar6;
        *(byte *)(param_1 + 0x17d) = bVar2;
        puVar8 = (undefined *)(&DAT_08358524)[(uint)*(byte *)(param_1 + 0x17d) * 2];
      }
      sub_08021D7C(&DAT_020301b0,puVar8);
      *pcVar14 = cVar3;
                    /* WARNING: Subroutine does not return */
      FUN_080216c2();
    }
    DAT_020301a8 = uVar6;
    sub_08021D7C(&DAT_020301b0,&DAT_08355bd4);
LAB_08020b48:
    sub_0801A4CC(2);
    *pcVar14 = '\x02';
                    /* WARNING: Subroutine does not return */
    FUN_080216c2();
  }
  if (cVar1 == '\x01') goto LAB_08020b48;
  if ((cVar1 == '\x02') && (0xa4fff < *(int *)(uVar15 + 0x54))) {
    DAT_030032e1 = DAT_030032e1 | 2;
    sub_0801A4CC(3);
    *pcVar14 = '\x03';
                    /* WARNING: Subroutine does not return */
    FUN_080216c2();
  }
  if ((*(char *)(param_1 + 0x17c) == '\x03') && (0xb3fff < *(int *)(uVar15 + 0x54))) {
    param_3 = &DAT_020301a0;
    param_4 = DAT_020301b4 & 1;
    if ((DAT_020301b4 & 1) == 0) {
      DAT_030032e1 = (byte)param_4;
      DAT_020302ec = 0x1a000;
      DAT_020302f0 = 0x2a000;
      DAT_020301aa = (ushort)param_4;
      *(undefined *)(param_1 + 0x17d) = 0;
      FUN_080216c0(4);
      uVar15 = uVar15 - 0xff;
      param_4 = (int)(char *)(param_1 + 0x17c) * 0x4000;
      param_3 = param_3 + 0x70;
    }
  }
  bVar4 = DAT_030032e1;
  bVar2 = DAT_02030104;
  cVar1 = *(char *)(param_1 + 0x17c);
  if (cVar1 == '\x04') {
    bVar2 = (byte)DAT_020301a8 & 0x10;
    if ((DAT_020301a8 & 0x10) != 0) {
      DAT_030032e0 = DAT_030032e0 | 0x80;
      DAT_030032e1 = DAT_030032e1 | 2;
      DAT_020301b2 = DAT_020301b2 & 0xfd;
      DAT_020301a8 = DAT_020301a8 & 0xffed | 1;
      (&DAT_02030104)[(ushort)(&DAT_0834979c)[*(byte *)(param_1 + 0x17d) - 1] >> 3] =
           (byte)(1 << ((ushort)(&DAT_0834979c)[*(byte *)(param_1 + 0x17d) - 1] & 7)) |
           (&DAT_02030104)[(ushort)(&DAT_0834979c)[*(byte *)(param_1 + 0x17d) - 1] >> 3];
      *(byte *)(param_1 + 0x17d) = 10;
      sub_08021D7C(&DAT_020301b0,&DAT_08355ce4);
      if ((DAT_02030107 & 0xf) == 0xf) {
        DAT_02030104 = DAT_02030104 & 0xfb;
        *(char *)(param_1 + 0x17c) = '\x05';
                    /* WARNING: Subroutine does not return */
        FUN_080216c2();
      }
                    /* WARNING: Subroutine does not return */
      FUN_080216c2();
    }
    pbVar13 = (byte *)(param_1 + 0x17d);
    if (*pbVar13 == 10) {
      DAT_030032e0 = DAT_030032e0 & 0x7f;
      DAT_030032e1 = bVar2;
      sub_0801A4CC(3);
      *pbVar13 = bVar2;
    }
    if (*pbVar13 != 0) {
      if (DAT_020301a2 == '\x04') {
        sub_0801A4CC(3);
                    /* WARNING: Subroutine does not return */
        FUN_080216c2();
      }
                    /* WARNING: Subroutine does not return */
      FUN_080216c2();
    }
    iVar12 = *(int *)(uVar15 + 0x58);
    if (iVar12 < 0x32000) {
                    /* WARNING: Subroutine does not return */
      FUN_080216c2();
    }
    iVar9 = *(int *)(uVar15 + 0x54);
    if ((iVar9 < 0x1e000) && (iVar12 < 0x46000)) {
      if ((DAT_020301aa & 1) == 0) {
        sub_08021D7C(&DAT_020301b0,&DAT_08355e4c);
      }
      else {
        sub_08021D7C(&DAT_020301b0,&DAT_08355f5c);
      }
      iVar12 = 1;
      *(undefined *)(param_1 + 0x17d) = 1;
      uVar6 = DAT_020301aa & 0xff;
      uVar7 = 1;
      goto LAB_08020d40;
    }
    if (0x1e000 < iVar9) {
      if (0x46000 < iVar12) {
        if ((DAT_020301aa & 2) == 0) {
          sub_08021D7C(&DAT_020301b0,&DAT_08356034);
        }
        else {
          sub_08021D7C(&DAT_020301b0,&DAT_0835615c);
        }
        iVar12 = 2;
        *(undefined *)(param_1 + 0x17d) = 2;
        uVar6 = DAT_020301aa & 0xf;
        uVar7 = 2;
        goto LAB_08020d40;
      }
      if (iVar12 < 0x46000) {
        if ((DAT_020301aa & 4) == 0) {
          sub_08021D7C(&DAT_020301b0,&DAT_0835624c);
        }
        else {
          sub_08021D7C(&DAT_020301b0,&DAT_0835635c);
        }
        iVar12 = 3;
        *(undefined *)(param_1 + 0x17d) = 3;
        uVar6 = DAT_020301aa & 0xf;
        uVar7 = 4;
        goto LAB_08020d40;
      }
    }
    if (0x1dfff < iVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_080216c2();
    }
    if (iVar12 < 0x46001) {
                    /* WARNING: Subroutine does not return */
      FUN_080216c2();
    }
    if ((DAT_020301aa & 8) == 0) {
      sub_08021D7C(&DAT_020301b0,&DAT_08356434);
    }
    else {
      sub_08021D7C(&DAT_020301b0,&DAT_08356544);
    }
    iVar12 = 4;
    *(undefined *)(param_1 + 0x17d) = 4;
    uVar6 = DAT_020301aa & 0xf;
    uVar7 = 8;
LAB_08020d40:
    DAT_020301aa = uVar6 | uVar7 | (ushort)(iVar12 << 8);
    sub_0801A4CC(4);
                    /* WARNING: Subroutine does not return */
    FUN_080216c2();
  }
  if (cVar1 == '\x05') {
    DAT_030032e0 = DAT_030032e0 & 0x7f;
    DAT_030032e1 = 0;
    sub_0801A4CC(5,&DAT_030032e0,0,param_4);
    uVar5 = 6;
LAB_08021232:
    *(undefined *)(param_1 + 0x17c) = uVar5;
  }
  else {
    if ((cVar1 == '\x06') && (0xc3000 < *(int *)(uVar15 + 0x54))) {
      DAT_02030104 = DAT_02030104 | 4;
      sub_0801A4CC(5,bVar2,&DAT_02030100,param_4);
      uVar5 = 7;
LAB_08021266:
      DAT_020302f0 = 0x280000;
      DAT_020302ec = 0;
      *(undefined *)(param_1 + 0x17c) = uVar5;
      goto code_r0x080216c2;
    }
    if ((*(char *)(param_1 + 0x17c) == '\a') && (0x158fff < *(int *)(uVar15 + 0x54))) {
      puVar11 = &DAT_030032e0;
      DAT_030032e1 = DAT_030032e1 | 2;
      sub_0801A4CC(6,bVar4,&DAT_030032e0,param_4);
      FUN_080216c0(8);
      uVar15 = (uint)*(ushort *)(uVar15 + 0x3e);
      param_3 = (undefined2 *)(puVar11 + 0xe0);
    }
    if ((*(char *)(param_1 + 0x17c) == '\b') && (0x168000 < *(int *)(uVar15 + 0x54))) {
      param_3 = &DAT_020301a0;
      if ((DAT_020301b4 & 1) != 0) goto LAB_08020f78;
      DAT_030032e1 = (byte)(DAT_020301b4 & 1);
      DAT_020302ec = 0x10000;
      DAT_020302f0 = 0x20000;
      DAT_020301aa = DAT_020301b4 & 1;
      *(undefined *)(param_1 + 0x17d) = 0;
      uVar5 = 9;
    }
    else {
LAB_08020f78:
      cVar1 = *(char *)(param_1 + 0x17c);
      if (cVar1 == '\t') {
        bVar2 = (byte)DAT_020301a8 & 0x10;
        if ((DAT_020301a8 & 0x10) == 0) {
          pbVar13 = (byte *)(param_1 + 0x17d);
          if (*pbVar13 == 10) {
            DAT_030032e0 = DAT_030032e0 & 0x7f;
            DAT_030032e1 = bVar2;
            sub_0801A4CC(6);
            *pbVar13 = bVar2;
          }
          if (*pbVar13 == 0) {
            iVar12 = *(int *)(uVar15 + 0x58);
            if (0x27fff < iVar12) {
              iVar9 = *(int *)(uVar15 + 0x54);
              if ((iVar9 < 0x78000) && (iVar12 < 0x46000)) {
                if ((DAT_020301aa & 1) == 0) {
                  sub_08021D7C(&DAT_020301b0,&DAT_08356844);
                }
                else {
                  sub_08021D7C(&DAT_020301b0,&DAT_08356974);
                }
                iVar12 = 5;
                *(undefined *)(param_1 + 0x17d) = 5;
                uVar6 = DAT_020301aa & 0xff;
                uVar7 = 1;
              }
              else if ((iVar9 < 0x78001) || (iVar12 < 0x46001)) {
                if ((iVar9 < 0x78000) && (0x46000 < iVar12)) {
                  if ((DAT_020301aa & 4) == 0) {
                    sub_08021D7C(&DAT_020301b0,&DAT_08356c74);
                  }
                  else {
                    sub_08021D7C(&DAT_020301b0,&DAT_08356d9c);
                  }
                  iVar12 = 7;
                  *(undefined *)(param_1 + 0x17d) = 7;
                  uVar6 = DAT_020301aa & 0xff;
                  uVar7 = 4;
                }
                else {
                  if ((iVar9 < 0x78001) || (0x45fff < iVar12)) goto code_r0x080216c2;
                  if ((DAT_020301aa & 8) == 0) {
                    sub_08021D7C(&DAT_020301b0,&DAT_08356e8c);
                  }
                  else {
                    sub_08021D7C(&DAT_020301b0,&DAT_08356f9c);
                  }
                  iVar12 = 8;
                  *(undefined *)(param_1 + 0x17d) = 8;
                  uVar6 = DAT_020301aa & 0xff;
                  uVar7 = 8;
                }
              }
              else {
                if ((DAT_020301aa & 2) == 0) {
                  sub_08021D7C(&DAT_020301b0,&DAT_08356a6c);
                }
                else {
                  sub_08021D7C(&DAT_020301b0,&DAT_08356b8c);
                }
                iVar12 = 6;
                *(undefined *)(param_1 + 0x17d) = 6;
                uVar6 = DAT_020301aa & 0xff;
                uVar7 = 2;
              }
              DAT_020301aa = uVar6 | uVar7 | (ushort)(iVar12 << 8);
              sub_0801A4CC(7);
            }
          }
          else if (DAT_020301a2 == '\a') {
            sub_0801A4CC(6);
          }
        }
        else {
          DAT_030032e0 = DAT_030032e0 | 0x80;
          DAT_030032e1 = DAT_030032e1 | 2;
          DAT_020301b2 = DAT_020301b2 & 0xfd;
          DAT_020301a8 = DAT_020301a8 & 0xffed | 1;
          (&DAT_02030104)[(ushort)(&DAT_0834979c)[*(byte *)(param_1 + 0x17d) - 1] >> 3] =
               (byte)(1 << ((ushort)(&DAT_0834979c)[*(byte *)(param_1 + 0x17d) - 1] & 7)) |
               (&DAT_02030104)[(ushort)(&DAT_0834979c)[*(byte *)(param_1 + 0x17d) - 1] >> 3];
          *(byte *)(param_1 + 0x17d) = 10;
          sub_08021D7C(&DAT_020301b0,&DAT_083566cc);
          if ((DAT_02030107 & 0xf0) == 0xf0) {
            DAT_02030104 = DAT_02030104 & 0xfb;
            *(char *)(param_1 + 0x17c) = '\n';
          }
        }
        goto code_r0x080216c2;
      }
      if (cVar1 == '\n') {
        DAT_030032e0 = DAT_030032e0 & 0x7f;
        DAT_030032e1 = 0;
        sub_0801A4CC(8);
        uVar5 = 0xb;
        goto LAB_08021232;
      }
      if ((cVar1 == '\v') && (0x177000 < *(int *)(uVar15 + 0x54))) {
        DAT_02030104 = DAT_02030104 | 4;
        sub_0801A4CC(8);
        uVar5 = 0xc;
        goto LAB_08021266;
      }
      if (*(char *)(param_1 + 0x17c) == '\f') {
        if ((0x1b1fff < *(int *)(uVar15 + 0x54)) && (DAT_02030308 != 0xffffffff)) {
          sub_080046A4(DAT_02030308 & 0xffff);
          DAT_02030308 = 0xffffffff;
        }
        if (0x1b3fff < *(int *)(uVar15 + 0x54)) {
          DAT_030032e1 = DAT_030032e1 | 2;
          if (DAT_02030308 != 0xa1) {
            if (DAT_02030308 != 0xffffffff) {
              sub_080046A4(DAT_02030308 & 0xffff);
              DAT_02030308 = 0xffffffff;
            }
            sub_08004694(0xa1);
            DAT_02030308 = 0xa1;
          }
          DAT_020301aa = 0;
          *(undefined *)(param_1 + 0x17c) = 0xd;
        }
        goto code_r0x080216c2;
      }
      if ((*(char *)(param_1 + 0x17c) == '\r') && (0x1c1fff < *(int *)(uVar15 + 0x54))) {
        DAT_030032e1 = 0;
        if ((DAT_020301aa & 1) == 0) {
          sub_08021D7C(&DAT_020301b0,&DAT_08357124);
        }
        else {
          sub_08021D7C(&DAT_020301b0,&DAT_083572e4);
        }
        sub_0801A4CC(10);
        *(undefined *)(param_1 + 0x17c) = 0xe;
        goto code_r0x080216c2;
      }
      cVar1 = *(char *)(param_1 + 0x17c);
      if (cVar1 == '\x0e') {
        DAT_020301aa = DAT_020301aa | 1;
        sub_0801A4CC(9);
        uVar5 = 0xf;
      }
      else {
        if (cVar1 == '\x0f') {
          DAT_02030108 = DAT_02030108 & 0xbf;
          if ((DAT_020301a8 & 0x10) != 0) {
            DAT_030032e0 = DAT_030032e0 | 0x80;
            if ((DAT_020301aa & 2) == 0) {
              sub_08021D7C(&DAT_020301b0,&DAT_08357424);
            }
            else {
              sub_08021D7C(&DAT_020301b0,&DAT_083575cc);
            }
            DAT_020301b2 = DAT_020301b2 & 0xfd;
            DAT_020301a8 = DAT_020301a8 & 0xffef | 1;
            sub_0801A500(0xb);
            *(undefined *)(param_1 + 0x17c) = 0x10;
          }
          goto code_r0x080216c2;
        }
        if (cVar1 == '\x10') {
          DAT_030032e0 = DAT_030032e0 & 0x7f;
          DAT_020301aa = DAT_020301aa | 2;
          sub_0801A4CC(9);
          uVar5 = 0x11;
        }
        else {
          if ((cVar1 == '\x11') && ((DAT_020301a8 & 0x10) != 0)) {
            DAT_02030108 = DAT_02030108 & 0xbf;
            DAT_030032e0 = DAT_030032e0 | 0x80;
            if ((DAT_020301aa & 4) == 0) {
              sub_08021D7C(&DAT_020301b0,&DAT_083577fc);
            }
            else {
              sub_08021D7C(&DAT_020301b0,&DAT_08357b14);
            }
            DAT_020301b2 = DAT_020301b2 & 0xfd;
            DAT_020301a8 = DAT_020301a8 & 0xffef | 1;
            sub_0801A500(0xc);
            *(undefined *)(param_1 + 0x17c) = 0x12;
            goto code_r0x080216c2;
          }
          pcVar14 = (char *)(param_1 + 0x17c);
          if (*pcVar14 == '\x12') {
            DAT_030032e0 = DAT_030032e0 & 0x7f;
            DAT_020301aa = DAT_020301aa | 4;
            sub_0801A4CC(9);
            *pcVar14 = '\x13';
            goto code_r0x080216c2;
          }
          if ((*pcVar14 == '\x13') && ((DAT_020301a8 & 0x10) != 0)) {
            DAT_030032e0 = DAT_030032e0 | 0x80;
            DAT_030032e1 = DAT_030032e1 | 2;
            sub_08021D7C(&DAT_020301b0,&DAT_08357d34);
            DAT_020301b2 = DAT_020301b2 & 0xfd;
            DAT_020301a8 = DAT_020301a8 & 0xffef | 5;
            *pcVar14 = '\x14';
            goto code_r0x080216c2;
          }
          pcVar14 = (char *)(param_1 + 0x17c);
          if (*pcVar14 == '\x14') {
            DAT_030032e0 = DAT_030032e0 & 0x7f;
            DAT_030032e1 = 0;
            sub_08021D7C(&DAT_020301b0,&DAT_08357de4);
            sub_0801A4CC(0xd);
            *pcVar14 = '\x15';
            goto code_r0x080216c2;
          }
          if ((*pcVar14 == '\x15') && ((DAT_020301a8 & 0x10) != 0)) {
            sub_08021D7C(&DAT_020301b0,&DAT_083580b4,param_3);
            DAT_020301b2 = DAT_020301b2 & 0xfd;
            DAT_020301a8 = DAT_020301a8 & 0xffef | 5;
            *pcVar14 = '\x16';
            goto code_r0x080216c2;
          }
          cVar1 = *(char *)(param_1 + 0x17c);
          if (cVar1 == '\x16') {
            DAT_020300de = DAT_020300de | 1;
            sub_08021D7C(&DAT_020301b0,&DAT_08358154);
            sub_0801A4CC(0xe);
            uVar5 = 0x17;
          }
          else if (cVar1 == '\x17') {
            DAT_030016f5 = 2;
            sub_080E9250();
            DAT_020023c0 = DAT_020023c0 & 0xf0ff | 0x100;
            sub_08021D7C(&DAT_020301b0,&DAT_083584ac);
            sub_0801A4CC(0xf);
            uVar5 = 0x18;
          }
          else {
            if (cVar1 != '\x18') goto code_r0x080216c2;
            DAT_030016f5 = 1;
            DAT_020301a8 = DAT_020301a8 & 0xffbe;
            uVar5 = 0x19;
          }
        }
      }
    }
    *(undefined *)(param_1 + 0x17c) = uVar5;
  }
code_r0x080216c2:
                    /* WARNING: Could not recover jumptable at 0x080216ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(0);
  return;
}

