// sub_080BD398 at 0x080BD398 (thumb)

undefined4 sub_080BD398(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 5)) {
  case 0:
    sub_080BD600(param_1);
    DAT_02004f30 = DAT_02004f30 & 0xf0f8 | 0x3900;
    DAT_02004f3a = 0x206;
    DAT_02004f48 = 0;
    sub_080014E8(&DAT_082f1050,0x4000);
    sub_0800179C(&DAT_082f105c,0);
    FUN_080c88ec(&DAT_082e20ac,(DAT_02004f3a & 0x1f00) * 8 + 0x6000000,0x200);
    *(undefined2 *)(param_1 + 8) = 0;
    *(undefined2 *)(param_1 + 10) = 0;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    break;
  case 1:
    break;
  case 2:
    goto switchD_080bd3ac_caseD_2;
  case 3:
    goto switchD_080bd3ac_caseD_3;
  case 4:
    goto switchD_080bd3ac_caseD_4;
  case 5:
    goto switchD_080bd3ac_caseD_5;
  case 6:
    goto switchD_080bd3ac_caseD_6;
  default:
    goto switchD_080bd3ac_caseD_7;
  }
  sVar1 = *(short *)(param_1 + 8) + *(short *)(param_1 + 10) + 1;
  *(short *)(param_1 + 10) = sVar1;
  DAT_03001ba0 = (undefined)sVar1;
  DAT_03001ba1 = DAT_03001ba0;
  DAT_03001ba2 = DAT_03001ba0;
  if (0x1f < sVar1) {
    DAT_03001ba2 = 0x20;
    DAT_03001ba1 = 0x20;
    DAT_03001ba0 = 0x20;
    *(undefined2 *)(param_1 + 10) = 0x78;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
switchD_080bd3ac_caseD_2:
    sVar1 = *(short *)(param_1 + 10) + -1;
    *(short *)(param_1 + 10) = sVar1;
    if ((sVar1 == 0) || (*(short *)(param_1 + 8) != 0)) {
      *(undefined2 *)(param_1 + 10) = 0x20;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
switchD_080bd3ac_caseD_3:
      iVar2 = (*(ushort *)(param_1 + 10) - 1) - (uint)*(ushort *)(param_1 + 8);
      *(short *)(param_1 + 10) = (short)iVar2;
      DAT_03001ba0 = (undefined)iVar2;
      DAT_03001ba1 = DAT_03001ba0;
      DAT_03001ba2 = DAT_03001ba0;
      if (iVar2 * 0x10000 < 1) {
        sub_080014E8(&DAT_082f1064,(DAT_02004f3a & 0xc) << 0xc);
        sub_0800179C(&DAT_082f1070,0);
        FUN_080c88ec(&DAT_082e28b4,(DAT_02004f3a & 0x1f00) * 8 + 0x6000000,0x200);
        *(undefined2 *)(param_1 + 10) = 0;
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
switchD_080bd3ac_caseD_4:
        sVar1 = *(short *)(param_1 + 8) + *(short *)(param_1 + 10) + 1;
        *(short *)(param_1 + 10) = sVar1;
        DAT_03001ba0 = (undefined)sVar1;
        DAT_03001ba1 = DAT_03001ba0;
        DAT_03001ba2 = DAT_03001ba0;
        if (0x1f < sVar1) {
          DAT_03001ba2 = 0x20;
          DAT_03001ba1 = 0x20;
          DAT_03001ba0 = 0x20;
          *(undefined2 *)(param_1 + 10) = 0x78;
          *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
switchD_080bd3ac_caseD_5:
          sVar1 = *(short *)(param_1 + 10) + -1;
          *(short *)(param_1 + 10) = sVar1;
          if ((sVar1 == 0) || (*(short *)(param_1 + 8) != 0)) {
            *(undefined2 *)(param_1 + 10) = 0x20;
            *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
switchD_080bd3ac_caseD_6:
            iVar2 = (*(ushort *)(param_1 + 10) - 1) - (uint)*(ushort *)(param_1 + 8);
            *(short *)(param_1 + 10) = (short)iVar2;
            DAT_03001ba0 = (undefined)iVar2;
            DAT_03001ba1 = DAT_03001ba0;
            DAT_03001ba2 = DAT_03001ba0;
            if (iVar2 * 0x10000 < 1) {
              DAT_03001ba2 = 0x20;
              DAT_03001ba1 = 0x20;
              DAT_03001ba0 = 0x20;
              DAT_02004f30 = DAT_02004f30 & 0xc7ff;
              FUN_080bd390(param_1,4);
            }
          }
        }
      }
    }
  }
switchD_080bd3ac_caseD_7:
  return in_lr;
}

