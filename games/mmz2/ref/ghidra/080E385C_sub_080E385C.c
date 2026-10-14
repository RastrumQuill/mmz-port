// sub_080E385C at 0x080E385C (thumb)

undefined4 sub_080E385C(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  short sVar6;
  int iVar7;
  int *piVar8;
  undefined4 in_lr;
  
  iVar7 = 0x2058;
  if (DAT_02000ca4 == 0) {
    iVar7 = 0x2060;
  }
  piVar8 = (int *)(param_1 + iVar7);
  if (((DAT_02000ca2 & 1) != 0) && (iVar7 = sub_080E3D88(param_1), iVar7 * 0x10000 < 0)) {
    return in_lr;
  }
  uVar1 = DAT_02000ca2;
  switch(*(undefined *)(param_1 + 2)) {
  case 0:
    sub_08003264(0xb9);
    DAT_02000f90 = DAT_02000f90 & 0xf0ff;
    *(ushort *)(param_1 + 8) = (ushort)DAT_02000ca4;
    uVar3 = 0x10;
    break;
  case 1:
    sVar6 = *(short *)(param_1 + 4);
    if (sVar6 == 0) {
      if ((DAT_02000cd6 & 0x1f) == 0) {
        return in_lr;
      }
      DAT_02000ca2 = DAT_02000ca2 & 0xfffb;
      sub_080DE1BC(DAT_02000ca2,uVar1);
      sub_080DE248();
      sub_0800170C((undefined4 *)(param_1 + 0x2050),param_1 + 0x2058,8);
      *(undefined4 *)(param_1 + 0x2050) = 0x948f76a3;
      *(uint *)(param_1 + 0x2054) = (uint)*(ushort *)(param_1 + 0x10);
      if (*(short *)(param_1 + 8) == 0) {
        DAT_02000cdc = DAT_02000cdc & 0xdf;
        DAT_02000d02 = sVar6;
        *(undefined *)(param_1 + 2) = 2;
      }
      else {
        DAT_02000cdc = DAT_02000cdc & 0xef;
        DAT_02000d00 = sVar6;
        *(undefined *)(param_1 + 2) = 6;
      }
    }
    else {
      *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + -1;
    }
    goto switchD_080e38a2_caseD_f;
  case 2:
  case 7:
    sub_08001810();
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
  case 3:
  case 8:
    if (DAT_02000ce0 != '\0') goto switchD_080e38a2_caseD_f;
    goto LAB_080e3b16;
  case 4:
  case 6:
    if (*(short *)(param_1 + 8) == 0) {
      if ((DAT_02000cdc & 0x20) == 0) goto switchD_080e38a2_caseD_f;
      *(short *)(param_1 + 6) = (short)piVar8[1];
      iVar7 = *piVar8;
    }
    else {
      if ((DAT_02000cdc & 0x10) == 0) goto switchD_080e38a2_caseD_f;
      *(short *)(param_1 + 6) = (short)piVar8[1];
      iVar7 = *piVar8;
    }
    if (iVar7 != -0x6b70895d) {
      sub_080E0E64(param_1,0x104);
      return in_lr;
    }
    goto LAB_080e3b16;
  case 5:
  case 9:
    DAT_02000f90 = DAT_02000f90 & 0xf0f8 | 0x2500;
    DAT_02000f98 = 0x406;
    DAT_02000fa4 = 0;
    sub_08002638(&DAT_08390eb4,0x4000);
    sub_08002AEC(&DAT_08390ec0,0);
    sub_080EEF68(&DAT_083882d8,(DAT_02000f98 & 0x1f00) * 8 + 0x6000000,0x200);
    *(undefined2 *)(param_1 + 4) = 0;
    *(undefined *)(param_1 + 2) = 10;
  case 10:
    sVar6 = *(short *)(param_1 + 4) + 1;
    *(short *)(param_1 + 4) = sVar6;
    uVar1 = DAT_02000ca2;
    DAT_03002ec0 = (undefined)sVar6;
    DAT_03002ec1 = DAT_03002ec0;
    DAT_03002ec2 = DAT_03002ec0;
    if (sVar6 != 0x20) goto switchD_080e38a2_caseD_f;
    uVar2 = DAT_02000ca2 & 0xfffd;
    DAT_02000ca2 = 0;
    sub_0800120C(uVar2,&DAT_02000ca0,uVar1);
    *(undefined2 *)(param_1 + 4) = 0;
    goto LAB_080e3b16;
  case 0xb:
    if ((DAT_02000d16 & 0xb) == 0) goto switchD_080e38a2_caseD_f;
    sub_080032EC(2);
    uVar3 = 0x20;
    break;
  case 0xc:
    sVar6 = *(short *)(param_1 + 4) + -1;
    *(short *)(param_1 + 4) = sVar6;
    DAT_03002ec0 = (undefined)sVar6;
    DAT_03002ec1 = DAT_03002ec0;
    DAT_03002ec2 = DAT_03002ec0;
    if (sVar6 != 0) goto switchD_080e38a2_caseD_f;
    DAT_02000f90 = DAT_02000f90 & 0xdbff;
    sub_080021F0(*(undefined *)(param_1 + 0xf),&DAT_02036b30,0x1b4);
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
  case 0xd:
    if ((DAT_02000d40 != '\x01') && (DAT_02000d5e != 0)) {
      if ((int)*(short *)(param_1 + 6) < (int)(uint)*(ushort *)(param_1 + 0x10)) {
        *(short *)(param_1 + 0x7342) = *(short *)(param_1 + 0x7342) + 100;
      }
      if ((int)*(short *)(param_1 + 6) == (uint)*(ushort *)(param_1 + 0x10)) {
        *(short *)(param_1 + 0x7342) = *(short *)(param_1 + 0x7342) + 0x14;
      }
      if (9999 < *(ushort *)(param_1 + 0x7342)) {
        *(undefined2 *)(param_1 + 0x7342) = 9999;
      }
      sub_080021A8(*(undefined *)(param_1 + 0xf),&DAT_02036b30,0x1b4);
      *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
switchD_080e38a2_caseD_e:
      if ((DAT_02000d40 != '\x02') && (DAT_02000d5c != 0)) {
        sub_08002EF0(0x9a);
        sub_08002EF0(0x9b);
        sub_08001100();
      }
    }
    goto switchD_080e38a2_caseD_f;
  case 0xe:
    goto switchD_080e38a2_caseD_e;
  default:
    goto switchD_080e38a2_caseD_f;
  }
  *(undefined2 *)(param_1 + 4) = uVar3;
LAB_080e3b16:
  *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
switchD_080e38a2_caseD_f:
  sub_08002EA0(0x9a);
  sub_08002EA0(0x9b);
  if (*(short *)(param_1 + 8) == 0) {
    uVar1 = *(ushort *)(param_1 + 0x10);
    uVar2 = *(ushort *)(param_1 + 6);
  }
  else {
    uVar1 = *(ushort *)(param_1 + 6);
    uVar2 = *(ushort *)(param_1 + 0x10);
  }
  if (99 < uVar1) {
    uVar3 = sub_080EF2B8(uVar1,100);
    iVar7 = sub_080EF330(uVar3,10);
    sub_080DE510(&DAT_0834c9e4 + *(ushort *)(&DAT_0834c4b8 + ((uint)(iVar7 << 0x10) >> 0xf)),10,9);
  }
  if (9 < uVar1) {
    uVar3 = sub_080EF2B8(uVar1,10);
    iVar7 = sub_080EF330(uVar3,10);
    sub_080DE510(&DAT_0834c9e4 + *(ushort *)(&DAT_0834c4b8 + ((uint)(iVar7 << 0x10) >> 0xf)),0xb,9);
  }
  iVar7 = sub_080EF330(uVar1,10);
  sub_080DE510(&DAT_0834c9e4 + *(ushort *)(&DAT_0834c4b8 + ((uint)(iVar7 << 0x10) >> 0xf)),0xc,9);
  if (99 < uVar2) {
    uVar3 = sub_080EF2B8(uVar2,100);
    iVar7 = sub_080EF330(uVar3,10);
    sub_080DE510(&DAT_0834c9e4 + *(ushort *)(&DAT_0834c4b8 + ((uint)(iVar7 << 0x10) >> 0xf)),0x19,9)
    ;
  }
  if (9 < uVar2) {
    uVar3 = sub_080EF2B8(uVar2,10);
    iVar7 = sub_080EF330(uVar3,10);
    sub_080DE510(&DAT_0834c9e4 + *(ushort *)(&DAT_0834c4b8 + ((uint)(iVar7 << 0x10) >> 0xf)),0x1a,9)
    ;
  }
  iVar7 = sub_080EF330(uVar2,10);
  sub_080DE510(&DAT_0834c9e4 + *(ushort *)(&DAT_0834c4b8 + ((uint)(iVar7 << 0x10) >> 0xf)),0x1b,9);
  if (uVar1 == uVar2) {
    sub_080DE6C8("YOU GOT 20EC",1,0x11);
    pcVar4 = "YOU GOT 20EC";
    uVar5 = 0x10;
  }
  else {
    if (uVar1 <= uVar2) {
      if ((*(char *)(param_1 + 2) == '\x05') || (*(char *)(param_1 + 2) == '\t')) {
        sub_08002D68(0x9b,0);
      }
      sub_080DE6C8("YOU GOT 100EC",0x10,0x11);
      return in_lr;
    }
    if ((*(char *)(param_1 + 2) == '\x05') || (*(char *)(param_1 + 2) == '\t')) {
      sub_08002D68(0x9a,0);
    }
    pcVar4 = "YOU GOT 100EC";
    uVar5 = 1;
  }
  sub_080DE6C8(pcVar4,uVar5,0x11);
  return in_lr;
}

