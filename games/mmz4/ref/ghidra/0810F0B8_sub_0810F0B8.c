// sub_0810F0B8 at 0x0810F0B8 (thumb)

undefined4 sub_0810F0B8(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 5)) {
  case 0:
    sub_08122638();
    sub_0810F31C(param_1);
    DAT_0202f5e4 = 1;
    DAT_0202f61c = 0;
    DAT_02000a00 = DAT_02000a00 & 0xf0f8 | 0x3900;
    DAT_02000a0a = 0x206;
    DAT_02000a18 = 0;
    DAT_03002ac0 = 0;
    sub_08001D30(&DAT_08b6c000,0x4000);
    sub_08002208(&DAT_08b6c00c,0);
    sub_08002734(0x38,&DAT_08b2c000,0,0,0);
    *(undefined2 *)(param_1 + 8) = 0;
    *(undefined2 *)(param_1 + 10) = 0;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    break;
  case 1:
    break;
  case 2:
    goto switchD_0810f0ce_caseD_2;
  case 3:
    goto switchD_0810f0ce_caseD_3;
  case 4:
    goto switchD_0810f0ce_caseD_4;
  case 5:
    goto switchD_0810f0ce_caseD_5;
  case 6:
    goto switchD_0810f0ce_caseD_6;
  default:
    goto switchD_0810f0ce_caseD_7;
  }
  iVar2 = *(ushort *)(param_1 + 10) + 1 + (uint)*(ushort *)(param_1 + 8);
  *(short *)(param_1 + 10) = (short)iVar2;
  DAT_03002ec0 = '@' - (char)iVar2;
  DAT_03002ec1 = DAT_03002ec0;
  DAT_03002ec2 = DAT_03002ec0;
  if (0x1f < iVar2 * 0x10000 >> 0x10) {
    DAT_03002ec2 = ' ';
    DAT_03002ec1 = ' ';
    DAT_03002ec0 = ' ';
    *(undefined2 *)(param_1 + 10) = 0x78;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
switchD_0810f0ce_caseD_2:
    sVar1 = *(short *)(param_1 + 10) + -1;
    *(short *)(param_1 + 10) = sVar1;
    if ((sVar1 == 0) || (*(short *)(param_1 + 8) != 0)) {
      *(undefined2 *)(param_1 + 10) = 0x20;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
switchD_0810f0ce_caseD_3:
      iVar2 = (*(ushort *)(param_1 + 10) - 1) - (uint)*(ushort *)(param_1 + 8);
      *(short *)(param_1 + 10) = (short)iVar2;
      DAT_03002ec0 = (char)iVar2;
      DAT_03002ec1 = DAT_03002ec0;
      DAT_03002ec2 = DAT_03002ec0;
      if (iVar2 * 0x10000 < 1) {
        DAT_0202f61c = 1;
        sub_08001D30(&DAT_08b6c014,(DAT_02000a0a & 0xc) << 0xc);
        sub_08002208(&DAT_08b6c020,0);
        sub_08002734(0x38,&DAT_08b2c000,1,0,0);
        *(undefined2 *)(param_1 + 10) = 0;
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
switchD_0810f0ce_caseD_4:
        sVar1 = *(short *)(param_1 + 10) + 1 + *(short *)(param_1 + 8);
        *(short *)(param_1 + 10) = sVar1;
        DAT_03002ec0 = (char)sVar1;
        DAT_03002ec1 = DAT_03002ec0;
        DAT_03002ec2 = DAT_03002ec0;
        if (0x1f < sVar1) {
          DAT_03002ec2 = ' ';
          DAT_03002ec1 = ' ';
          DAT_03002ec0 = ' ';
          *(undefined2 *)(param_1 + 10) = 0x78;
          *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
switchD_0810f0ce_caseD_5:
          sVar1 = *(short *)(param_1 + 10) + -1;
          *(short *)(param_1 + 10) = sVar1;
          if ((sVar1 == 0) || (*(short *)(param_1 + 8) != 0)) {
            *(undefined2 *)(param_1 + 10) = 0x20;
            *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
switchD_0810f0ce_caseD_6:
            iVar2 = (*(ushort *)(param_1 + 10) - 1) - (uint)*(ushort *)(param_1 + 8);
            *(short *)(param_1 + 10) = (short)iVar2;
            DAT_03002ec0 = (char)iVar2;
            DAT_03002ec1 = DAT_03002ec0;
            DAT_03002ec2 = DAT_03002ec0;
            if (iVar2 * 0x10000 < 1) {
              DAT_03002ec2 = ' ';
              DAT_03002ec1 = ' ';
              DAT_03002ec0 = ' ';
              DAT_02000a00 = DAT_02000a00 & 0xc7ff;
              sub_0810F0B0(param_1,4);
            }
          }
        }
      }
    }
  }
switchD_0810f0ce_caseD_7:
  return in_lr;
}

