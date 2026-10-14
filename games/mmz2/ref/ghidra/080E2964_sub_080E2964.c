// sub_080E2964 at 0x080E2964 (thumb)

void sub_080E2964(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  short sVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  uint uVar14;
  code *UNRECOVERED_JUMPTABLE;
  uint local_28;
  
  iVar11 = 0x2060;
  if (DAT_02000ca4 == 0) {
    iVar11 = 0x2070;
  }
  piVar13 = (int *)(param_1 + iVar11);
  if (((DAT_02000ca2 & 1) != 0) && (iVar11 = sub_080E3D88(param_1), iVar11 * 0x10000 < 0)) {
    FUN_080e3300();
  }
  switch(*(undefined *)(param_1 + 2)) {
  case 0:
    sub_08003264(0xb9);
    DAT_02000f90 = DAT_02000f90 & 0xf0ff;
    *(ushort *)(param_1 + 8) = (ushort)DAT_02000ca4;
    uVar3 = 0x10;
LAB_080e2c44:
    *(undefined2 *)(param_1 + 4) = uVar3;
    goto LAB_080e2c46;
  case 1:
    sVar10 = *(short *)(param_1 + 4);
    if (sVar10 == 0) {
      if ((DAT_02000cd6 & 0x1f) == 0) {
        FUN_080e3300();
      }
      uVar1 = DAT_02000ca2;
      DAT_02000ca2 = DAT_02000ca2 & 0xfffb;
      sub_080DE1BC(DAT_02000ca2,uVar1);
      sub_080DE248();
      sub_0800170C((undefined4 *)(param_1 + 0x2050),param_1 + 0x2060,0x10);
      *(undefined4 *)(param_1 + 0x2050) = 0x61aaf3b6;
      *(uint *)(param_1 + 0x2054) = (uint)*(ushort *)(param_1 + 0x12);
      *(uint *)(param_1 + 0x2058) = (uint)*(ushort *)(param_1 + 0x14);
      *(uint *)(param_1 + 0x205c) = (uint)*(ushort *)(param_1 + 0x16);
      if (*(short *)(param_1 + 8) == 0) {
        DAT_02000cdc = DAT_02000cdc & 0xdf;
        DAT_02000d02 = sVar10;
        *(undefined *)(param_1 + 2) = 2;
      }
      else {
        DAT_02000cdc = DAT_02000cdc & 0xef;
        DAT_02000d00 = sVar10;
        *(undefined *)(param_1 + 2) = 6;
      }
    }
    else {
      *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + -1;
    }
    break;
  case 2:
  case 7:
    sub_08001810();
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
  case 3:
  case 8:
    if (DAT_02000ce0 == '\0') {
LAB_080e2c46:
      *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
    }
    break;
  case 4:
  case 6:
    if (*(short *)(param_1 + 8) != 0) {
      if ((DAT_02000cdc & 0x10) == 0) break;
      DAT_020001f8 = piVar13[1];
      DAT_020001fc = piVar13[2];
      DAT_02000200 = piVar13[3];
      iVar11 = *piVar13;
joined_r0x080e2b10:
      if (iVar11 != 0x61aaf3b6) {
        sub_080E0E64(param_1,0x104);
        goto code_r0x080e3300;
      }
      goto LAB_080e2c46;
    }
    if ((DAT_02000cdc & 0x20) != 0) {
      DAT_020001f8 = piVar13[1];
      DAT_020001fc = piVar13[2];
      DAT_02000200 = piVar13[3];
      iVar11 = *piVar13;
      goto joined_r0x080e2b10;
    }
    break;
  case 5:
  case 9:
    DAT_02000f90 = DAT_02000f90 & 0xf0f8 | 0x2500;
    DAT_02000f98 = 0x406;
    DAT_02000fa4 = 0;
    sub_08002638(&DAT_08390eb4,0x4000);
    sub_08002AEC(&DAT_08390ec0,0);
    sub_080EEF68(&DAT_083878c8,(DAT_02000f98 & 0x1f00) * 8 + 0x6000000,0x200);
    *(undefined2 *)(param_1 + 4) = 0;
    *(undefined *)(param_1 + 2) = 10;
  case 10:
    sVar10 = *(short *)(param_1 + 4) + 1;
    *(short *)(param_1 + 4) = sVar10;
    uVar1 = DAT_02000ca2;
    DAT_03002ec0 = (undefined)sVar10;
    DAT_03002ec1 = DAT_03002ec0;
    DAT_03002ec2 = DAT_03002ec0;
    if (sVar10 != 0x20) break;
    uVar2 = DAT_02000ca2 & 0xfffd;
    DAT_02000ca2 = 0;
    sub_0800120C(uVar2,&DAT_02000ca0,uVar1);
    *(undefined2 *)(param_1 + 4) = 0;
    goto LAB_080e2c46;
  case 0xb:
    if ((DAT_02000d16 & 0xb) != 0) {
      sub_080032EC(2);
      uVar3 = 0x20;
      goto LAB_080e2c44;
    }
    break;
  case 0xc:
    sVar10 = *(short *)(param_1 + 4) + -1;
    *(short *)(param_1 + 4) = sVar10;
    DAT_03002ec0 = (undefined)sVar10;
    DAT_03002ec1 = DAT_03002ec0;
    DAT_03002ec2 = DAT_03002ec0;
    if (sVar10 == 0) {
      DAT_02000f90 = DAT_02000f90 & 0xdbff;
      sub_080021F0(*(undefined *)(param_1 + 0xf),&DAT_02036b30,0x1b4);
      *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
      goto switchD_080e29b2_caseD_d;
    }
    break;
  case 0xd:
switchD_080e29b2_caseD_d:
    if ((DAT_02000d40 != '\x01') && (DAT_02000d5e != 0)) {
      if ((uint)*(ushort *)(param_1 + 0x12) + (uint)*(ushort *)(param_1 + 0x14) +
          (uint)*(ushort *)(param_1 + 0x16) < DAT_020001f8 + DAT_020001fc + DAT_02000200) {
        *(short *)(param_1 + 0x7342) = *(short *)(param_1 + 0x7342) + 100;
      }
      if ((uint)*(ushort *)(param_1 + 0x12) + (uint)*(ushort *)(param_1 + 0x14) +
          (uint)*(ushort *)(param_1 + 0x16) == DAT_020001f8 + DAT_020001fc + DAT_02000200) {
        *(short *)(param_1 + 0x7342) = *(short *)(param_1 + 0x7342) + 0x14;
      }
      if (9999 < *(ushort *)(param_1 + 0x7342)) {
        *(undefined2 *)(param_1 + 0x7342) = 9999;
      }
      sub_080021A8(*(undefined *)(param_1 + 0xf),&DAT_02036b30,0x1b4);
      *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
      goto switchD_080e29b2_caseD_e;
    }
    break;
  case 0xe:
switchD_080e29b2_caseD_e:
    if ((DAT_02000d40 != '\x02') && (DAT_02000d5c != 0)) {
      sub_08002EF0(0x9a);
      sub_08002EF0(0x9b);
      sub_08001100();
    }
  }
  if (*(short *)(param_1 + 8) == 0) {
    local_28 = DAT_020001fc;
    uVar8 = DAT_02000200;
    uVar6 = (uint)*(ushort *)(param_1 + 0x12);
    uVar7 = (uint)*(ushort *)(param_1 + 0x14);
    uVar14 = (uint)*(ushort *)(param_1 + 0x16);
    uVar12 = DAT_020001f8;
  }
  else {
    uVar12 = (uint)*(ushort *)(param_1 + 0x12);
    local_28 = (uint)*(ushort *)(param_1 + 0x14);
    uVar8 = (uint)*(ushort *)(param_1 + 0x16);
    uVar6 = DAT_020001f8;
    uVar7 = DAT_020001fc;
    uVar14 = DAT_02000200;
  }
  sub_08002EA0(0x9a);
  sub_08002EA0(0x9b);
  uVar4 = sub_080EF2B8(uVar6 * 100,0x3c);
  if (999 < uVar4) {
    uVar5 = sub_080EF2B8(uVar4,1000);
    iVar11 = sub_080EF330(uVar5,10);
    sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar11 + 0x1e],8,5);
  }
  uVar5 = sub_080EF2B8(uVar4,100);
  iVar11 = sub_080EF330(uVar5,10);
  sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar11 + 0x1e],9,5);
  uVar5 = sub_080EF2B8(uVar4,10);
  iVar11 = sub_080EF330(uVar5,10);
  sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar11 + 0x1e],0xb,5);
  iVar11 = sub_080EF330(uVar4,10);
  sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar11 + 0x1e],0xc,5);
  uVar4 = sub_080EF2B8(uVar7 * 100,0x3c);
  if (999 < uVar4) {
    uVar5 = sub_080EF2B8(uVar4,1000);
    iVar11 = sub_080EF330(uVar5,10);
    sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar11 + 0x1e],8,7);
  }
  uVar5 = sub_080EF2B8(uVar4,100);
  iVar11 = sub_080EF330(uVar5,10);
  sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar11 + 0x1e],9,7);
  uVar5 = sub_080EF2B8(uVar4,10);
  iVar11 = sub_080EF330(uVar5,10);
  sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar11 + 0x1e],0xb,7);
  iVar11 = sub_080EF330(uVar4,10);
  sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar11 + 0x1e],0xc,7);
  uVar4 = sub_080EF2B8(uVar14 * 100,0x3c);
  if (999 < uVar4) {
    uVar5 = sub_080EF2B8(uVar4,1000);
    iVar11 = sub_080EF330(uVar5,10);
    sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar11 + 0x1e],8,9);
  }
  uVar5 = sub_080EF2B8(uVar4,100);
  iVar11 = sub_080EF330(uVar5,10);
  sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar11 + 0x1e],9,9);
  uVar5 = sub_080EF2B8(uVar4,10);
  iVar11 = sub_080EF330(uVar5,10);
  sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar11 + 0x1e],0xb,9);
  iVar11 = sub_080EF330(uVar4,10);
  sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar11 + 0x1e],0xc,9);
  uVar6 = sub_080EF2B8((uVar6 + uVar7 + uVar14) * 100,0x3c);
  if (9999 < uVar6) {
    uVar5 = sub_080EF2B8(uVar6,10000);
    iVar11 = sub_080EF330(uVar5,10);
    sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar11 + 0x1e],7,0xc);
  }
  if (999 < uVar6) {
    uVar5 = sub_080EF2B8(uVar6,1000);
    iVar11 = sub_080EF330(uVar5,10);
    sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar11 + 0x1e],8,0xc);
  }
  uVar5 = sub_080EF2B8(uVar6,100);
  iVar11 = sub_080EF330(uVar5,10);
  sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar11 + 0x1e],9,0xc);
  uVar5 = sub_080EF2B8(uVar6,10);
  iVar11 = sub_080EF330(uVar5,10);
  sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar11 + 0x1e],0xb,0xc);
  iVar11 = sub_080EF330(uVar6,10);
  sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar11 + 0x1e],0xc,0xc);
  uVar7 = sub_080EF2B8(uVar12 * 100,0x3c);
  if (999 < uVar7) {
    uVar5 = sub_080EF2B8(uVar7,1000);
    iVar11 = sub_080EF330(uVar5,10);
    sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar11 + 0x1e],0x17,5);
  }
  uVar5 = sub_080EF2B8(uVar7,100);
  iVar11 = sub_080EF330(uVar5,10);
  sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar11 + 0x1e],0x18,5);
  uVar5 = sub_080EF2B8(uVar7,10);
  iVar11 = sub_080EF330(uVar5,10);
  sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar11 + 0x1e],0x1a,5);
  iVar11 = sub_080EF330(uVar7,10);
  sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar11 + 0x1e],0x1b,5);
  uVar7 = sub_080EF2B8(local_28 * 100,0x3c);
  if (999 < uVar7) {
    uVar5 = sub_080EF2B8(uVar7,1000);
    iVar11 = sub_080EF330(uVar5,10);
    sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar11 + 0x1e],0x17,7);
  }
  uVar5 = sub_080EF2B8(uVar7,100);
  iVar11 = sub_080EF330(uVar5,10);
  sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar11 + 0x1e],0x18,7);
  uVar5 = sub_080EF2B8(uVar7,10);
  iVar11 = sub_080EF330(uVar5,10);
  sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar11 + 0x1e],0x1a,7);
  iVar11 = sub_080EF330(uVar7,10);
  sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar11 + 0x1e],0x1b,7);
  uVar7 = sub_080EF2B8(uVar8 * 100,0x3c);
  if (999 < uVar7) {
    uVar5 = sub_080EF2B8(uVar7,1000);
    iVar11 = sub_080EF330(uVar5,10);
    sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar11 + 0x1e],0x17,9);
  }
  uVar5 = sub_080EF2B8(uVar7,100);
  iVar11 = sub_080EF330(uVar5,10);
  sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar11 + 0x1e],0x18,9);
  uVar5 = sub_080EF2B8(uVar7,10);
  iVar11 = sub_080EF330(uVar5,10);
  sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar11 + 0x1e],0x1a,9);
  iVar11 = sub_080EF330(uVar7,10);
  sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar11 + 0x1e],0x1b,9);
  uVar8 = sub_080EF2B8((local_28 + uVar12 + uVar8) * 100,0x3c);
  if (9999 < uVar8) {
    uVar5 = sub_080EF2B8(uVar8,10000);
    iVar11 = sub_080EF330(uVar5,10);
    sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar11 + 0x1e],0x16,0xc);
  }
  if (999 < uVar8) {
    uVar5 = sub_080EF2B8(uVar8,1000);
    iVar11 = sub_080EF330(uVar5,10);
    sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar11 + 0x1e],0x17,0xc);
  }
  uVar5 = sub_080EF2B8(uVar8,100);
  iVar11 = sub_080EF330(uVar5,10);
  sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar11 + 0x1e],0x18,0xc);
  uVar5 = sub_080EF2B8(uVar8,10);
  iVar11 = sub_080EF330(uVar5,10);
  sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar11 + 0x1e],0x1a,0xc);
  iVar11 = sub_080EF330(uVar8,10);
  sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar11 + 0x1e],0x1b,0xc);
  if (uVar6 == uVar8) {
    sub_080DE6C8("YOU GOT 20EC",1,0x11);
    pcVar9 = "YOU GOT 20EC";
    uVar5 = 0x10;
  }
  else {
    if (uVar8 <= uVar6) {
      if ((*(char *)(param_1 + 2) == '\x05') || (*(char *)(param_1 + 2) == '\t')) {
        sub_08002D68(0x9b,0);
      }
      sub_080DE6C8("YOU GOT 100EC",0x10,0x11);
      goto code_r0x080e3300;
    }
    if ((*(char *)(param_1 + 2) == '\x05') || (*(char *)(param_1 + 2) == '\t')) {
      sub_08002D68(0x9a,0);
    }
    pcVar9 = "YOU GOT 100EC";
    uVar5 = 1;
  }
  sub_080DE6C8(pcVar9,uVar5,0x11);
code_r0x080e3300:
                    /* WARNING: Could not recover jumptable at 0x080e330e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

