// sub_080EEB0C at 0x080EEB0C (thumb)

undefined4 sub_080EEB0C(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  ushort uVar3;
  short sVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 in_lr;
  undefined4 local_1c [2];
  
  switch(*(undefined *)(param_1 + 2)) {
  case 0:
    DAT_030032e0 = DAT_030032e0 | 0x80;
    *(undefined2 *)(param_1 + 4) = 0x20;
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
  case 1:
    sVar4 = *(short *)(param_1 + 4) + -1;
    *(short *)(param_1 + 4) = sVar4;
    if (sVar4 != 0) goto switchD_080eeb22_caseD_7;
    *(undefined *)(DAT_0202f5c0 + 0xd) = 0xb;
    *(undefined *)(DAT_0202f5c0 + 0xe) = 0;
    *(undefined *)(DAT_0202f5c0 + 0xf) = 0;
    *(undefined2 *)(param_1 + 4) = 0x20;
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
switchD_080eeb22_caseD_2:
    sVar4 = *(short *)(param_1 + 4) + 1;
    *(short *)(param_1 + 4) = sVar4;
    DAT_03002ec0 = (byte)sVar4;
    DAT_03002ec1 = DAT_03002ec0;
    DAT_03002ec2 = DAT_03002ec0;
    if (sVar4 < 0x40) goto switchD_080eeb22_caseD_7;
    sub_080EDE88(param_1);
    DAT_03002ac0 = 0;
    DAT_020023c0 = DAT_020023c0 & 0xb0ff | 0x1200;
    DAT_02002420 = 0;
    sub_08004048();
    DAT_020023c6 = 0x204;
    DAT_020023d0 = 0;
    sub_0800393C(&DAT_08547ca8,0x4000);
    sub_08003E14(&DAT_08547cb4,0);
    sub_0800393C(&DAT_08547cbc,(DAT_020023c6 & 0xc) * 0x1000);
    sub_08003E14(&DAT_08547cc8,0);
    sub_08004340(0x12,&DAT_085222a0,0x82,0,0);
    sub_080EDD24();
    sub_0800471C(0x112);
    *(undefined2 *)(param_1 + 4) = 0x40;
    *(undefined2 *)(param_1 + 6) = 0x1000;
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
switchD_080eeb22_caseD_3:
    if (0x20 < *(short *)(param_1 + 4)) {
      sVar4 = *(short *)(param_1 + 4) + -1;
      *(short *)(param_1 + 4) = sVar4;
      DAT_03002ec2 = (byte)sVar4;
      bVar1 = 0xff;
LAB_080eedae:
      DAT_03002ec0 = bVar1 & (byte)sVar4;
      DAT_03002ec1 = DAT_03002ec0;
      goto switchD_080eeb22_caseD_7;
    }
    uVar2 = 0;
    break;
  case 2:
    goto switchD_080eeb22_caseD_2;
  case 3:
    goto switchD_080eeb22_caseD_3;
  case 4:
    if (*(short *)(param_1 + 4) < 0x40) {
      uVar3 = *(short *)(param_1 + 4) + 1;
      goto LAB_080eed9c;
    }
    if (*(char *)(param_1 + 3) == '\0') {
      DAT_02030104 = DAT_02030104 | 0x10;
      if (DAT_02030167 + -5 < 1) {
        DAT_02030167 = '\0';
      }
      else {
        DAT_02030167 = DAT_02030167 + -5;
      }
      sub_080EDCEC();
    }
    else {
      DAT_02030104 = DAT_02030104 & 0xef;
      sub_080EDD24();
      if ((DAT_02002650 & 0x7f) == 10) {
        puVar6 = &DAT_020302e4;
        uVar5 = 0;
      }
      else {
        puVar6 = &DAT_020302e8;
        uVar5 = 0x3c0000;
      }
      *puVar6 = uVar5;
    }
    sub_08025BDC(DAT_0202f5c0);
    DAT_0202f5d8 = 0;
    *(undefined *)(DAT_0202f5c0 + 0x4c) = 1;
    *(byte *)(DAT_0202f5c0 + 0x4a) = *(byte *)(DAT_0202f5c0 + 0x4a) | 0x10;
    *(byte *)(DAT_0202f5c0 + 10) = *(byte *)(DAT_0202f5c0 + 10) | 0x10;
    *(undefined *)(DAT_0202f5c0 + 0xd) = 0xb;
    *(undefined *)(DAT_0202f5c0 + 0xe) = 2;
    *(undefined *)(DAT_0202f5c0 + 0xf) = 0;
    sub_080EDF3C(param_1);
    sub_08004070();
    sub_08017DF0(&DAT_020302c0);
    sub_08016FE4(DAT_02030630);
    sub_08016FE4(DAT_020305e8);
    uVar2 = 8;
    break;
  case 5:
    sVar4 = *(short *)(param_1 + 4) + -1;
    *(short *)(param_1 + 4) = sVar4;
    if (sVar4 != 0) goto switchD_080eeb22_caseD_7;
    uVar2 = 0x40;
    break;
  case 6:
    if (*(short *)(param_1 + 4) == 0) {
      if ((*(char *)(DAT_0202f5c0 + 0xe8) == '\v') && (*(char *)(DAT_0202f5c0 + 0xd) == '\0')) {
        DAT_030032e0 = DAT_030032e0 & 0x7f;
        sub_080EDB10(param_1,0x400);
      }
      goto switchD_080eeb22_caseD_7;
    }
    uVar3 = *(short *)(param_1 + 4) - 1;
LAB_080eed9c:
    *(ushort *)(param_1 + 4) = uVar3;
    bVar1 = (char)((int)((uint)uVar3 << 0x10) >> 0x11) + 0x20;
    sVar4 = 0xff;
    DAT_03002ec2 = bVar1;
    goto LAB_080eedae;
  default:
    goto switchD_080eeb22_caseD_7;
  }
  *(undefined2 *)(param_1 + 4) = uVar2;
  *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
switchD_080eeb22_caseD_7:
  if ((byte)(*(char *)(param_1 + 2) - 3U) < 2) {
    if (*(char *)(param_1 + 3) == '\0') {
      sVar4 = *(short *)(param_1 + 6) + 1;
    }
    else {
      sVar4 = *(short *)(param_1 + 6) + -1;
    }
    *(short *)(param_1 + 6) = sVar4;
    sub_08004340(0x12,&DAT_085222a0,
                 ((int)((uint)*(ushort *)(param_1 + 6) << 0x10) >> 0x11 & 3U) - 0x7e & 0xff,0,
                 (*(ushort *)(param_1 + 6) & 1) << 5);
    uVar2 = 0;
    if ((*(ushort *)(param_1 + 6) & 1) == 0) {
      uVar2 = 0x100;
    }
    DAT_020023d0 = CONCAT22(uVar2,(undefined2)DAT_020023d0);
  }
  else {
    iVar7 = param_1 + 0x9a0;
    sub_0800507C(iVar7);
    sub_08007218();
    DAT_0202f5d4 = 0;
    local_1c[0] = 0;
    sub_080FE110(local_1c,&DAT_0202f5e0,0x1000008);
    sub_0801A200(1);
    sub_08016FB4(DAT_020305dc);
    sub_08016FE4(DAT_02030638);
    sub_080B2414();
    sub_08017224(DAT_02030630,iVar7);
    sub_08017224(DAT_020305e4,iVar7);
    sub_08017224(DAT_020305e8,iVar7);
    sub_08017224(DAT_020305dc,iVar7);
    sub_0801713C(DAT_02030638,iVar7);
    sub_08036F08(iVar7);
    sub_0801713C(DAT_020305f8,iVar7);
    sub_0801713C(DAT_0203062c,iVar7);
    sub_08017224(DAT_02030634,iVar7);
    sub_0801A380(1);
    sub_080F013C(param_1);
    sub_080EA16C();
  }
  return in_lr;
}

