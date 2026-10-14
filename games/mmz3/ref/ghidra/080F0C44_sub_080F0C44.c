// sub_080F0C44 at 0x080F0C44 (thumb)

void sub_080F0C44(int param_1)

{
  undefined uVar1;
  short sVar2;
  ushort uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  short sVar7;
  int extraout_r1;
  int extraout_r1_00;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined2 *puVar12;
  code *UNRECOVERED_JUMPTABLE;
  short asStack_1003c [32768];
  short local_3c [16];
  
  switch(*(undefined *)(param_1 + 3)) {
  case 0:
    if ((DAT_02030105 & 2) == 0) goto LAB_080f0f22;
    sub_080EA244(0);
    *(undefined2 *)(param_1 + 10) = 0;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 1:
    if ((DAT_02030c1a != 0) && (DAT_02030c1a != 4)) {
                    /* WARNING: Subroutine does not return */
      FUN_080f1910();
    }
    sVar2 = sub_080F2DC4(param_1);
    if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_080f1910();
    }
    iVar8 = (int)sVar2;
    if (0 < iVar8) {
      sub_080EA244(0xf);
      FUN_080f18c2();
      iVar8 = extraout_r1;
    }
    if (iVar8 != -1) {
      sub_0800471C(3);
LAB_080f101e:
      *(undefined *)(param_1 + 3) = 2;
                    /* WARNING: Subroutine does not return */
      FUN_080f1910();
    }
LAB_080f0f22:
    *(undefined *)(param_1 + 3) = 3;
                    /* WARNING: Subroutine does not return */
    FUN_080f1910();
  case 2:
    if (DAT_02030c1a == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_080f188a(0,0x400);
    }
    goto LAB_080f1350;
  case 3:
  case 0x3f:
    if ((DAT_02030c1a != 0) && (DAT_02030c1a != 4)) {
                    /* WARNING: Subroutine does not return */
      FUN_080f1910();
    }
    sub_080EA244(1);
    *(undefined2 *)(param_1 + 10) = 0;
    *(undefined *)(param_1 + 3) = 4;
  case 4:
    if ((DAT_02030c1a != 0) && (DAT_02030c1a != 4)) {
                    /* WARNING: Subroutine does not return */
      FUN_080f1910();
    }
    sVar2 = sub_080F2DC4(param_1);
    if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_080f1910();
    }
    if (0 < sVar2) {
      *(undefined *)(param_1 + 3) = 0x40;
                    /* WARNING: Subroutine does not return */
      FUN_080f1910();
    }
    if (sVar2 != -1) goto LAB_080f101e;
    if ((DAT_02030106 & 0x30) == 0x10) {
      sub_08021D7C(&DAT_020301b0,&DAT_08359c00);
      sub_0801A4CC(0x13);
      DAT_02030c18 = DAT_02030c18 | 2;
      *(undefined *)(param_1 + 3) = 0x19;
                    /* WARNING: Subroutine does not return */
      FUN_080f1910();
    }
    if ((DAT_02030105 & 2) == 0) {
      sub_080EA2B0(0x1305);
    }
    else if ((DAT_02030105 & 8) == 0) {
      if (DAT_0203010c == 0) {
        sub_080EA2B0(0x200);
        DAT_0203010c = 1;
      }
      else {
        sub_080EA2B0(0x201);
      }
    }
    else if ((DAT_02030106 & 1) == 0) {
      if (DAT_0203010c < 2) {
        sub_080EA2B0(0x202);
        DAT_0203010c = 2;
      }
      else {
        sub_080EA2B0(0x203);
      }
    }
    else if (DAT_0203010c < 3) {
      sub_080EA2B0(0x204);
      DAT_0203010c = 3;
    }
    else if (DAT_0203010c < 4) {
      sub_080EA2B0(0x205);
      DAT_0203010c = 4;
    }
    else {
      sub_080EA2B0(0x206);
    }
    goto LAB_080f0f22;
  case 5:
    if ((DAT_02030c1a != 0) && (DAT_02030c1a != 4)) {
                    /* WARNING: Subroutine does not return */
      FUN_080f1910();
    }
    sVar2 = sub_080F2DC4(param_1);
    if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_080f1910();
    }
    iVar8 = (int)sVar2;
    if (0 < iVar8) {
      if ((DAT_02030106 & 0x20) != 0) {
        *(undefined *)(param_1 + 3) = 0x13;
                    /* WARNING: Subroutine does not return */
        FUN_080f1910();
      }
      if ((DAT_02030106 & 0x14) == 4) {
        uVar4 = 0x1344;
LAB_080f0f8e:
        sub_080EA2B0(uVar4);
        *(undefined *)(param_1 + 3) = 0x18;
                    /* WARNING: Subroutine does not return */
        FUN_080f1910();
      }
      if ((DAT_02030106 & 0x14) == 0x14) {
        uVar4 = 0x1345;
        goto LAB_080f0f8e;
      }
      sub_080EA2B0(0x10);
      uVar3 = (ushort)((int)-(DAT_02030105 & 8) >> 0x1f) & 4;
      if ((DAT_02030105 & 0x80) == 0) {
        uVar3 = uVar3 | DAT_02030106 & 1;
      }
      else {
        uVar3 = uVar3 + (DAT_02030106 & 1) + 3;
      }
      *(ushort *)(param_1 + 6) = uVar3;
      *(ushort *)(param_1 + 4) = uVar3;
      sVar2 = 3;
      if ((DAT_02030105 & 8) != 0) {
        sVar2 = 6;
      }
      sVar7 = (DAT_02030106 & 1) * 4;
      if ((DAT_02030105 & 0x80) != 0) {
        sVar7 = sVar7 + 1;
      }
      *(short *)(param_1 + 8) = sVar2 + sVar7;
      *(undefined4 *)(param_1 + 0xdcc) = 0;
      FUN_080f17f8();
      iVar8 = extraout_r1_00;
    }
    if (iVar8 != -1) goto LAB_080f101e;
    goto LAB_080f168c;
  case 6:
    if ((DAT_02030c1a != 0) && (DAT_02030c1a != 4)) {
                    /* WARNING: Subroutine does not return */
      FUN_080f1910();
    }
    if (*(int *)(param_1 + 0xdcc) == 0) {
      iVar8 = sub_080C5838(param_1 + 4);
      *(int *)(param_1 + 0xdcc) = iVar8;
    }
    sub_080EA244(0x13);
    *(undefined2 *)(param_1 + 10) = 0x3c;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 7:
    if (*(short *)(param_1 + 10) != 0) {
      *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + -1;
    }
    if (*(short *)(param_1 + 6) != *(short *)(param_1 + 8)) {
      if ((DAT_02002136 & 0x10) != 0) {
        sVar2 = *(short *)(param_1 + 4) + 1;
        *(short *)(param_1 + 4) = sVar2;
        if (*(short *)(param_1 + 8) < sVar2) {
          *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_1 + 6);
        }
        sub_0800471C(1);
      }
      if ((DAT_02002136 & 0x20) != 0) {
        if (*(short *)(param_1 + 4) == *(short *)(param_1 + 6)) {
          sVar2 = *(short *)(param_1 + 8);
        }
        else {
          sVar2 = *(short *)(param_1 + 4) + -1;
        }
        *(short *)(param_1 + 4) = sVar2;
        sub_0800471C(1);
      }
    }
    if ((DAT_02030c1a != 0) && (DAT_02030c1a != 4)) {
                    /* WARNING: Subroutine does not return */
      FUN_080f1910();
    }
    if ((*(uint *)(DAT_02030160 + 0x14) & 1 << (&DAT_0838b8ec)[*(short *)(param_1 + 4)]) == 0) {
      sub_080E9604(&DAT_0836f268 +
                   (ushort)(&DAT_0836e9d8)[*(ushort *)(&DAT_0838b8f8 + *(short *)(param_1 + 4) * 2)]
                   ,2,0xd);
    }
    else {
      sub_080E9604(&DAT_0836fa3c,2,0xd);
    }
    if (*(short *)(param_1 + 10) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_080f1910();
    }
    if ((DAT_02002134 & 1) == 0) {
      if ((DAT_02002134 & 2) != 0) {
        sub_0800471C(3);
        sub_080C5A64(*(undefined4 *)(param_1 + 0xdcc));
        *(undefined *)(param_1 + 3) = 0xb;
      }
    }
    else if ((*(uint *)(DAT_02030160 + 0x14) & 1 << (&DAT_0838b8ec)[*(short *)(param_1 + 4)]) == 0)
    {
      sub_0800471C(2);
      sub_080EA2B0(*(undefined2 *)(&DAT_0838b910 + *(short *)(param_1 + 4) * 2));
code_r0x080f17f8:
      *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
    }
    else {
      sub_0800471C(4);
    }
    goto code_r0x080f1910;
  case 8:
    if ((DAT_02030c1a != 0) && (DAT_02030c1a != 4)) goto code_r0x080f1910;
    *(undefined2 *)(param_1 + 10) = 0;
    sub_080EA244(*(undefined2 *)(&DAT_0838b928 + *(short *)(param_1 + 4) * 2));
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 9:
    if ((DAT_02030c1a != 0) && (DAT_02030c1a != 4)) goto code_r0x080f1910;
    uVar6 = sub_080F2DC4(param_1);
    if ((uVar6 & 0xffff) == 0) goto code_r0x080f1910;
    if ((uVar6 & 0xffff) != 0 && -1 < (int)((uVar6 & 0xffff) * 0x10000)) {
      sub_080C5A64(*(undefined4 *)(param_1 + 0xdcc));
      sub_08021D7C(&DAT_020301b0,&DAT_08358c48);
      DAT_02030c18 = DAT_02030c18 | 2;
      *(undefined *)(param_1 + 3) = 0xc;
      goto code_r0x080f1910;
    }
    uVar3 = 1;
    if ((DAT_02030105 & 8) == 0) {
      uVar6 = *(uint *)(DAT_02030160 + 0x14);
      uVar3 = (~(ushort)(uVar6 >> 4) & 1) +
              (~(ushort)(uVar6 >> 3) & 1) + (~(ushort)(uVar6 >> 2) & 1);
      if ((uVar6 & 0x20) == 0) {
        uVar3 = uVar3 + 1;
      }
    }
    else if ((DAT_02030105 & 0x80) == 0) {
      uVar6 = *(uint *)(DAT_02030160 + 0x14);
      iVar8 = (~(uVar6 >> 8) & 1) + (~(uVar6 >> 7) & 1);
      if ((uVar6 & 0x200) == 0) {
        uVar3 = (ushort)((uint)((iVar8 + 1) * 0x10000) >> 0x10);
      }
      else {
        uVar3 = (ushort)((uint)(iVar8 * 0x10000) >> 0x10);
      }
    }
    else if ((DAT_02030106 & 1) != 0) {
      uVar6 = *(uint *)(DAT_02030160 + 0x14);
      iVar8 = (~(uVar6 >> 0xd) & 1) + (~(uVar6 >> 0xc) & 1) + (~(uVar6 >> 0xb) & 1);
      uVar3 = (ushort)iVar8;
      if ((uVar6 & 0x4000) == 0) {
        uVar3 = (ushort)((uint)((iVar8 + 1) * 0x10000) >> 0x10);
      }
    }
    if (1 < uVar3) {
      sub_080EA2B0(0x11);
LAB_080f1760:
      *(undefined *)(param_1 + 3) = 6;
      goto code_r0x080f1910;
    }
    sub_080EA2B0(0x12);
    goto code_r0x080f17f8;
  case 10:
    if ((DAT_02030c1a != 0) && (DAT_02030c1a != 4)) goto code_r0x080f1910;
    sub_080C5A64(*(undefined4 *)(param_1 + 0xdcc));
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 0xb:
    if (DAT_02030c1a == 0) {
      sub_080EA244(0xf);
      *(undefined2 *)(param_1 + 10) = 0;
code_r0x080f18c2:
      *(undefined *)(param_1 + 3) = 5;
    }
    else {
LAB_080f1350:
      DAT_02030c18 = DAT_02030c18 | 2;
    }
    goto code_r0x080f1910;
  case 0xc:
    if ((DAT_020301b2 & 1) != 0) goto code_r0x080f1910;
    *(ushort *)(param_1 + 0x6260) = (ushort)(byte)(&DAT_0838b8ec)[*(short *)(param_1 + 4)];
    sub_08019850(param_1 + 0x6270);
    sub_080324DC(*(undefined4 *)(param_1 + 0x64ac),param_1 + 0x6460);
    uVar1 = *(undefined *)(ushort *)(param_1 + 0x6260);
    break;
  case 0xd:
    sub_080EA244(0x32);
    *(undefined2 *)(param_1 + 4) = 0;
    *(undefined2 *)(param_1 + 6) = 0;
    *(undefined2 *)(param_1 + 8) = 0;
    *(undefined2 *)(param_1 + 10) = 0xf;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 0xe:
    if ((DAT_02030c1a != 0) && (DAT_02030c1a != 4)) goto code_r0x080f1910;
    uVar11 = 0;
    uVar6 = 0;
    do {
      sVar2 = (short)uVar6;
      if ((*(uint *)(DAT_02030160 + 0x14) & 1 << (&DAT_0838b940)[sVar2]) != 0) {
        local_3c[(short)uVar11] = sVar2;
        uVar11 = (int)(short)uVar11 + 1U & 0xffff;
      }
      uVar5 = (int)sVar2 + 1;
      uVar6 = uVar5 & 0xffff;
    } while ((int)(uVar5 * 0x10000) >> 0x10 < 0xf);
    iVar8 = uVar11 * 0x10000;
    if (((int)*(short *)(param_1 + 4) < (iVar8 >> 0x10) + -1) && ((DAT_02002136 & 0x80) != 0)) {
      sub_0800471C(1);
      *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
    }
    if ((0 < *(short *)(param_1 + 4)) && ((DAT_02002136 & 0x40) != 0)) {
      sub_0800471C(1);
      *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + -1;
    }
    if (*(short *)(param_1 + 4) < *(short *)(param_1 + 6)) {
      *(short *)(param_1 + 6) = *(short *)(param_1 + 4);
    }
    if (*(short *)(param_1 + 6) + 1 < (int)*(short *)(param_1 + 4)) {
      *(short *)(param_1 + 6) = *(short *)(param_1 + 4) + -1;
    }
    uVar6 = 0;
    if (uVar11 != 0 && -1 < iVar8) {
      do {
        iVar9 = (int)(uVar6 * 0x10000) >> 0x10;
        uVar5 = (iVar9 - *(short *)(param_1 + 6)) * 0x2000000;
        if (uVar5 >> 0x18 < 3) {
          iVar10 = 0;
          if ((DAT_02030c1e != '\0') || (DAT_02030c1c == '\x01')) {
            iVar10 = 1;
          }
          sub_080E9604(&DAT_0836f268 +
                       (ushort)(&DAT_0836e9d8)[*(ushort *)(&DAT_0838b950 + local_3c[iVar9] * 2)],
                       iVar10 * -7 + 10,((int)uVar5 >> 0x18) + 2 + (uint)DAT_02030c1d);
        }
        uVar5 = uVar6 * 0x10000 + 0x10000;
        uVar6 = uVar5 >> 0x10;
      } while ((int)(uVar5 + uVar11 * -0x10000) < 0 != SBORROW4(uVar5,iVar8));
    }
    iVar9 = 0;
    if ((DAT_02030c1e != '\0') || (DAT_02030c1c == '\x01')) {
      iVar9 = 1;
    }
    sub_080E9604(&DAT_0836f268,iVar9 * -7 + 8,
                 ((int)*(short *)(param_1 + 4) - (int)*(short *)(param_1 + 6)) * 2 + 2 +
                 (uint)DAT_02030c1d);
    uVar3 = *(short *)(param_1 + 8) + 1;
    *(ushort *)(param_1 + 8) = uVar3;
    if ((uVar3 & 0x10) == 0) {
      if (*(short *)(param_1 + 6) != 0) {
        iVar9 = 0;
        if ((DAT_02030c1e != '\0') || (DAT_02030c1c == '\x01')) {
          iVar9 = 1;
        }
        sub_080E97D4(&DAT_0810aa18,iVar9 * -7 + 0x1c,DAT_02030c1d + 2);
      }
      if ((int)*(short *)(param_1 + 6) < (iVar8 >> 0x10) + -2) {
        iVar8 = 0;
        if ((DAT_02030c1e != '\0') || (DAT_02030c1c == '\x01')) {
          iVar8 = 1;
        }
        sub_080E97D4(&DAT_0810aa1c,iVar8 * -7 + 0x1c,DAT_02030c1d + 5);
      }
    }
    if (*(short *)(param_1 + 10) != 0) {
      *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + -1;
      goto code_r0x080f1910;
    }
    if ((DAT_02002134 & 2) != 0) {
      sub_0800471C(3);
      sub_080EA244(0xf);
      *(undefined2 *)(param_1 + 10) = 0;
      goto code_r0x080f18c2;
    }
    if ((DAT_02002134 & 1) == 0) goto code_r0x080f1910;
    sub_0800471C(2);
    *(short *)(param_1 + 4) = local_3c[*(short *)(param_1 + 4)];
    goto code_r0x080f17f8;
  case 0xf:
    sub_080EA244(*(undefined2 *)(&DAT_0838b96e + *(short *)(param_1 + 4) * 2));
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 0x10:
    if ((DAT_02030c1a != 0) && (DAT_02030c1a != 4)) goto code_r0x080f1910;
    uVar6 = sub_080F2DC4(param_1);
    if ((uVar6 & 0xffff) == 0) goto code_r0x080f1910;
    if ((uVar6 & 0xffff) == 0 || (int)((uVar6 & 0xffff) * 0x10000) < 0) {
LAB_080f168c:
      *(undefined *)(param_1 + 3) = 0xd;
      goto code_r0x080f1910;
    }
    sub_08021D7C(&DAT_020301b0,&DAT_08358e80);
    DAT_02030c18 = DAT_02030c18 | 2;
    goto code_r0x080f17f8;
  case 0x11:
    if ((DAT_020301b2 & 1) != 0) goto code_r0x080f1910;
    *(ushort *)(param_1 + 0x6260) = (ushort)(byte)(&DAT_0838b940)[*(short *)(param_1 + 4)];
    sub_08019850(param_1 + 0x6270);
    sub_080324DC(*(undefined4 *)(param_1 + 0x64ac),param_1 + 0x6460);
    uVar1 = *(undefined *)(ushort *)(param_1 + 0x6260);
    break;
  case 0x12:
    sub_080EA2B0(0x10);
    uVar3 = (ushort)((int)-(DAT_02030105 & 8) >> 0x1f) & 4;
    if ((DAT_02030105 & 0x80) == 0) {
      uVar3 = uVar3 | DAT_02030106 & 1;
    }
    else {
      uVar3 = uVar3 + (DAT_02030106 & 1) + 3;
    }
    *(ushort *)(param_1 + 6) = uVar3;
    *(ushort *)(param_1 + 4) = uVar3;
    sVar2 = 3;
    if ((DAT_02030105 & 8) != 0) {
      sVar2 = 6;
    }
    sVar7 = (DAT_02030106 & 1) * 4;
    if ((DAT_02030105 & 0x80) != 0) {
      sVar7 = sVar7 + 1;
    }
    *(short *)(param_1 + 8) = sVar2 + sVar7;
    *(undefined4 *)(param_1 + 0xdcc) = 0;
    goto LAB_080f1760;
  case 0x13:
    if ((DAT_02030106 & 0x40) != 0) {
      sub_080EA2B0(0x2c);
      *(undefined *)(param_1 + 3) = 0x15;
      goto code_r0x080f1910;
    }
    sub_08021D7C(&DAT_020301b0,&DAT_0835a2a8);
    DAT_02030c18 = DAT_02030c18 | 2;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 0x14:
    uVar3 = (ushort)DAT_020301b2;
    if ((DAT_020301b2 & 1) == 0) {
      DAT_02030106 = DAT_02030106 | 0x40;
      sub_080EA244(0x2d);
      *(ushort *)(param_1 + 10) = uVar3 & 1;
      *(undefined *)(param_1 + 3) = 0x16;
    }
    goto code_r0x080f1910;
  case 0x15:
    if ((DAT_02030c1a != 0) && (DAT_02030c1a != 4)) goto code_r0x080f1910;
    sub_080EA244(0x2d);
    *(undefined2 *)(param_1 + 10) = 0;
    goto code_r0x080f17f8;
  case 0x16:
    if ((DAT_02030c1a != 0) && (DAT_02030c1a != 4)) goto code_r0x080f1910;
    uVar6 = sub_080F2DC4(param_1);
    if ((uVar6 & 0xffff) == 0) goto code_r0x080f1910;
    if ((uVar6 & 0xffff) != 0 && -1 < (int)((uVar6 & 0xffff) * 0x10000)) {
      sub_08021D7C(&DAT_020301b0,&DAT_08358c48);
      DAT_02030c18 = DAT_02030c18 | 2;
      *(undefined *)(param_1 + 3) = 0x17;
      goto code_r0x080f1910;
    }
    goto LAB_080f18b8;
  case 0x17:
    if ((DAT_020301b2 & 1) != 0) goto code_r0x080f1910;
    *(undefined2 *)(param_1 + 0x6260) = 0x10;
    sub_08019850(param_1 + 0x6270);
    sub_080324DC(*(undefined4 *)(param_1 + 0x64ac),param_1 + 0x6460);
    uVar1 = *(undefined *)(undefined2 *)(param_1 + 0x6260);
    break;
  case 0x18:
    if ((DAT_02030c1a != 0) && (DAT_02030c1a != 4)) goto code_r0x080f1910;
LAB_080f18b8:
    sub_080EA244(0xf);
    *(undefined2 *)(param_1 + 10) = 0;
    goto code_r0x080f18c2;
  case 0x19:
    if ((DAT_020301b2 & 1) == 0) {
      puVar12 = (undefined2 *)(param_1 + 0x6260);
      *puVar12 = 0xf;
      sub_08019850(param_1 + 0x6270);
      sub_080324DC(*(undefined4 *)(param_1 + 0x64ac),param_1 + 0x6460);
      sub_080198F0(*(undefined *)puVar12,param_1 + 0x6410);
      sub_0801A02C(*(undefined *)puVar12);
      sub_080EDB10(param_1,0x300);
    }
    goto code_r0x080f1910;
  default:
    sub_080F01B4(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_080f1910();
  }
  sub_080198F0(uVar1,param_1 + 0x6410);
  sub_0801A02C(*(undefined *)(param_1 + 0x6260));
  sub_080EDB10(param_1,0x300);
code_r0x080f1910:
                    /* WARNING: Could not recover jumptable at 0x080f191c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

