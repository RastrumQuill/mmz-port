// sub_080DFBC8 at 0x080DFBC8 (thumb)

undefined4 sub_080DFBC8(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 5)) {
  case 0:
    sub_080DFE34(param_1);
    DAT_02000f90 = DAT_02000f90 & 0xf0f8 | 0x3900;
    DAT_02000f9a = 0x206;
    DAT_02000fa8 = 0;
    sub_08002638(&DAT_08390e00,0x4000);
    sub_08002AEC(&DAT_08390e0c,0);
    sub_080EEF68(&DAT_0836d2c8,(DAT_02000f9a & 0x1f00) * 8 + 0x6000000,0x200);
    *(undefined2 *)(param_1 + 8) = 0;
    *(undefined2 *)(param_1 + 10) = 0;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    break;
  case 1:
    break;
  case 2:
    goto switchD_080dfbdc_caseD_2;
  case 3:
    goto switchD_080dfbdc_caseD_3;
  case 4:
    goto switchD_080dfbdc_caseD_4;
  case 5:
    goto switchD_080dfbdc_caseD_5;
  case 6:
    goto switchD_080dfbdc_caseD_6;
  default:
    goto switchD_080dfbdc_caseD_7;
  }
  sVar1 = *(short *)(param_1 + 10) + 1 + *(short *)(param_1 + 8);
  *(short *)(param_1 + 10) = sVar1;
  DAT_03002ec0 = (undefined)sVar1;
  DAT_03002ec1 = DAT_03002ec0;
  DAT_03002ec2 = DAT_03002ec0;
  if (0x1f < sVar1) {
    DAT_03002ec2 = 0x20;
    DAT_03002ec1 = 0x20;
    DAT_03002ec0 = 0x20;
    *(undefined2 *)(param_1 + 10) = 0x78;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
switchD_080dfbdc_caseD_2:
    sVar1 = *(short *)(param_1 + 10) + -1;
    *(short *)(param_1 + 10) = sVar1;
    if ((sVar1 == 0) || (*(short *)(param_1 + 8) != 0)) {
      *(undefined2 *)(param_1 + 10) = 0x20;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
switchD_080dfbdc_caseD_3:
      iVar2 = (*(ushort *)(param_1 + 10) - 1) - (uint)*(ushort *)(param_1 + 8);
      *(short *)(param_1 + 10) = (short)iVar2;
      DAT_03002ec0 = (undefined)iVar2;
      DAT_03002ec1 = DAT_03002ec0;
      DAT_03002ec2 = DAT_03002ec0;
      if (iVar2 * 0x10000 < 1) {
        sub_08002638(&DAT_08390e14,(DAT_02000f9a & 0xc) << 0xc);
        sub_08002AEC(&DAT_08390e20,0);
        sub_080EEF68(&DAT_0836d7d0,(DAT_02000f9a & 0x1f00) * 8 + 0x6000000,0x200);
        *(undefined2 *)(param_1 + 10) = 0;
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
switchD_080dfbdc_caseD_4:
        sVar1 = *(short *)(param_1 + 10) + 1 + *(short *)(param_1 + 8);
        *(short *)(param_1 + 10) = sVar1;
        DAT_03002ec0 = (undefined)sVar1;
        DAT_03002ec1 = DAT_03002ec0;
        DAT_03002ec2 = DAT_03002ec0;
        if (0x1f < sVar1) {
          DAT_03002ec2 = 0x20;
          DAT_03002ec1 = 0x20;
          DAT_03002ec0 = 0x20;
          *(undefined2 *)(param_1 + 10) = 0x78;
          *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
switchD_080dfbdc_caseD_5:
          sVar1 = *(short *)(param_1 + 10) + -1;
          *(short *)(param_1 + 10) = sVar1;
          if ((sVar1 == 0) || (*(short *)(param_1 + 8) != 0)) {
            *(undefined2 *)(param_1 + 10) = 0x20;
            *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
switchD_080dfbdc_caseD_6:
            iVar2 = (*(ushort *)(param_1 + 10) - 1) - (uint)*(ushort *)(param_1 + 8);
            *(short *)(param_1 + 10) = (short)iVar2;
            DAT_03002ec0 = (undefined)iVar2;
            DAT_03002ec1 = DAT_03002ec0;
            DAT_03002ec2 = DAT_03002ec0;
            if (iVar2 * 0x10000 < 1) {
              DAT_03002ec2 = 0x20;
              DAT_03002ec1 = 0x20;
              DAT_03002ec0 = 0x20;
              DAT_02000f90 = DAT_02000f90 & 0xc7ff;
              sub_080DFBC0(param_1,4);
            }
          }
        }
      }
    }
  }
switchD_080dfbdc_caseD_7:
  return in_lr;
}

