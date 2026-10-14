// sub_080266A0 at 0x080266A0 (thumb)

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void sub_080266A0(int param_1)

{
  char cVar1;
  char cVar2;
  undefined uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  code *UNRECOVERED_JUMPTABLE;
  
  cVar2 = DAT_0202e912;
  iVar11 = *(int *)(param_1 + 0x20);
  pcVar10 = (char *)(param_1 + 0x17c);
  cVar1 = *pcVar10;
  if (cVar1 == '\0') {
    uVar4 = DAT_0202e918 | 1;
    DAT_0202e8b4 = DAT_0202e8b4 | 8;
    if (DAT_0202e912 == '\0') {
      uVar9 = 0;
      DAT_0202e918 = uVar4;
      do {
        (&DAT_0202e8b4)[(ushort)(&DAT_0883f700)[uVar9] >> 3] =
             (&DAT_0202e8b4)[(ushort)(&DAT_0883f700)[uVar9] >> 3] &
             ~(byte)(1 << ((ushort)(&DAT_0883f700)[uVar9] & 7));
        uVar9 = uVar9 + 1 & 0xff;
      } while (uVar9 < 8);
      sub_080275F0(&DAT_0202e920,&DAT_0884af8c);
      sub_0801F63C(1);
      *(undefined *)(param_1 + 0x17c) = 1;
                    /* WARNING: Subroutine does not return */
      FUN_08027170();
    }
    if (DAT_0202e912 == '\x01') {
      DAT_0202e918 = uVar4;
      sub_080275F0(&DAT_0202e920,&DAT_0884b04c);
      sub_0801F63C(2);
                    /* WARNING: Subroutine does not return */
      FUN_0802716e(2);
    }
    if (DAT_0202e912 == '\x02') {
      puVar7 = &DAT_0884b0ac;
      DAT_0202e918 = uVar4;
    }
    else {
      if (DAT_0202e912 == '\x03') {
        DAT_0202e918 = uVar4;
        sub_080275F0(&DAT_0202e920,&DAT_0884b104);
                    /* WARNING: Subroutine does not return */
        FUN_0802716e(4);
      }
      if (DAT_0202e912 != '\x04') {
        if (DAT_0202e912 == '\x05') {
          DAT_0202e918 = uVar4;
          sub_080275F0(&DAT_0202e920,&DAT_0884c284);
          *pcVar10 = '\a';
          *(undefined *)(param_1 + 0x17d) = 0;
                    /* WARNING: Subroutine does not return */
          FUN_08027170();
        }
        if (DAT_0202e912 == '\x06') {
          DAT_0202e918 = uVar4;
          sub_080275F0(&DAT_0202e920,&DAT_0884c624);
                    /* WARNING: Subroutine does not return */
          FUN_0802716e(9);
        }
        if (DAT_0202e912 == '\a') {
          DAT_0202e918 = uVar4;
          sub_080275F0(&DAT_0202e920,&DAT_0884c734);
          sub_0801F63C(6);
                    /* WARNING: Subroutine does not return */
          FUN_0802716e(10);
        }
        if (DAT_0202e912 != '\b') {
          if (DAT_0202e912 == '\t') {
            DAT_0202e918 = DAT_0202e918 & 0xffbe;
            *(undefined *)(param_1 + 0x17c) = 0xf;
                    /* WARNING: Subroutine does not return */
            FUN_08027170();
          }
          DAT_0202e918 = uVar4;
                    /* WARNING: Subroutine does not return */
          FUN_08027170();
        }
        DAT_0202e918 = uVar4;
        sub_080275F0(&DAT_0202e920,&DAT_0884cde4);
        sub_0801F63C(6);
                    /* WARNING: Subroutine does not return */
        FUN_0802716e(0xd);
      }
      DAT_0202ea64 = 1;
      DAT_0202e918 = uVar4;
      *(byte *)(param_1 + 0x17d) = (byte)(DAT_0202e91a >> 8);
      puVar7 = (undefined *)(&DAT_0884d084)[(uint)*(byte *)(param_1 + 0x17d) * 2];
    }
    sub_080275F0(&DAT_0202e920,puVar7);
    *pcVar10 = cVar2;
                    /* WARNING: Subroutine does not return */
    FUN_08027170();
  }
  if (cVar1 == '\x01') {
    sub_0801F63C(2);
                    /* WARNING: Subroutine does not return */
    FUN_0802716e(2);
  }
  if ((cVar1 == '\x02') && (0x95fff < *(int *)(iVar11 + 0x54))) {
    DAT_030032e1 = DAT_030032e1 | 2;
    sub_0801F63C(3);
                    /* WARNING: Subroutine does not return */
    FUN_0802716e(3);
  }
  if (((*(char *)(param_1 + 0x17c) == '\x03') && (0xa4fff < *(int *)(iVar11 + 0x54))) &&
     ((DAT_0202e924 & 1) == 0)) {
    DAT_030032e1 = (byte)(DAT_0202e924 & 1);
    DAT_0202e91a = DAT_0202e924 & 1;
    *(undefined *)(param_1 + 0x17d) = 0;
    *(char *)(param_1 + 0x17c) = '\x04';
                    /* WARNING: Subroutine does not return */
    FUN_08027170();
  }
  cVar1 = *(char *)(param_1 + 0x17c);
  if (cVar1 != '\x04') {
    if (cVar1 == '\x05') {
      DAT_0202e91a = 0;
      DAT_030032e0 = DAT_030032e0 & 0x7f;
      DAT_030032e1 = 0;
      uVar3 = 6;
code_r0x0802716e:
      *(undefined *)(param_1 + 0x17c) = uVar3;
    }
    else {
      if ((cVar1 == '\x06') && (0xb4000 < *(int *)(iVar11 + 0x54))) {
        DAT_0202e8b4 = DAT_0202e8b4 | 8;
        sub_0801F63C(5);
        *(char *)(param_1 + 0x17c) = '\a';
        *(undefined *)(param_1 + 0x17d) = 0;
        goto code_r0x08027170;
      }
      if ((*(char *)(param_1 + 0x17c) == '\a') && (*(int *)(iVar11 + 0x58) < 0x28000)) {
        if ((*(char *)(param_1 + 0x17d) == '\0') && (0xb3000 < *(int *)(iVar11 + 0x54))) {
          DAT_030032e1 = DAT_030032e1 | 2;
          if (DAT_0202ea78 != 0xffffffff) {
            sub_08002A98(DAT_0202ea78 & 0xffff);
            DAT_0202ea78 = 0xffffffff;
          }
          *(char *)(param_1 + 0x17d) = '\x01';
        }
        else {
          cVar1 = *(char *)(param_1 + 0x17d);
          if (cVar1 == '\x01') {
            DAT_030032e1 = 0;
            *(char *)(param_1 + 0x17d) = '\x02';
          }
          else if ((cVar1 == '\x02') && (0xb4fff < *(int *)(iVar11 + 0x54))) {
            DAT_030032e1 = 0;
            if (DAT_0202ea78 != 0x9b) {
              if (DAT_0202ea78 != 0xffffffff) {
                sub_08002A98(DAT_0202ea78 & 0xffff);
                DAT_0202ea78 = 0xffffffff;
              }
              sub_08002A88(0x9b);
              DAT_0202ea78 = 0x9b;
            }
            *(undefined *)(param_1 + 0x17c) = 8;
          }
        }
        goto code_r0x08027170;
      }
      if ((*(char *)(param_1 + 0x17c) == '\b') && (*(int *)(iVar11 + 0x58) < 0x1e000)) {
        puVar7 = &DAT_0884c2dc;
      }
      else {
        if ((*(char *)(param_1 + 0x17c) != '\t') || (0x1dfff < *(int *)(iVar11 + 0x58))) {
          pcVar10 = (char *)(param_1 + 0x17c);
          if (*pcVar10 == '\n') {
            sub_0801F63C(6);
            *pcVar10 = '\v';
            goto code_r0x08027170;
          }
          if ((*pcVar10 == '\v') && ((DAT_0202e918 & 0x10) != 0)) {
            DAT_030032e0 = DAT_030032e0 | 0x80;
            DAT_030032e1 = DAT_030032e1 | 2;
            DAT_0202e922 = DAT_0202e922 & 0xfd;
            DAT_0202e918 = DAT_0202e918 & 0xffef | 1;
            *pcVar10 = '\f';
            goto code_r0x08027170;
          }
          cVar1 = *(char *)(param_1 + 0x17c);
          if (cVar1 == '\f') {
            if ((DAT_0202e91a & 1) == 0) {
              sub_080275F0(&DAT_0202e920,&DAT_0884c7ec);
            }
            else {
              sub_080275F0(&DAT_0202e920,&DAT_0884cb54);
            }
            DAT_030032e1 = 0;
            sub_0801F63C(8);
            *(undefined *)(param_1 + 0x17c) = 0xd;
            goto code_r0x08027170;
          }
          if (cVar1 == '\r') {
            DAT_030032e0 = DAT_030032e0 & 0x7f;
            DAT_0202e91a = DAT_0202e91a | 1;
            sub_0801F63C(6);
            DAT_0202cacc = 0xea000;
            uVar3 = 0xe;
          }
          else if (cVar1 == '\x0e') {
            if ((DAT_0202e918 & 0x10) == 0) {
              if ((DAT_0202daf4 != 0) || ((DAT_0202e918 & 8) != 0)) goto code_r0x08027170;
              sub_080275F0(&DAT_0202e920,&DAT_0884cfa4);
              DAT_030032e0 = DAT_030032e0 | 0x80;
              DAT_0202ea68 = 0x8000;
              DAT_0202e918 = DAT_0202e918 & 0xfffe | 8;
              uVar3 = 0x20;
            }
            else {
              DAT_030032e0 = DAT_030032e0 | 0x80;
              DAT_030032e1 = DAT_030032e1 | 2;
              sub_080275F0(&DAT_0202e920,&DAT_0884cea4);
              DAT_0202e922 = DAT_0202e922 & 0xfd;
              DAT_0202e918 = DAT_0202e918 | 5;
              sub_0801F63C(9);
              uVar3 = 0xf;
            }
          }
          else if (cVar1 == '\x0f') {
            DAT_030032e0 = DAT_030032e0 & 0x7f;
            DAT_0202e918 = DAT_0202e918 & 0xffef;
            DAT_030032e1 = 0;
            sub_0801F63C(9);
            uVar3 = 0x10;
          }
          else if (cVar1 == '\x10') {
            DAT_0202e918 = DAT_0202e918 & 0xffbe;
            uVar3 = 0x11;
          }
          else {
            if (cVar1 != ' ') goto code_r0x08027170;
            DAT_030032e0 = DAT_030032e0 & 0x7f;
            DAT_0202e918 = DAT_0202e918 & 0xfffe;
            uVar3 = 0x21;
          }
          goto code_r0x0802716e;
        }
        puVar7 = &DAT_0884c67c;
      }
      sub_080275F0(&DAT_0202e920,puVar7);
      sub_0801F63C(7);
      *(undefined *)(param_1 + 0x17c) = 10;
    }
    goto code_r0x08027170;
  }
  if ((DAT_0202e918 & 0x10) != 0) {
    DAT_030032e0 = DAT_030032e0 | 0x80;
    DAT_030032e1 = DAT_030032e1 | 2;
    DAT_0202e922 = DAT_0202e922 & 0xfd;
    DAT_0202e918 = DAT_0202e918 & 0xffed | 1;
    (&DAT_0202e8b4)[(ushort)(&DAT_0883f700)[*(byte *)(param_1 + 0x17d) - 1] >> 3] =
         (byte)(1 << ((ushort)(&DAT_0883f700)[*(byte *)(param_1 + 0x17d) - 1] & 7)) |
         (&DAT_0202e8b4)[(ushort)(&DAT_0883f700)[*(byte *)(param_1 + 0x17d) - 1] >> 3];
    if (*(byte *)(param_1 + 0x17d) == 3) {
      sub_080275F0(&DAT_0202e920,&DAT_0884b2d4);
    }
    else {
      sub_080275F0(&DAT_0202e920,&DAT_0884b15c);
    }
    *(undefined *)(param_1 + 0x17d) = 10;
    if (((DAT_0202e8b7 & 0xf0) == 0xf0) && ((DAT_0202e8b8 & 0xf) == 0xf)) {
      DAT_0202e8b4 = DAT_0202e8b4 & 0xf7;
      *(undefined *)(param_1 + 0x17c) = 5;
    }
    goto code_r0x08027170;
  }
  pcVar10 = (char *)(param_1 + 0x17d);
  if (*pcVar10 == '\n') {
    DAT_030032e0 = DAT_030032e0 & 0x7f;
    DAT_030032e1 = 0;
    sub_0801F63C(3);
    *pcVar10 = '\0';
  }
  if (*pcVar10 != '\0') {
    if (DAT_0202e912 == '\x04') {
      sub_0801F63C(3);
    }
    goto code_r0x08027170;
  }
  iVar8 = *(int *)(iVar11 + 0x54);
  if (iVar8 < 0xb4000) goto code_r0x08027170;
  if ((iVar8 < 0x14a000) && (0x78000 < *(int *)(iVar11 + 0x58))) {
    if ((DAT_0202e91a & 1) == 0) {
      sub_080275F0(&DAT_0202e920,&DAT_0884b44c);
    }
    else {
      sub_080275F0(&DAT_0202e920,&DAT_0884b544);
    }
    iVar11 = 1;
    *(undefined *)(param_1 + 0x17d) = 1;
    uVar4 = DAT_0202e91a & 0xff;
    uVar5 = 1;
  }
  else if ((iVar8 < 0x14a001) ||
          ((*(int *)(iVar11 + 0x58) < 0x50001 || (0x6dfff < *(int *)(iVar11 + 0x58))))) {
    if ((iVar8 < 0x14a000) && (*(int *)(iVar11 + 0x58) < 0x32000)) {
      if ((DAT_0202e91a & 4) == 0) {
        sub_080275F0(&DAT_0202e920,&DAT_0884b7e4);
      }
      else {
        sub_080275F0(&DAT_0202e920,&DAT_0884b90c);
      }
      iVar11 = 3;
      *(undefined *)(param_1 + 0x17d) = 3;
      uVar4 = DAT_0202e91a & 0xff;
      uVar5 = 4;
    }
    else if (iVar8 < 0x14a001) {
LAB_08026c60:
      if (((iVar8 < 0x14a000) && (0x3c000 < *(int *)(iVar11 + 0x58))) &&
         (*(int *)(iVar11 + 0x58) < 0x46000)) {
        if ((DAT_0202e91a & 0x20) == 0) {
          sub_080275F0(&DAT_0202e920,&DAT_0884bd74);
        }
        else {
          sub_080275F0(&DAT_0202e920,&DAT_0884be5c);
        }
        iVar11 = 6;
        *(undefined *)(param_1 + 0x17d) = 6;
        uVar4 = DAT_0202e91a & 0xff;
        uVar5 = 0x20;
      }
      else if ((iVar8 < 0x14a001) || (*(int *)(iVar11 + 0x58) < 0x78001)) {
        if ((0x149fff < iVar8) ||
           ((*(int *)(iVar11 + 0x58) < 0x50001 || (0x59fff < *(int *)(iVar11 + 0x58)))))
        goto code_r0x08027170;
        if ((DAT_0202e91a & 0x80) == 0) {
          sub_080275F0(&DAT_0202e920,&DAT_0884c0ec);
        }
        else {
          sub_080275F0(&DAT_0202e920,&DAT_0884c1c4);
        }
        iVar11 = 8;
        *(undefined *)(param_1 + 0x17d) = 8;
        uVar4 = DAT_0202e91a & 0xff;
        uVar5 = 0x80;
      }
      else {
        if ((DAT_0202e91a & 0x40) == 0) {
          sub_080275F0(&DAT_0202e920,&DAT_0884bf04);
        }
        else {
          sub_080275F0(&DAT_0202e920,&DAT_0884bffc);
        }
        iVar11 = 7;
        *(undefined *)(param_1 + 0x17d) = 7;
        uVar4 = DAT_0202e91a & 0xff;
        uVar5 = 0x40;
      }
    }
    else {
      iVar6 = *(int *)(iVar11 + 0x58);
      if ((iVar6 < 0x3c001) || (0x45fff < iVar6)) {
        if ((iVar8 < 0x14a001) || (0x31fff < iVar6)) goto LAB_08026c60;
        if ((DAT_0202e91a & 0x10) == 0) {
          sub_080275F0(&DAT_0202e920,&DAT_0884bbc4);
        }
        else {
          sub_080275F0(&DAT_0202e920,&DAT_0884bcb4);
        }
        iVar11 = 5;
        *(undefined *)(param_1 + 0x17d) = 5;
        uVar4 = DAT_0202e91a & 0xff;
        uVar5 = 0x10;
      }
      else {
        if ((DAT_0202e91a & 8) == 0) {
          sub_080275F0(&DAT_0202e920,&DAT_0884ba2c);
        }
        else {
          sub_080275F0(&DAT_0202e920,&DAT_0884bb14);
        }
        iVar11 = 4;
        *(undefined *)(param_1 + 0x17d) = 4;
        uVar4 = DAT_0202e91a & 0xff;
        uVar5 = 8;
      }
    }
  }
  else {
    if ((DAT_0202e91a & 2) == 0) {
      sub_080275F0(&DAT_0202e920,&DAT_0884b634);
    }
    else {
      sub_080275F0(&DAT_0202e920,&DAT_0884b724);
    }
    iVar11 = 2;
    *(undefined *)(param_1 + 0x17d) = 2;
    uVar4 = DAT_0202e91a & 0xff;
    uVar5 = 2;
  }
  DAT_0202e91a = uVar4 | uVar5 | (ushort)(iVar11 << 8);
  sub_0801F63C(4);
code_r0x08027170:
                    /* WARNING: Could not recover jumptable at 0x0802717e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(0);
  return;
}

