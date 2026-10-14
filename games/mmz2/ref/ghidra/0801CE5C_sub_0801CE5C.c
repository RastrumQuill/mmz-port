// sub_0801CE5C at 0x0801CE5C (thumb)

undefined8 sub_0801CE5C(char *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 in_lr;
  
  switch(*param_1) {
  case '\0':
    sub_0801DA44();
    iVar2 = sub_080D65EC(DAT_02036e98);
    if (iVar2 != 0) {
      *(undefined *)(DAT_0202ebf0 + 6) = 1;
    }
    iVar2 = sub_080D6694(DAT_02036e98);
    if (iVar2 != 0) {
      *(byte *)(DAT_0202ebf0 + 7) = *(byte *)(DAT_0202ebf0 + 7) & 0xf0 | 1;
    }
    iVar2 = sub_080D6630(DAT_02036e98);
    if (iVar2 != 0) {
      *(byte *)(DAT_0202ebf0 + 7) = *(byte *)(DAT_0202ebf0 + 7) & 0xf | 0x10;
    }
    iVar2 = sub_080D61B8(DAT_02036e98);
    DAT_0202ec00 = DAT_0202ec00 + iVar2;
    if (DAT_0202ec30 == 2) {
      DAT_0202ebf7 = (DAT_0202ebb6 & 1) * '\x04';
      if ((DAT_0202ebb6 & 2) != 0) {
        DAT_0202ebf7 = DAT_0202ebf7 + '\x04';
      }
      if ((DAT_0202ebb6 & 4) != 0) {
        DAT_0202ebf7 = DAT_0202ebf7 + '\x04';
      }
      if ((DAT_0202ebb6 & 8) != 0) {
        DAT_0202ebf7 = DAT_0202ebf7 + '\x04';
      }
      if ((DAT_0202ebb6 & 0x10) != 0) {
        DAT_0202ebf7 = DAT_0202ebf7 + '\x04';
      }
    }
    else if (DAT_0202ec30 == 3) {
      cVar4 = '\0';
      if ((DAT_0202ebb6 & 0x20) != 0) {
        cVar4 = '\x05';
      }
      if ((DAT_0202ebb6 & 0x40) != 0) {
        cVar4 = cVar4 + '\x05';
      }
      cVar1 = (DAT_0202ebb7 & 1) * '\x05';
      if ((DAT_0202ebb6 & 0x80) != 0) {
        cVar1 = cVar1 + '\x05';
      }
      DAT_0202ebf7 = cVar4 + cVar1;
    }
    sub_080141FC();
    DAT_02000f96 = 0x204;
    DAT_02000fa0 = 0;
    DAT_02000f90 = DAT_02000f90 & 0xf0ff | 0x1300;
    sub_08002638(&DAT_083914cc,0x4000);
    sub_08002AEC(&DAT_083914d8,0);
    sub_08002638(&DAT_08390e8c,(DAT_02000f96 & 0xc) * 0x1000);
    sub_08002AEC(&DAT_08390e98,0);
    sub_080EEF68(&DAT_08385290,(DAT_02000f96 & 0x1f00) * 8 + 0x6000000,0x200);
    sub_08002D0C();
    sub_08002D68(0x91,0);
    DAT_02000fe0 = DAT_02000fe0 & 0xbfff;
    if (DAT_0202ed98 != 0xc6) {
      if (DAT_0202ed98 != 0xffffffff) {
        sub_08003274(DAT_0202ed98 & 0xffff);
        DAT_0202ed98 = 0xffffffff;
      }
      sub_08003264(0xc6);
      DAT_0202ed98 = 0xc6;
    }
    DAT_0202ed84 = 9;
    *param_1 = *param_1 + '\x01';
  case '\x01':
    sub_08002EA0(0x91);
    if (DAT_0202ed84 == 0) {
      DAT_03002ac0 = 0;
      param_1[1] = '\0';
LAB_0801d148:
      *param_1 = *param_1 + '\x01';
    }
    break;
  case '\x02':
    sub_08002EA0(0x91);
    iVar2 = sub_0801D1D8(param_1);
    if (iVar2 != 1) {
      param_1[1] = '\0';
      goto LAB_0801d148;
    }
    break;
  case '\x03':
    sub_08002EA0(0x91);
    iVar2 = sub_0801D60C(param_1);
    if (iVar2 != 1) {
      param_1[1] = '\0';
      goto LAB_0801d148;
    }
    break;
  case '\x04':
    sub_08002EA0(0x91);
    iVar2 = sub_0801D6D8(param_1);
    if (iVar2 != 1) {
      param_1[1] = '\0';
      goto LAB_0801d148;
    }
    break;
  case '\x05':
    sub_08002EA0(0x91);
    iVar2 = sub_0801D7A0(param_1);
    if (iVar2 != 1) {
      param_1[1] = '\0';
      goto LAB_0801d148;
    }
    break;
  case '\x06':
    sub_08002EA0(0x91);
    if (*(int *)(param_1 + 0xc) == 0) {
      if ((DAT_02000d14 & 0xb) == 0) break;
      sub_080032EC(2);
    }
    if (DAT_0202ed98 != 0xffffffff) {
      sub_08003274(DAT_0202ed98 & 0xffff);
      DAT_0202ed98 = 0xffffffff;
    }
    DAT_0202ed84 = 10;
    goto LAB_0801d148;
  case '\a':
    sub_08002EA0(0x91);
    if (DAT_0202ed84 == 0) {
      DAT_02000f90 = DAT_02000f90 & 0xedff;
      sub_08002EF0(0x91);
      sub_08002D34();
      *(undefined2 *)(param_1 + 4) = 0x3c;
      *param_1 = *param_1 + '\x01';
      goto switchD_0801ce70_caseD_8;
    }
    break;
  case '\b':
switchD_0801ce70_caseD_8:
    if (*(short *)(param_1 + 4) == 0) {
      *(undefined *)(DAT_0202ebf0 + 0x4c) = 0;
      sub_0801E79C(DAT_02036e98,&DAT_02036c04);
      uVar3 = 0;
      goto LAB_0801d1d2;
    }
    *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + -1;
  }
  uVar3 = 1;
LAB_0801d1d2:
  return CONCAT44(in_lr,uVar3);
}

