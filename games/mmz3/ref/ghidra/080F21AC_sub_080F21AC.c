// sub_080F21AC at 0x080F21AC (thumb)

undefined4 sub_080F21AC(int param_1)

{
  char cVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 in_lr;
  short asStack_10040 [32768];
  short local_40 [16];
  
  iVar11 = DAT_020302f4;
  iVar7 = DAT_020301c0;
  switch(*(undefined *)(param_1 + 3)) {
  case 0:
    if (DAT_02030c1a == 0) {
      uVar10 = 0xffff;
      uVar12 = 0;
      do {
        if (((int)(*(byte *)((uint)((byte)(&DAT_0838b994)[(int)(uVar12 * 0x10000) >> 0x10] >> 2) +
                            DAT_0203df90) & 0xf) >>
             ((byte)(&DAT_0838b994)[(int)(uVar12 * 0x10000) >> 0x10] & 3) & 1U) == 0) {
          uVar5 = ((short)uVar10 + 1) * 0x10000;
        }
        else {
          uVar5 = (int)(short)uVar10 << 0x10;
        }
        uVar10 = uVar5 >> 0x10;
        uVar4 = uVar12 * 0x10000 + 0x10000;
        uVar12 = uVar4 >> 0x10;
      } while ((int)uVar4 >> 0x10 < 4);
      sub_080EA2B0(*(undefined2 *)((int)&DAT_0838b98c + ((int)uVar5 >> 0xf)));
      sub_080040A8(0x97,0);
      sub_080040A8(0x98,0);
      *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
      goto switchD_080f21ca_caseD_1;
    }
    goto LAB_080f257c;
  case 1:
switchD_080f21ca_caseD_1:
    if ((DAT_02030c1a != 0) && (DAT_02030c1a != 4)) goto switchD_080f21ca_caseD_a;
    sub_080EA244(0xf07);
    *(undefined2 *)(param_1 + 4) = 0;
    *(undefined2 *)(param_1 + 6) = 0;
    *(undefined2 *)(param_1 + 8) = 0;
    *(undefined2 *)(param_1 + 10) = 0xf;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 2:
    if ((DAT_02030c1a != 0) && (DAT_02030c1a != 4)) goto switchD_080f21ca_caseD_a;
    uVar12 = 0;
    uVar10 = 0;
    do {
      sVar2 = (short)uVar10;
      if (((int)(*(byte *)(DAT_0203df90 + (uint)((byte)(&DAT_0838b994)[sVar2] >> 2)) & 0xf) >>
           ((byte)(&DAT_0838b994)[sVar2] & 3) & 1U) == 0) {
        local_40[(short)uVar12] = sVar2;
        uVar12 = (int)(short)uVar12 + 1U & 0xffff;
      }
      uVar5 = (int)sVar2 + 1;
      uVar10 = uVar5 & 0xffff;
    } while ((int)(uVar5 * 0x10000) >> 0x10 < 4);
    iVar7 = uVar12 * 0x10000;
    if (((int)*(short *)(param_1 + 4) < (iVar7 >> 0x10) + -1) && ((DAT_02002136 & 0x80) != 0)) {
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
    uVar10 = 0;
    if (uVar12 != 0 && -1 < iVar7) {
      do {
        iVar11 = (int)(uVar10 * 0x10000) >> 0x10;
        uVar5 = (iVar11 - *(short *)(param_1 + 6)) * 0x2000000;
        if (uVar5 >> 0x18 < 3) {
          iVar9 = 0;
          if ((DAT_02030c1e != '\0') || (DAT_02030c1c == '\x01')) {
            iVar9 = 1;
          }
          sub_080E9604(&DAT_0836f268 +
                       (ushort)(&DAT_0836e9d8)[*(ushort *)(&DAT_0838b998 + local_40[iVar11] * 2)],
                       iVar9 * -7 + 10,((int)uVar5 >> 0x18) + 2 + (uint)DAT_02030c1d);
        }
        uVar5 = uVar10 * 0x10000 + 0x10000;
        uVar10 = uVar5 >> 0x10;
      } while ((int)(uVar5 + uVar12 * -0x10000) < 0 != SBORROW4(uVar5,iVar7));
    }
    iVar11 = 0;
    if ((DAT_02030c1e != '\0') || (DAT_02030c1c == '\x01')) {
      iVar11 = 1;
    }
    sub_080E9604(&DAT_0836f268,iVar11 * -7 + 8,
                 ((int)*(short *)(param_1 + 4) - (int)*(short *)(param_1 + 6)) * 2 + 2 +
                 (uint)DAT_02030c1d);
    uVar3 = *(short *)(param_1 + 8) + 1;
    *(ushort *)(param_1 + 8) = uVar3;
    if ((uVar3 & 0x10) == 0) {
      if (*(short *)(param_1 + 6) != 0) {
        iVar11 = 0;
        if ((DAT_02030c1e != '\0') || (DAT_02030c1c == '\x01')) {
          iVar11 = 1;
        }
        sub_080E97D4(&DAT_0810aa18,iVar11 * -7 + 0x1c,DAT_02030c1d + 2);
      }
      if ((int)*(short *)(param_1 + 6) < (iVar7 >> 0x10) + -2) {
        iVar7 = 0;
        if ((DAT_02030c1e != '\0') || (DAT_02030c1c == '\x01')) {
          iVar7 = 1;
        }
        sub_080E97D4(&DAT_0810aa1c,iVar7 * -7 + 0x1c,DAT_02030c1d + 5);
      }
    }
    if (*(short *)(param_1 + 10) != 0) {
      *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + -1;
      goto switchD_080f21ca_caseD_a;
    }
    if ((DAT_02002134 & 2) == 0) {
      if ((DAT_02002134 & 1) == 0) goto switchD_080f21ca_caseD_a;
      sub_0800471C(2);
      DAT_02030c18 = DAT_02030c18 | 10;
      DAT_020302f4 = 2;
      *(short *)(param_1 + 4) = local_40[*(short *)(param_1 + 4)];
      cVar1 = '\x05';
    }
    else {
      sub_0800471C(3);
      DAT_02030c18 = DAT_02030c18 | 8;
      cVar1 = '\x03';
    }
    break;
  case 3:
    if ((DAT_02030c1a != 0) && (DAT_02030c1a != 4)) goto switchD_080f21ca_caseD_a;
    sub_08004230(0x97);
    sub_08004230(0x98);
    sub_0800393C(&DAT_0873659c,0x4000);
    sub_08003E14(&DAT_087365a8,0);
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 4:
    if (DAT_02030c1a == 0) {
      sub_080EDB10(param_1,0x400);
    }
    else {
LAB_080f257c:
      DAT_02030c18 = DAT_02030c18 | 2;
    }
    goto switchD_080f21ca_caseD_a;
  case 5:
    if (DAT_020302f4 != 0) goto switchD_080f21ca_caseD_a;
    DAT_020300de = DAT_020300de | 1;
    puVar8 = (undefined4 *)sub_0801F864(*(undefined *)(param_1 + 4));
    sub_0801A7D8(&DAT_02030288,3);
    DAT_020302a1 = 8;
    DAT_020302aa = 0;
    DAT_020302c0 = *puVar8;
    DAT_020302c4 = puVar8[1];
    DAT_020302d4 = iVar11;
    DAT_020302dc = iVar11;
    DAT_020302f4 = 1;
    DAT_020302d0 = puVar8;
    *(undefined4 *)(param_1 + 0xecc) = 0;
    cVar1 = *(char *)(param_1 + 3) + '\x01';
    break;
  case 6:
    DAT_02002402 = 0x1000;
    if (*(int *)(param_1 + 0xecc) == 0) {
      uVar6 = sub_0801F864(*(undefined *)(param_1 + 4));
      iVar7 = sub_080D0324(uVar6,0x18);
      *(int *)(param_1 + 0xecc) = iVar7;
    }
    if (DAT_020302f4 != 0) goto switchD_080f21ca_caseD_a;
    sub_080EA1B8(*(undefined2 *)(&DAT_0838b9a0 + *(short *)(param_1 + 4) * 2));
    cVar1 = *(char *)(param_1 + 3) + '\x01';
    break;
  case 7:
    DAT_02002402 = 0x1000;
    if (DAT_02030c1a != 0) goto switchD_080f21ca_caseD_a;
    DAT_020302f4 = 2;
    cVar1 = *(char *)(param_1 + 3) + '\x01';
    break;
  case 8:
    DAT_02002402 = 0x1000;
    if (DAT_020302f4 != 0) goto switchD_080f21ca_caseD_a;
    puVar8 = (undefined4 *)(DAT_020301c0 + 0x54);
    iVar9 = *(int *)(param_1 + 0xecc);
    if (iVar9 != 0) {
      *(byte *)(iVar9 + 10) = *(byte *)(iVar9 + 10) & 0xfc;
      *(undefined4 *)(iVar9 + 0x8c) = 0;
      *(undefined4 *)(iVar9 + 0x90) = 0;
      *(undefined *)(iVar9 + 0x94) = 0;
      *(byte *)(iVar9 + 10) = *(byte *)(iVar9 + 10) & 0xfb;
      *(undefined4 *)(iVar9 + 0xc) = 3;
      *(undefined4 *)(iVar9 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(iVar9 + 9) * 4) + 0xc);
    }
    sub_0801A7D8(&DAT_02030288,6);
    DAT_020302a1 = 8;
    DAT_020302aa = 0;
    DAT_020302c0 = *(undefined4 *)(iVar7 + 0x54);
    DAT_020302c4 = *(undefined4 *)(iVar7 + 0x58);
    DAT_020302d4 = iVar11;
    DAT_020302dc = iVar11;
    DAT_020302f4 = 1;
    cVar1 = *(char *)(param_1 + 3) + '\x01';
    DAT_020302d0 = puVar8;
    break;
  case 9:
    if (DAT_020302f4 != 0) goto switchD_080f21ca_caseD_a;
    DAT_020300de = DAT_020300de & 0xfffe;
    cVar1 = '\x01';
    break;
  default:
    goto switchD_080f21ca_caseD_a;
  }
  *(char *)(param_1 + 3) = cVar1;
switchD_080f21ca_caseD_a:
  sub_080041E4(0x97);
  sub_080041E4(0x98);
  return in_lr;
}

