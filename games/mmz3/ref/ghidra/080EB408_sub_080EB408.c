// sub_080EB408 at 0x080EB408 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_080EB408(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 5)) {
  case 0:
    sub_080EB64C(param_1);
    DAT_020023c0 = DAT_020023c0 & 0xf0f8 | 0x3900;
    DAT_020023ca = 0x206;
    _DAT_020023d8 = 0;
    DAT_03002ac0 = 0;
    sub_0800393C(&DAT_08547280,0x4000);
    sub_08003E14(&DAT_0854728c,0);
    sub_08004340(0x38,&DAT_085222a0,0,0,0);
    *(undefined2 *)(param_1 + 8) = 0;
    *(undefined2 *)(param_1 + 10) = 0;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    break;
  case 1:
    break;
  case 2:
    goto switchD_080eb41e_caseD_2;
  case 3:
    goto switchD_080eb41e_caseD_3;
  case 4:
    goto switchD_080eb41e_caseD_4;
  case 5:
    goto switchD_080eb41e_caseD_5;
  case 6:
    goto switchD_080eb41e_caseD_6;
  default:
    goto switchD_080eb41e_caseD_7;
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
switchD_080eb41e_caseD_2:
    sVar1 = *(short *)(param_1 + 10) + -1;
    *(short *)(param_1 + 10) = sVar1;
    if ((sVar1 == 0) || (*(short *)(param_1 + 8) != 0)) {
      *(undefined2 *)(param_1 + 10) = 0x20;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
switchD_080eb41e_caseD_3:
      iVar2 = (*(ushort *)(param_1 + 10) - 1) - (uint)*(ushort *)(param_1 + 8);
      *(short *)(param_1 + 10) = (short)iVar2;
      DAT_03002ec0 = (char)iVar2;
      DAT_03002ec1 = DAT_03002ec0;
      DAT_03002ec2 = DAT_03002ec0;
      if (iVar2 * 0x10000 < 1) {
        sub_0800393C(&DAT_08547294,(DAT_020023ca & 0xc) << 0xc);
        sub_08003E14(&DAT_085472a0,0);
        sub_08004340(0x38,&DAT_085222a0,1,0,0);
        *(undefined2 *)(param_1 + 10) = 0;
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
switchD_080eb41e_caseD_4:
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
switchD_080eb41e_caseD_5:
          sVar1 = *(short *)(param_1 + 10) + -1;
          *(short *)(param_1 + 10) = sVar1;
          if ((sVar1 == 0) || (*(short *)(param_1 + 8) != 0)) {
            *(undefined2 *)(param_1 + 10) = 0x20;
            *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
switchD_080eb41e_caseD_6:
            iVar2 = (*(ushort *)(param_1 + 10) - 1) - (uint)*(ushort *)(param_1 + 8);
            *(short *)(param_1 + 10) = (short)iVar2;
            DAT_03002ec0 = (char)iVar2;
            DAT_03002ec1 = DAT_03002ec0;
            DAT_03002ec2 = DAT_03002ec0;
            if (iVar2 * 0x10000 < 1) {
              DAT_03002ec2 = ' ';
              DAT_03002ec1 = ' ';
              DAT_03002ec0 = ' ';
              DAT_020023c0 = DAT_020023c0 & 0xc7ff;
              sub_080EB400(param_1,4);
            }
          }
        }
      }
    }
  }
switchD_080eb41e_caseD_7:
  return in_lr;
}

