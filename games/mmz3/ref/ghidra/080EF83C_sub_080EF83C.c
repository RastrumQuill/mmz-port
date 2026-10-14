// sub_080EF83C at 0x080EF83C (thumb)

undefined4 sub_080EF83C(int param_1)

{
  short sVar1;
  undefined2 uVar2;
  uint uVar3;
  ushort *puVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 2)) {
  case 0:
    DAT_03002ac0 = 0;
    DAT_020023c0 = DAT_020023c0 & 0xf0f8 | 0x100;
    DAT_020023cc = 0;
    sub_080E9250();
    *(undefined2 *)(param_1 + 6) = 0;
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
  case 1:
    sVar1 = *(short *)(param_1 + 6) + 1;
    *(short *)(param_1 + 6) = sVar1;
    DAT_03002ec0 = (undefined)sVar1;
    DAT_03002ec1 = DAT_03002ec0;
    DAT_03002ec2 = DAT_03002ec0;
    sub_080E9604(&DAT_08370e51,1,7);
    if (0x1f < *(short *)(param_1 + 6)) {
      uVar2 = 0;
LAB_080efd6a:
      *(undefined2 *)(param_1 + 4) = uVar2;
LAB_080efd6c:
      *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
    }
    break;
  case 2:
    if ((DAT_02002136 & 0xc0) != 0) {
      sub_0800471C(1);
      *(ushort *)(param_1 + 4) = *(ushort *)(param_1 + 4) ^ 1;
    }
    sub_080E9604(&DAT_08370e51,1,7);
    sub_080E9604(&DAT_0836f268,1,*(short *)(param_1 + 4) * 2 + 9);
    if ((DAT_02002134 & 1) == 0) {
      return in_lr;
    }
    sub_0800471C(2);
    if (*(short *)(param_1 + 4) != 0) {
      *(undefined2 *)(param_1 + 4) = 0x18b;
      *(undefined *)(param_1 + 2) = 9;
      return in_lr;
    }
    goto LAB_080efd6c;
  case 3:
    uVar3 = 0;
    do {
      (&DAT_020005e0)[uVar3] = 0;
      iVar7 = sub_08003274(uVar3 & 0xff,0x250);
      if (iVar7 != 0) {
        sub_080034F4(uVar3 & 0xff,&DAT_02000390,0x250);
        do {
          do {
            sub_08003254();
          } while (DAT_02002160 == '\x01');
        } while (DAT_0200217e == 0);
        if ((DAT_02002160 != '\x01') && (0 < DAT_0200217e)) {
          (&DAT_020005e0)[uVar3] = 1;
          (&DAT_020005e8)[uVar3] = DAT_02000550;
          (&DAT_02000600)[uVar3] = (uint)DAT_02000545;
          (&DAT_02000614)[uVar3] = (char)DAT_02000390;
          (&DAT_0200061c)[uVar3] = (char)DAT_02000392;
        }
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < 5);
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
  case 4:
    *(undefined2 *)(param_1 + 4) = 0;
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
switchD_080ef85a_caseD_5:
    sub_080E9604(&DAT_08370e79,9,3);
    if ((DAT_02002136 & 0x80) != 0) {
      sub_0800471C(1);
      uVar2 = sub_080FE390(*(short *)(param_1 + 4) + 1,5);
      *(undefined2 *)(param_1 + 4) = uVar2;
    }
    if ((DAT_02002136 & 0x40) != 0) {
      sub_0800471C(1);
      uVar2 = sub_080FE390(*(short *)(param_1 + 4) + 4,5);
      *(undefined2 *)(param_1 + 4) = uVar2;
    }
    uVar6 = 0;
    uVar3 = 0x7000000;
    iVar7 = 7;
    puVar4 = &DAT_0836ea16;
    do {
      if ((&DAT_020005e0)[uVar6] == '\0') {
        sub_080E9604(&DAT_0836f268 + *puVar4,7,iVar7);
        sub_080E9604(&DAT_0836f26a,9,iVar7);
      }
      else {
        sub_080EDB1C(uVar6 & 0xff,*(undefined *)(&DAT_02000600 + uVar6),(&DAT_020005e8)[uVar6],
                     (&DAT_02000614)[uVar6],(&DAT_0200061c)[uVar6],uVar3 >> 0x18);
      }
      uVar3 = uVar3 + 0x2000000;
      iVar7 = iVar7 + 2;
      puVar4 = puVar4 + 1;
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < 5);
    sub_080E9604(&DAT_0836f268,5,*(short *)(param_1 + 4) * 2 + 7);
    if ((DAT_02002134 & 2) != 0) {
      sub_0800471C(3);
      *(undefined2 *)(param_1 + 4) = 0;
      *(undefined *)(param_1 + 2) = 2;
      return in_lr;
    }
    if ((DAT_02002134 & 1) == 0) {
      return in_lr;
    }
    sub_0800471C(2);
    if ((&DAT_020005e0)[*(short *)(param_1 + 4)] == '\0') {
      pbVar5 = (byte *)(param_1 + 0x6270);
      sub_08019850(pbVar5);
      sub_080324DC(*(undefined4 *)(param_1 + 0x64ac),param_1 + 0x6460);
      DAT_02030104 = DAT_02030104 | 8;
      *pbVar5 = *pbVar5 | 8;
      sub_080034AC(*(undefined *)(param_1 + 4),param_1 + 0x625c,0x250);
      do {
        do {
          sub_08003254();
        } while (DAT_02002160 == '\x02');
      } while (DAT_0200217c == 0);
      *(undefined *)(param_1 + 2) = 7;
      return in_lr;
    }
    *(undefined2 *)(param_1 + 10) = 1;
    goto LAB_080efd6c;
  case 5:
    goto switchD_080ef85a_caseD_5;
  case 6:
    sVar1 = *(short *)(param_1 + 4);
    sub_080EDB1C(*(undefined *)(param_1 + 4),*(undefined *)(&DAT_02000600 + sVar1),
                 (&DAT_020005e8)[sVar1],(&DAT_02000614)[sVar1],(&DAT_0200061c)[sVar1],6);
    if ((DAT_02002136 & 0xc0) != 0) {
      sub_0800471C(1);
      *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) ^ 1;
    }
    sub_080E9604(&DAT_08370e9d,7,9);
    sub_080E9604(&DAT_0836f268,7,*(short *)(param_1 + 10) * 2 + 0xb);
    if ((DAT_02002134 & 2) == 0) {
      if ((DAT_02002134 & 1) == 0) {
        return in_lr;
      }
      sub_0800471C(2);
      if (*(short *)(param_1 + 10) == 0) {
        pbVar5 = (byte *)(param_1 + 0x6270);
        sub_08019850(pbVar5);
        sub_080324DC(*(undefined4 *)(param_1 + 0x64ac),param_1 + 0x6460);
        DAT_02030104 = DAT_02030104 | 8;
        *pbVar5 = *pbVar5 | 8;
        sub_080034AC(*(undefined *)(param_1 + 4),param_1 + 0x625c,0x250);
        do {
          do {
            sub_08003254();
          } while (DAT_02002160 == '\x02');
        } while (DAT_0200217c == 0);
        goto LAB_080efd6c;
      }
    }
    else {
      sub_0800471C(3);
    }
    *(undefined *)(param_1 + 2) = 5;
    break;
  case 7:
    if (DAT_02002160 == '\x02') {
      return in_lr;
    }
    if (DAT_0200217c == 0) {
      return in_lr;
    }
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
  case 8:
    sub_080E9604(&DAT_08370e88,5,9);
    if ((DAT_02002134 & 3) == 0) {
      return in_lr;
    }
    sub_0800471C(2);
    uVar2 = 0x18d;
    goto LAB_080efd6a;
  case 9:
    sVar1 = *(short *)(param_1 + 6) + -1;
    *(short *)(param_1 + 6) = sVar1;
    DAT_03002ec0 = (undefined)sVar1;
    DAT_03002ec1 = DAT_03002ec0;
    DAT_03002ec2 = DAT_03002ec0;
    if (*(short *)(param_1 + 4) == 0x18d) {
      sub_080E9604(&DAT_08370e88,5,9);
    }
    else {
      sub_080E9604(&DAT_08370e51,1,7);
    }
    if (*(short *)(param_1 + 6) == 0) {
      DAT_02030104 = DAT_02030104 & 0xf7;
      *(byte *)(param_1 + 0x6270) = *(byte *)(param_1 + 0x6270) & 0xf7;
      if (*(short *)(param_1 + 0x6260) == 0x10) {
        sub_08002398();
      }
      sub_080EDB10(param_1,0x300);
    }
  }
  return in_lr;
}

