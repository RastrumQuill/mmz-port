// sub_080E5C78 at 0x080E5C78 (thumb)

void sub_080E5C78(int param_1)

{
  undefined2 uVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  uint extraout_r1;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  code *UNRECOVERED_JUMPTABLE;
  short asStack_1003c [32768];
  short local_3c [16];
  
  uVar5 = DAT_0202f65a;
  switch(*(undefined *)(param_1 + 3)) {
  case 0:
    if ((DAT_0202ebb5 & 0x40) == 0) {
      sub_080DEFCC(7);
    }
    else {
      sub_080DEFCC(10);
    }
    *(undefined *)(param_1 + 3) = 0x65;
    *(undefined2 *)(param_1 + 10) = 0;
  case 0x65:
    if ((DAT_0202f65a != 0) && (DAT_0202f65a != 3)) {
                    /* WARNING: Subroutine does not return */
      FUN_080e6b92();
    }
    sVar2 = sub_080E7A44(param_1);
    if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_080e6b92();
    }
    if (0 < sVar2) {
      if ((DAT_0202ebb5 & 0x40) == 0) {
        sub_080DEFCC(8);
      }
      else {
        sub_080DEFCC(0xb);
      }
      *(undefined *)(param_1 + 3) = 0x67;
      *(undefined2 *)(param_1 + 10) = 0;
                    /* WARNING: Subroutine does not return */
      FUN_080e6b92();
    }
    if (sVar2 == -1) {
      FUN_080e6b04();
    }
    sub_080E6A74();
switchD_080e5c94_caseD_1:
    if ((DAT_0202f65a != 0) && (DAT_0202f65a != 3)) {
                    /* WARNING: Subroutine does not return */
      FUN_080e6b92();
    }
    sub_080DEFCC(0xb);
LAB_080e5f82:
    *(undefined *)(param_1 + 3) = 0x67;
                    /* WARNING: Subroutine does not return */
    FUN_080e6b92();
  case 1:
    goto switchD_080e5c94_caseD_1;
  case 2:
    if ((DAT_0202f65a != 0) && (DAT_0202f65a != 3)) {
                    /* WARNING: Subroutine does not return */
      FUN_080e6b92();
    }
    sub_080DEFCC(8);
    *(undefined2 *)(param_1 + 10) = 0;
    goto LAB_080e5f82;
  default:
    sub_080E6C8C(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_080e6b92();
  case 0x66:
    if (DAT_0202f65a != 0) {
LAB_080e631c:
      DAT_0202f658 = DAT_0202f658 | 2;
                    /* WARNING: Subroutine does not return */
      FUN_080e6b92();
    }
    uVar6 = 0x400;
    break;
  case 0x67:
    if ((DAT_0202f65a != 0) && (DAT_0202f65a != 3)) {
                    /* WARNING: Subroutine does not return */
      FUN_080e6b92();
    }
    if ((DAT_0202ebb5 & 0x40) == 0) {
      sVar2 = sub_080E7A44(param_1);
      if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_080e6b92();
      }
      if (sVar2 < 1) {
        if (sVar2 != -1) {
          sub_080E6A74();
        }
        if ((*(uint *)(DAT_0202ebf0 + 0x14) & 0x6c) == 0) {
          sub_080DF038(5);
        }
        else if (*(byte *)(DAT_0202ebf0 + 1) < 5) {
          if (*(byte *)(DAT_0202ebf0 + 1) < 2) {
            sub_080DF038(0x20b);
          }
          else {
            sub_080DF038(0x20a);
          }
        }
        else {
          sub_080DF038(0x209);
        }
LAB_080e6072:
        *(undefined *)(param_1 + 3) = 2;
                    /* WARNING: Subroutine does not return */
        FUN_080e6b92();
      }
      if ((*(uint *)(DAT_0202ebf0 + 0x14) & 0x6c) == 0x6c) {
        sub_080DF038(9);
        goto LAB_080e6072;
      }
      sub_080DF038(2);
      goto LAB_080e6294;
    }
    sub_080DEFCC(0xc);
    *(undefined2 *)(param_1 + 4) = 0;
    *(undefined2 *)(param_1 + 6) = 0;
    *(undefined2 *)(param_1 + 8) = 0;
    *(undefined2 *)(param_1 + 10) = 0xf;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 0x68:
    if ((*(short *)(param_1 + 4) < 3) && ((DAT_02000d16 & 0x80) != 0)) {
      sub_080032EC(1);
      *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
    }
    if ((0 < *(short *)(param_1 + 4)) && ((DAT_02000d16 & 0x40) != 0)) {
      sub_080032EC(1);
      *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + -1;
    }
    if (*(short *)(param_1 + 4) < *(short *)(param_1 + 6)) {
      *(short *)(param_1 + 6) = *(short *)(param_1 + 4);
    }
    if (*(short *)(param_1 + 6) + 1 < (int)*(short *)(param_1 + 4)) {
      *(short *)(param_1 + 6) = *(short *)(param_1 + 4) + -1;
    }
    uVar4 = 0;
    do {
      iVar7 = (int)(uVar4 * 0x10000) >> 0x10;
      uVar10 = (iVar7 - *(short *)(param_1 + 6)) * 0x2000000;
      if (uVar10 >> 0x18 < 3) {
        iVar8 = 0;
        if ((DAT_0202f65e != '\0') || (DAT_0202f65c == '\x01')) {
          iVar8 = 1;
        }
        sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[(ushort)(&DAT_0835e4e8)[iVar7]],
                     iVar8 * -6 + 10,((int)uVar10 >> 0x18) + 2 + (uint)DAT_0202f65d);
      }
      uVar10 = uVar4 * 0x10000 + 0x10000;
      uVar4 = uVar10 >> 0x10;
    } while ((int)uVar10 >> 0x10 < 4);
    iVar7 = 0;
    if ((DAT_0202f65e != '\0') || (DAT_0202f65c == '\x01')) {
      iVar7 = 1;
    }
    sub_080DE510(&DAT_0834cf1e,iVar7 * -6 + 8,DAT_0202f65d);
    iVar7 = 0;
    if ((DAT_0202f65e != '\0') || (DAT_0202f65c == '\x01')) {
      iVar7 = 1;
    }
    sub_080DE510(&DAT_0834c9e4,iVar7 * -6 + 8,
                 ((int)*(short *)(param_1 + 4) - (int)*(short *)(param_1 + 6)) * 2 + 2 +
                 (uint)DAT_0202f65d);
    uVar5 = *(short *)(param_1 + 8) + 1;
    *(ushort *)(param_1 + 8) = uVar5;
    if ((uVar5 & 0x10) == 0) {
      if (*(short *)(param_1 + 6) != 0) {
        iVar7 = 0;
        if ((DAT_0202f65e != '\0') || (DAT_0202f65c == '\x01')) {
          iVar7 = 1;
        }
        sub_080DE6C8(&DAT_080ffa90,iVar7 * -6 + 0x1c,DAT_0202f65d + 2);
      }
      if (*(short *)(param_1 + 6) != 2) {
        iVar7 = 0;
        if ((DAT_0202f65e != '\0') || (DAT_0202f65c == '\x01')) {
          iVar7 = 1;
        }
        sub_080DE6C8(&DAT_080ffa94,iVar7 * -6 + 0x1c,DAT_0202f65d + 5);
      }
    }
    if (*(short *)(param_1 + 10) != 0) {
      FUN_080e6a3e((int)*(short *)(param_1 + 10),*(undefined2 *)(param_1 + 10));
    }
    uVar4 = (uint)DAT_02000d14;
    uVar5 = DAT_02000d14 & 2;
    if ((DAT_02000d14 & 2) != 0) {
      sub_080E6A74();
      uVar4 = extraout_r1;
    }
    if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_080e6b92();
    }
    sub_080032EC(2);
    sVar2 = *(short *)(param_1 + 4);
    if (sVar2 == 0) {
      if ((DAT_0202ebb5 & 0xc0) == 0xc0) {
        *(undefined *)(param_1 + 3) = 0x71;
                    /* WARNING: Subroutine does not return */
        FUN_080e6b92();
      }
LAB_080e6294:
      *(undefined *)(param_1 + 3) = 0x69;
                    /* WARNING: Subroutine does not return */
      FUN_080e6b92();
    }
    if (sVar2 == 1) {
      *(undefined *)(param_1 + 3) = 4;
                    /* WARNING: Subroutine does not return */
      FUN_080e6b92();
    }
    if (sVar2 == 2) {
      sub_080DEFCC(0x72);
      *(ushort *)(param_1 + 10) = uVar5;
      *(undefined *)(param_1 + 3) = 0x3d;
                    /* WARNING: Subroutine does not return */
      FUN_080e6b92();
    }
    if (sVar2 != 3) {
                    /* WARNING: Subroutine does not return */
      FUN_080e6b92();
    }
    if ((DAT_0202ebb5 & 0x80) == 0) {
      if ((DAT_0202ebb5 & 0x40) != 0) {
        sub_080DF038(0x22c);
      }
    }
    else if (DAT_0202ebc0 == '\0') {
      sub_080DF038(0x22d);
      DAT_0202ebc0 = DAT_0202ebc0 + '\x01';
    }
    else {
      sub_080DF038(0x22e);
    }
LAB_080e682c:
    *(undefined *)(param_1 + 3) = 1;
    goto code_r0x080e6b92;
  case 0x69:
    if (DAT_0202f65a != 0) {
      if (DAT_0202f65a != 3) {
                    /* WARNING: Subroutine does not return */
        FUN_080e6b92();
      }
      goto LAB_080e631c;
    }
    sub_08014FBC(&DAT_0202ed18,1);
    DAT_0202ed31 = 4;
    DAT_0202ed3a = uVar5;
    DAT_0202ed4c = 0x14000;
    *(undefined2 *)(param_1 + 4) = 0;
    *(undefined2 *)(param_1 + 6) = 0x40;
    goto LAB_080e6aec;
  case 0x6a:
    sVar2 = *(short *)(param_1 + 6);
    if (*(short *)(param_1 + 6) != 0) {
LAB_080e654e:
      *(short *)(param_1 + 6) = sVar2 + -1;
      goto code_r0x080e6b92;
    }
    uVar6 = sub_080B77E0(param_1 + 4);
    *(undefined4 *)(param_1 + 0xdd4) = uVar6;
    if ((DAT_0202ebb5 & 0x40) == 0) {
      sub_080DF038(3);
    }
    else {
      sub_080DF038(4);
    }
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 0x6b:
    if ((DAT_0202f65a != 0) && (DAT_0202f65a != 3)) {
                    /* WARNING: Subroutine does not return */
      FUN_080e6b92();
    }
    sub_080DEFCC(0x13);
    *(undefined2 *)(param_1 + 10) = 0xf;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
switchD_080e5c94_caseD_6c:
    if ((DAT_0202f65a != 0) && (DAT_0202f65a != 3)) {
                    /* WARNING: Subroutine does not return */
      FUN_080e6b92();
    }
    if ((DAT_02000d16 & 0x10) != 0) {
      *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
      sub_080032EC(1);
    }
    if ((DAT_02000d16 & 0x20) != 0) {
      *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 3;
      sub_080032EC(1);
    }
    uVar5 = *(ushort *)(param_1 + 4) & 3;
    if ((DAT_0202ebb5 & 0x40) != 0) {
      uVar5 = uVar5 + 4;
    }
    *(ushort *)(param_1 + 4) = uVar5;
    if ((*(uint *)(DAT_0202ebf0 + 0x14) & 1 << (&DAT_0835e450)[*(short *)(param_1 + 4)]) == 0) {
      sub_080DE510(&DAT_0834c9e4 +
                   (ushort)(&DAT_0834c47c)[*(ushort *)(&DAT_0835e45c + *(short *)(param_1 + 4) * 2)]
                   ,2,0xd);
    }
    else {
      sub_080DE510(&DAT_0834cef4,2,0xd);
    }
    sVar2 = *(short *)(param_1 + 10);
    if (*(short *)(param_1 + 10) == 0) {
      uVar5 = DAT_02000d16 & 1;
      if ((DAT_02000d16 & 1) == 0) {
        if ((DAT_02000d16 & 2) != 0) {
          sub_080032EC(3);
          DAT_0202f658 = DAT_0202f658 | 2;
          iVar7 = *(int *)(param_1 + 0xdd4);
          *(byte *)(iVar7 + 10) = *(byte *)(iVar7 + 10) & 0xfc;
          *(undefined4 *)(iVar7 + 0xc) = 3;
          *(undefined4 *)(iVar7 + 0x14) =
               *(undefined4 *)((&DAT_08345998)[*(byte *)(iVar7 + 9)] + 0xc);
          sub_08014FBC(&DAT_0202ed18);
          DAT_0202ed31 = 4;
          DAT_0202ed3a = uVar5;
          *(undefined2 *)(param_1 + 6) = 0x40;
LAB_080e6aec:
          *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
        }
      }
      else if ((*(uint *)(DAT_0202ebf0 + 0x14) & 1 << (&DAT_0835e450)[*(short *)(param_1 + 4)]) == 0
              ) {
        sub_080032EC(2);
        sub_080DF038(*(undefined2 *)(&DAT_0835e46c + *(short *)(param_1 + 4) * 2));
        *(undefined *)(param_1 + 3) = 0x6e;
      }
      else {
        sub_080032EC(4);
      }
    }
    else {
code_r0x080e6a3e:
      *(short *)(param_1 + 10) = sVar2 + -1;
    }
    goto code_r0x080e6b92;
  case 0x6c:
    goto switchD_080e5c94_caseD_6c;
  case 0x6d:
    sVar2 = *(short *)(param_1 + 6);
    if (*(short *)(param_1 + 6) != 0) goto LAB_080e654e;
    uVar6 = 0x400;
    break;
  case 0x6e:
    if ((DAT_0202f65a != 0) && (DAT_0202f65a != 3)) goto code_r0x080e6b92;
    *(undefined2 *)(param_1 + 10) = 0;
    sub_080DEFCC(*(undefined2 *)(&DAT_0835e484 + *(short *)(param_1 + 4) * 2));
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 0x6f:
    if (((DAT_0202f65a != 0) && (DAT_0202f65a != 3)) ||
       (uVar4 = sub_080E7A44(param_1), (uVar4 & 0xffff) == 0)) goto code_r0x080e6b92;
    if ((int)(uVar4 * 0x10000) < 1) {
      if ((DAT_0202ebb5 & 0x40) == 0) {
        uVar4 = *(uint *)(DAT_0202ebf0 + 0x14);
        uVar5 = (~(ushort)(uVar4 >> 5) & 1) +
                (~(ushort)(uVar4 >> 3) & 1) + (~(ushort)(uVar4 >> 2) & 1);
        if ((uVar4 & 0x40) == 0) {
          uVar5 = uVar5 + 1;
        }
        if (uVar5 < 2) {
          sub_080DF038(0x11);
        }
        else {
          sub_080DF038(0xf);
        }
      }
      else {
        uVar4 = *(uint *)(DAT_0202ebf0 + 0x14);
        uVar5 = (~(ushort)(uVar4 >> 9) & 1) +
                (~(ushort)(uVar4 >> 8) & 1) + (~(ushort)(uVar4 >> 7) & 1);
        if ((uVar4 & 0x400) == 0) {
          uVar5 = uVar5 + 1;
        }
        if (uVar5 < 2) {
          sub_080DF038(0x12);
        }
        else {
          sub_080DF038(0x10);
        }
      }
      *(undefined *)(param_1 + 3) = 0x6b;
      goto code_r0x080e6b92;
    }
    iVar7 = *(int *)(param_1 + 0xdd4);
    *(byte *)(iVar7 + 10) = *(byte *)(iVar7 + 10) & 0xfc;
    *(undefined4 *)(iVar7 + 0xc) = 3;
    *(undefined4 *)(iVar7 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(iVar7 + 9)] + 0xc);
    if ((DAT_0202ebb5 & 0x80) == 0) {
      if ((DAT_0202ebb5 & 0x40) == 0) {
        sub_0801B454(&DAT_0202ec40,&DAT_08331e18);
      }
      else {
        sub_0801B454(&DAT_0202ec40,&DAT_08332918);
      }
    }
    else {
      sub_0801B454(&DAT_0202ec40,&DAT_08332f00);
    }
    DAT_0202f658 = DAT_0202f658 | 2;
    goto LAB_080e6aec;
  case 0x70:
    if ((DAT_0202ec42 & 1) != 0) goto code_r0x080e6b92;
    puVar11 = (uint *)(param_1 + 0x7254);
    *puVar11 = (uint)(byte)(&DAT_0835e450)[*(short *)(param_1 + 4)];
    sub_08014104(param_1 + 0x7264);
    sub_0801E79C(*(undefined4 *)(param_1 + 0x75b8),param_1 + 0x7324);
    sub_080141A4(*(undefined *)puVar11,param_1 + 0x72d4);
    sub_080148A4(*(undefined *)puVar11);
    uVar6 = 0x300;
    break;
  case 0x71:
    uVar4 = *(uint *)(DAT_0202ebf0 + 0x14);
    if ((uVar4 & 0x2000) == 0) {
      uVar1 = 8;
    }
    else if ((uVar4 & 0x4000) == 0) {
      uVar1 = 9;
    }
    else if ((uVar4 & 0x8000) == 0) {
      uVar1 = 10;
    }
    else {
      uVar1 = 0xb;
    }
    *(undefined2 *)(param_1 + 4) = uVar1;
    sub_080DF038(*(undefined2 *)(&DAT_0835e46c + *(short *)(param_1 + 4) * 2));
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 0x72:
    if ((DAT_0202f65a != 0) && (DAT_0202f65a != 3)) goto code_r0x080e6b92;
    *(undefined2 *)(param_1 + 10) = 0;
    sub_080DEFCC(*(undefined2 *)(&DAT_0835e484 + *(short *)(param_1 + 4) * 2));
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
switchD_080e5c94_caseD_73:
    if ((DAT_0202f65a != 0) && (DAT_0202f65a != 3)) goto code_r0x080e6b92;
    uVar4 = sub_080E7A44(param_1);
    if ((uVar4 & 0xffff) == 0) goto code_r0x080e6b92;
    if ((uVar4 & 0xffff) != 0 && -1 < (int)((uVar4 & 0xffff) * 0x10000)) {
      sub_0801B454(&DAT_0202ec40,&DAT_08332f00);
      DAT_0202f658 = DAT_0202f658 | 2;
      *(undefined *)(param_1 + 3) = 0x70;
      goto code_r0x080e6b92;
    }
    goto LAB_080e682c;
  case 0x73:
    goto switchD_080e5c94_caseD_73;
  case 0x80:
    if ((DAT_0202f65a != 0) && (DAT_0202f65a != 3)) goto code_r0x080e6b92;
    sub_080DEFCC(0x46);
    *(undefined2 *)(param_1 + 4) = 0;
    *(undefined2 *)(param_1 + 6) = 0;
    *(undefined2 *)(param_1 + 8) = 0;
    *(undefined2 *)(param_1 + 10) = 0xf;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 0x81:
    if ((DAT_0202f65a != 0) && (DAT_0202f65a != 3)) goto code_r0x080e6b92;
    uVar10 = 0;
    uVar4 = 0;
    do {
      sVar2 = (short)uVar4;
      if ((*(uint *)(DAT_0202ebf0 + 0x14) & 1 << (&DAT_0835e49c)[sVar2]) != 0) {
        local_3c[(short)uVar10] = sVar2;
        uVar10 = (int)(short)uVar10 + 1U & 0xffff;
      }
      uVar3 = (int)sVar2 + 1;
      uVar4 = uVar3 & 0xffff;
    } while ((int)(uVar3 * 0x10000) >> 0x10 < 0xf);
    iVar7 = uVar10 * 0x10000;
    if (((int)*(short *)(param_1 + 4) < (iVar7 >> 0x10) + -1) && ((DAT_02000d16 & 0x80) != 0)) {
      sub_080032EC(1);
      *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
    }
    if ((0 < *(short *)(param_1 + 4)) && ((DAT_02000d16 & 0x40) != 0)) {
      sub_080032EC(1);
      *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + -1;
    }
    if (*(short *)(param_1 + 4) < *(short *)(param_1 + 6)) {
      *(short *)(param_1 + 6) = *(short *)(param_1 + 4);
    }
    if (*(short *)(param_1 + 6) + 1 < (int)*(short *)(param_1 + 4)) {
      *(short *)(param_1 + 6) = *(short *)(param_1 + 4) + -1;
    }
    uVar4 = 0;
    if (uVar10 != 0 && -1 < iVar7) {
      do {
        iVar8 = (int)(uVar4 * 0x10000) >> 0x10;
        uVar3 = (iVar8 - *(short *)(param_1 + 6)) * 0x2000000;
        if (uVar3 >> 0x18 < 3) {
          iVar9 = 0;
          if ((DAT_0202f65e != '\0') || (DAT_0202f65c == '\x01')) {
            iVar9 = 1;
          }
          sub_080DE510(&DAT_0834c9e4 +
                       (ushort)(&DAT_0834c47c)[*(ushort *)(&DAT_0835e4ac + local_3c[iVar8] * 2)],
                       iVar9 * -6 + 10,((int)uVar3 >> 0x18) + 2 + (uint)DAT_0202f65d);
        }
        uVar3 = uVar4 * 0x10000 + 0x10000;
        uVar4 = uVar3 >> 0x10;
      } while ((int)(uVar3 + uVar10 * -0x10000) < 0 != SBORROW4(uVar3,iVar7));
    }
    iVar8 = 0;
    if ((DAT_0202f65e != '\0') || (DAT_0202f65c == '\x01')) {
      iVar8 = 1;
    }
    sub_080DE510(&DAT_0834c9e4,iVar8 * -6 + 8,
                 ((int)*(short *)(param_1 + 4) - (int)*(short *)(param_1 + 6)) * 2 + 2 +
                 (uint)DAT_0202f65d);
    uVar5 = *(short *)(param_1 + 8) + 1;
    *(ushort *)(param_1 + 8) = uVar5;
    if ((uVar5 & 0x10) == 0) {
      if (*(short *)(param_1 + 6) != 0) {
        iVar8 = 0;
        if ((DAT_0202f65e != '\0') || (DAT_0202f65c == '\x01')) {
          iVar8 = 1;
        }
        sub_080DE6C8(&DAT_080ffa90,iVar8 * -6 + 0x1c,DAT_0202f65d + 2);
      }
      if ((int)*(short *)(param_1 + 6) < (iVar7 >> 0x10) + -2) {
        iVar7 = 0;
        if ((DAT_0202f65e != '\0') || (DAT_0202f65c == '\x01')) {
          iVar7 = 1;
        }
        sub_080DE6C8(&DAT_080ffa94,iVar7 * -6 + 0x1c,DAT_0202f65d + 5);
      }
    }
    sVar2 = *(short *)(param_1 + 10);
    if (*(short *)(param_1 + 10) != 0) goto code_r0x080e6a3e;
    if ((DAT_02000d14 & 2) != 0) {
      sub_080032EC(3);
      *(undefined *)(param_1 + 3) = 0x66;
      goto code_r0x080e6b92;
    }
    if ((DAT_02000d14 & 1) == 0) goto code_r0x080e6b92;
    sub_080032EC(2);
    *(short *)(param_1 + 4) = local_3c[*(short *)(param_1 + 4)];
    goto LAB_080e6aec;
  case 0x82:
    sub_080DEFCC(*(undefined2 *)(&DAT_0835e4ca + *(short *)(param_1 + 4) * 2));
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 0x83:
    if ((DAT_0202f65a != 0) && (DAT_0202f65a != 3)) goto code_r0x080e6b92;
    uVar4 = sub_080E7A44(param_1);
    if ((uVar4 & 0xffff) == 0) goto code_r0x080e6b92;
    if ((uVar4 & 0xffff) == 0 || (int)((uVar4 & 0xffff) * 0x10000) < 0) {
      *(undefined *)(param_1 + 3) = 0x80;
      goto code_r0x080e6b92;
    }
    sub_0801B454(&DAT_0202ec40,&DAT_08333140);
    DAT_0202f658 = DAT_0202f658 | 2;
    goto LAB_080e6aec;
  case 0x84:
    if ((DAT_0202ec42 & 1) == 0) {
      puVar11 = (uint *)(param_1 + 0x7254);
      *puVar11 = (uint)(byte)(&DAT_0835e49c)[*(short *)(param_1 + 4)];
      sub_08014104(param_1 + 0x7264);
      sub_0801E79C(*(undefined4 *)(param_1 + 0x75b8),param_1 + 0x7324);
      sub_080141A4(*(undefined *)puVar11,param_1 + 0x72d4);
      if (*(short *)(&DAT_0835e4ac + *(short *)(param_1 + 4) * 2) == 0x35) {
        sub_080148B4(*(undefined *)puVar11,3);
      }
      else {
        sub_080148A4(*(undefined *)puVar11);
      }
      sub_080E0E64(param_1,0x300);
    }
    goto code_r0x080e6b92;
  }
  sub_080E0E64(param_1,uVar6);
code_r0x080e6b92:
                    /* WARNING: Could not recover jumptable at 0x080e6b9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

