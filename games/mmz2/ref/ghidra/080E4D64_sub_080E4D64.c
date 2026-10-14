// sub_080E4D64 at 0x080E4D64 (thumb)

undefined4 sub_080E4D64(int param_1)

{
  char *pcVar1;
  undefined uVar2;
  char cVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 2)) {
  case 0:
    uVar2 = sub_080E0E70();
    *(undefined *)(param_1 + 3) = uVar2;
    DAT_02000f90 = DAT_02000f90 & 0xf0f8 | 0x3d00;
    DAT_02000f98 = 0x406;
    DAT_02000fa4 = 0;
    DAT_02000f9a = 0x606;
    DAT_02000fa8 = 0;
    sub_08002638(&DAT_08391454,0x4000);
    sub_08002AEC(&DAT_08391460,0);
    sub_080EEF68(&DAT_08385fa0,(DAT_02000f98 & 0x1f00) * 8 + 0x6000000,0x200);
    sub_080EEF68(&DAT_08385798,(DAT_02000f9a & 0x1f00) * 8 + 0x6000000,0x200);
    sub_080DE1BC();
    sub_080DE274();
    *(undefined2 *)(param_1 + 4) = 0;
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
  case 1:
    iVar6 = *(ushort *)(param_1 + 4) + 1;
    *(short *)(param_1 + 4) = (short)iVar6;
    DAT_03002ec0 = (undefined)iVar6;
    DAT_03002ec1 = DAT_03002ec0;
    DAT_03002ec2 = DAT_03002ec0;
    if (0x1f < iVar6 * 0x10000 >> 0x10) {
      sub_08003264(0xba);
      *(undefined2 *)(param_1 + 6) = 0;
      *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
switchD_080e4d7e_caseD_2:
      if ((DAT_02000d16 & 0x40) != 0) {
        sub_080032EC(1);
        sVar4 = sub_080EF1E8(*(short *)(param_1 + 6) + 2,3);
        *(short *)(param_1 + 6) = sVar4;
        if ((sVar4 == 1) && (*(char *)(param_1 + 3) == '\0')) {
          *(undefined2 *)(param_1 + 6) = 0;
        }
      }
      if ((DAT_02000d16 & 0x80) != 0) {
        sub_080032EC(1);
        sVar4 = sub_080EF1E8(*(short *)(param_1 + 6) + 1,3);
        *(short *)(param_1 + 6) = sVar4;
        if ((sVar4 == 1) && (*(char *)(param_1 + 3) == '\0')) {
          *(undefined2 *)(param_1 + 6) = 2;
        }
      }
      if ((DAT_02000d16 & 9) != 0) {
        sub_080032EC(2);
        sub_08003274(0xba);
        *(undefined2 *)(param_1 + 4) = 0x20;
        *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
      }
    }
    break;
  case 2:
    goto switchD_080e4d7e_caseD_2;
  case 3:
    sVar4 = *(short *)(param_1 + 4) + -1;
    *(short *)(param_1 + 4) = sVar4;
    DAT_03002ec0 = (undefined)sVar4;
    DAT_03002ec1 = DAT_03002ec0;
    DAT_03002ec2 = DAT_03002ec0;
    if (sVar4 != 0) break;
    DAT_02000f90 = DAT_02000f90 & 0xc3ff;
    *(undefined2 *)(param_1 + 4) = 0x60;
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
  case 4:
    iVar6 = *(ushort *)(param_1 + 4) - 1;
    *(short *)(param_1 + 4) = (short)iVar6;
    if ((iVar6 * 0x10000 >> 0x10 == -1) || (iVar6 = sub_080032AC(0xba), iVar6 == 0)) {
      pcVar1 = DAT_0202ebf0;
      if (*(short *)(param_1 + 6) == 0) {
        iVar6 = sub_080D65B8(param_1 + 0x736c);
        if (iVar6 * 2 + 2U < 10) {
          cVar3 = sub_080D65B8(param_1 + 0x736c);
          cVar3 = cVar3 * '\x02' + '\x02';
        }
        else {
          cVar3 = '\t';
        }
        *pcVar1 = cVar3;
        sub_08013FFC(*(undefined *)(int *)(param_1 + 0x7254),param_1 + 0x729c);
        sub_08014104(param_1 + 0x7264);
        if ((((DAT_0202ebb4 & 0x10) == 0) || (*(int *)(param_1 + 0x7254) != 9)) ||
           (DAT_0202ec32 < 3)) {
          sub_080148A4(*(undefined *)(param_1 + 0x7254));
        }
        else {
          sub_080148B4(9,3);
        }
        uVar5 = 0x300;
      }
      else {
        if (*(short *)(param_1 + 6) != 1) {
          sub_08001100();
          break;
        }
        uVar5 = 0x100;
      }
      sub_080E0E64(param_1,uVar5);
    }
    break;
  default:
    break;
  }
  iVar6 = 0x42c;
  if (*(short *)(param_1 + 6) != 0) {
    iVar6 = 0x42e;
  }
  sub_080DE510(&DAT_0834c9e4 + *(ushort *)((int)&DAT_0834c47c + iVar6),0,8);
  iVar6 = 0x430;
  if (*(short *)(param_1 + 6) != 1) {
    iVar6 = 0x432;
  }
  sub_080DE510(&DAT_0834c9e4 + *(ushort *)((int)&DAT_0834c47c + iVar6),0,10);
  iVar6 = 0x434;
  if (*(short *)(param_1 + 6) != 2) {
    iVar6 = 0x436;
  }
  sub_080DE510(&DAT_0834c9e4 + *(ushort *)((int)&DAT_0834c47c + iVar6),0,0xc);
  if ((DAT_03002a60 & 1) != 0) {
    DAT_02000fa8 = CONCAT22(DAT_02000fa8._2_2_ + -1,(short)DAT_02000fa8 + 1);
  }
  return in_lr;
}

