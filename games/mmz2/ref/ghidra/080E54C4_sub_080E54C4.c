// sub_080E54C4 at 0x080E54C4 (thumb)

undefined4 sub_080E54C4(int param_1)

{
  undefined1 *puVar1;
  short sVar2;
  undefined2 uVar3;
  undefined uVar4;
  uint uVar5;
  ushort *puVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 2)) {
  case 0:
    DAT_03002ac0 = 0;
    DAT_02000f90 = DAT_02000f90 & 0xf0f8 | 0x100;
    DAT_02000f9c = 0;
    sub_080DE1BC();
    *(undefined2 *)(param_1 + 6) = 0;
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
  case 1:
    sVar2 = *(short *)(param_1 + 6) + 1;
    *(short *)(param_1 + 6) = sVar2;
    DAT_03002ec0 = (undefined)sVar2;
    DAT_03002ec1 = DAT_03002ec0;
    DAT_03002ec2 = DAT_03002ec0;
    sub_080DE510(&DAT_0834e26f,1,7);
    if (0x1f < *(short *)(param_1 + 6)) {
      uVar3 = 0;
LAB_080e59b4:
      *(undefined2 *)(param_1 + 4) = uVar3;
LAB_080e59b6:
      *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
    }
    break;
  case 2:
    if ((DAT_02000d16 & 0xc0) != 0) {
      sub_080032EC(1);
      *(ushort *)(param_1 + 4) = *(ushort *)(param_1 + 4) ^ 1;
    }
    sub_080DE510(&DAT_0834e26f,1,7);
    sub_080DE510(&DAT_0834c9e4,1,*(short *)(param_1 + 4) * 2 + 9);
    if ((DAT_02000d14 & 1) == 0) {
      return in_lr;
    }
    sub_080032EC(2);
    if (*(short *)(param_1 + 4) != 0) {
      *(undefined2 *)(param_1 + 4) = 0x18b;
      *(undefined *)(param_1 + 2) = 9;
      return in_lr;
    }
    goto LAB_080e59b6;
  case 3:
    uVar5 = 0;
    do {
      iVar9 = sub_080020F0(uVar5 & 0xff,0x1b4);
      if (iVar9 == 0) {
        puVar1 = &DAT_02000404;
        uVar4 = 0;
      }
      else {
        (&DAT_02000404)[uVar5] = 1;
        sub_080021F0(uVar5 & 0xff,&DAT_02000250,0x1b4);
        do {
          do {
            sub_080020D0();
          } while (DAT_02000d40 == '\x01');
        } while (DAT_02000d5e == 0);
        (&DAT_02000410)[uVar5] = DAT_020002e0;
        (&DAT_02000428)[uVar5] = (uint)DAT_020002d5;
        (&DAT_02000440)[uVar5] = DAT_02000250;
        puVar1 = &DAT_02000448;
        uVar4 = DAT_02000251;
      }
      puVar1[uVar5] = uVar4;
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 6);
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
  case 4:
    *(undefined2 *)(param_1 + 4) = 0;
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
switchD_080e54e2_caseD_5:
    sub_080DE510(&DAT_0834e298,9,3);
    if ((DAT_02000d16 & 0x80) != 0) {
      sub_080032EC(1);
      uVar3 = sub_080EF1E8(*(short *)(param_1 + 4) + 1,6);
      *(undefined2 *)(param_1 + 4) = uVar3;
    }
    if ((DAT_02000d16 & 0x40) != 0) {
      sub_080032EC(1);
      uVar3 = sub_080EF1E8(*(short *)(param_1 + 4) + 5,6);
      *(undefined2 *)(param_1 + 4) = uVar3;
    }
    uVar8 = 0;
    uVar5 = 0x7000000;
    iVar9 = 7;
    puVar6 = &DAT_0834c4ba;
    do {
      if ((&DAT_02000404)[uVar8] == '\0') {
        sub_080DE510(&DAT_0834c9e4 + *puVar6,7,iVar9);
        sub_080DE510(&DAT_0834c9e6,9,iVar9);
      }
      else {
        sub_080E0F0C(uVar8 & 0xff,*(undefined *)(&DAT_02000428 + uVar8),(&DAT_02000410)[uVar8],
                     (&DAT_02000440)[uVar8],(&DAT_02000448)[uVar8],uVar5 >> 0x18);
      }
      uVar5 = uVar5 + 0x2000000;
      iVar9 = iVar9 + 2;
      puVar6 = puVar6 + 1;
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < 6);
    sub_080DE510(&DAT_0834c9e4,5,*(short *)(param_1 + 4) * 2 + 7);
    if ((DAT_02000d14 & 2) != 0) {
      sub_080032EC(3);
      *(undefined2 *)(param_1 + 4) = 0;
      *(undefined *)(param_1 + 2) = 2;
      return in_lr;
    }
    if ((DAT_02000d14 & 1) == 0) {
      return in_lr;
    }
    sub_080032EC(2);
    if ((&DAT_02000404)[*(short *)(param_1 + 4)] == '\0') {
      pbVar7 = (byte *)(param_1 + 0x7264);
      sub_08014104(pbVar7);
      sub_0801E79C(*(undefined4 *)(param_1 + 0x75b8),param_1 + 0x7324);
      DAT_0202ebb4 = DAT_0202ebb4 | 8;
      *pbVar7 = *pbVar7 | 8;
      sub_080021A8(*(undefined *)(param_1 + 4),param_1 + 0x7250,0x1b4);
      *(undefined *)(param_1 + 2) = 7;
      return in_lr;
    }
    *(undefined2 *)(param_1 + 10) = 1;
    goto LAB_080e59b6;
  case 5:
    goto switchD_080e54e2_caseD_5;
  case 6:
    sVar2 = *(short *)(param_1 + 4);
    sub_080E0F0C(*(undefined *)(param_1 + 4),*(undefined *)(&DAT_02000428 + sVar2),
                 (&DAT_02000410)[sVar2],(&DAT_02000440)[sVar2],(&DAT_02000448)[sVar2],6);
    if ((DAT_02000d16 & 0xc0) != 0) {
      sub_080032EC(1);
      *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) ^ 1;
    }
    sub_080DE510(&DAT_0834e2bd,7,9);
    sub_080DE510(&DAT_0834c9e4,7,*(short *)(param_1 + 10) * 2 + 0xb);
    if ((DAT_02000d14 & 2) == 0) {
      if ((DAT_02000d14 & 1) == 0) {
        return in_lr;
      }
      sub_080032EC(2);
      if (*(short *)(param_1 + 10) == 0) {
        pbVar7 = (byte *)(param_1 + 0x7264);
        sub_08014104(pbVar7);
        sub_0801E79C(*(undefined4 *)(param_1 + 0x75b8),param_1 + 0x7324);
        DAT_0202ebb4 = DAT_0202ebb4 | 8;
        *pbVar7 = *pbVar7 | 8;
        sub_080021A8(*(undefined *)(param_1 + 4),param_1 + 0x7250,0x1b4);
        goto LAB_080e59b6;
      }
    }
    else {
      sub_080032EC(3);
    }
    *(undefined *)(param_1 + 2) = 5;
    break;
  case 7:
    if (DAT_02000d40 == '\x02') {
      return in_lr;
    }
    if (DAT_02000d5c == 0) {
      return in_lr;
    }
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
  case 8:
    sub_080DE510(&DAT_0834e2a8,5,9);
    if ((DAT_02000d14 & 3) == 0) {
      return in_lr;
    }
    sub_080032EC(2);
    uVar3 = 0x18d;
    goto LAB_080e59b4;
  case 9:
    sVar2 = *(short *)(param_1 + 6) + -1;
    *(short *)(param_1 + 6) = sVar2;
    DAT_03002ec0 = (undefined)sVar2;
    DAT_03002ec1 = DAT_03002ec0;
    DAT_03002ec2 = DAT_03002ec0;
    if (*(short *)(param_1 + 4) == 0x18d) {
      sub_080DE510(&DAT_0834e2a8,5,9);
    }
    else {
      sub_080DE510(&DAT_0834e26f,1,7);
    }
    if (*(short *)(param_1 + 6) == 0) {
      DAT_0202ebb4 = DAT_0202ebb4 & 0xf7;
      *(byte *)(param_1 + 0x7264) = *(byte *)(param_1 + 0x7264) & 0xf7;
      if (*(int *)(param_1 + 0x7254) == 0x10) {
        sub_08001100();
      }
      sub_080E0E64(param_1,0x300);
    }
  }
  return in_lr;
}

