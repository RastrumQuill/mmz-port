// sub_081135E4 at 0x081135E4 (thumb)

undefined4 sub_081135E4(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 2)) {
  case 0:
    *(undefined *)(param_1 + 3) = 0;
    if (DAT_0203c780 != '\0') {
      *(undefined *)(param_1 + 3) = 1;
    }
    DAT_02000a00 = DAT_02000a00 & 0xf0f8 | 0x3d00;
    DAT_02000a08 = 0x406;
    DAT_02000a14 = 0;
    DAT_02000a0a = 0x606;
    DAT_02000a18 = 0;
    sub_08001D30(&DAT_08b6c7f8,0x4000);
    sub_08002208(&DAT_08b6c804,0);
    sub_08002734(0x24,&DAT_08b2c000,0x67,0,0);
    sub_08002734(0x38,&DAT_08b2c000,0x66,0,0);
    sub_0810CE60();
    sub_0810CF4C();
    *(undefined2 *)(param_1 + 4) = 0;
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
  case 1:
    iVar3 = *(ushort *)(param_1 + 4) + 1;
    *(short *)(param_1 + 4) = (short)iVar3;
    DAT_03002ec0 = (undefined)iVar3;
    DAT_03002ec1 = DAT_03002ec0;
    DAT_03002ec2 = DAT_03002ec0;
    if (0x1f < iVar3 * 0x10000 >> 0x10) {
      sub_08002A88(0x9b);
      *(undefined2 *)(param_1 + 6) = 0;
      *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
switchD_081135fa_caseD_2:
      if ((DAT_02000766 & 0x40) != 0) {
        sub_08002B10(1);
        sVar1 = sub_08128954(*(short *)(param_1 + 6) + 2,3);
        *(short *)(param_1 + 6) = sVar1;
        if ((sVar1 == 1) && (*(char *)(param_1 + 3) == '\0')) {
          *(undefined2 *)(param_1 + 6) = 0;
        }
      }
      if ((DAT_02000766 & 0x80) != 0) {
        sub_08002B10(1);
        sVar1 = sub_08128954(*(short *)(param_1 + 6) + 1,3);
        *(short *)(param_1 + 6) = sVar1;
        if ((sVar1 == 1) && (*(char *)(param_1 + 3) == '\0')) {
          *(undefined2 *)(param_1 + 6) = 2;
        }
      }
      if ((DAT_02000766 & 9) != 0) {
        sub_08002B10(2);
        sub_08002A98(0x9b);
        *(undefined2 *)(param_1 + 4) = 0x20;
        *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
      }
    }
    break;
  case 2:
    goto switchD_081135fa_caseD_2;
  case 3:
    sVar1 = *(short *)(param_1 + 4) + -1;
    *(short *)(param_1 + 4) = sVar1;
    DAT_03002ec0 = (undefined)sVar1;
    DAT_03002ec1 = DAT_03002ec0;
    DAT_03002ec2 = DAT_03002ec0;
    if (sVar1 != 0) break;
    DAT_02000a00 = DAT_02000a00 & 0xc3ff;
    *(undefined2 *)(param_1 + 4) = 0x60;
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
  case 4:
    iVar3 = *(ushort *)(param_1 + 4) - 1;
    *(short *)(param_1 + 4) = (short)iVar3;
    if ((iVar3 * 0x10000 >> 0x10 == -1) || (iVar3 = sub_08002AD0(0x9b), iVar3 == 0)) {
      if (*(short *)(param_1 + 6) == 0) {
        *DAT_0202e8e0 = 2;
        DAT_0202e8e0[1] = (char)*(undefined2 *)(param_1 + 0x6262);
        sub_081284E4(param_1 + 0x638c,param_1 + 0x6348,0);
        sub_081284E8(param_1 + 0x638c,param_1 + 0x6348,&DAT_04000003);
        sub_080383B0(param_1 + 0x6348);
        sub_0801E878(*(undefined *)(param_1 + 0x6260),param_1 + 0x6294);
        sub_0801E918(param_1 + 0x6270);
        sub_081284E4(param_1 + 0x62d4,param_1 + 0x62b8,0);
        sub_081284E8(param_1 + 0x62d4,param_1 + 0x62b8,0x4000007);
        sub_081284E4(param_1 + 0x62f8,param_1 + 0x62f0,0);
        sub_081284E8(param_1 + 0x62f8,param_1 + 0x62f0,&DAT_04000002);
        sub_0801F124(*(undefined *)(param_1 + 0x6260));
        uVar2 = 0x300;
      }
      else {
        if (*(short *)(param_1 + 6) != 1) {
          sub_08001354();
          break;
        }
        uVar2 = 0x1000;
      }
      sub_08112080(param_1,uVar2);
    }
    break;
  default:
    break;
  }
  iVar3 = 0x410;
  if (*(short *)(param_1 + 6) != 0) {
    iVar3 = 0x412;
  }
  sub_0810D214(&DAT_0886a17c + *(ushort *)((int)&DAT_08869ac0 + iVar3),0,8);
  iVar3 = 0x414;
  if (*(short *)(param_1 + 6) != 1) {
    iVar3 = 0x416;
  }
  sub_0810D214(&DAT_0886a17c + *(ushort *)((int)&DAT_08869ac0 + iVar3),0,10);
  iVar3 = 0x418;
  if (*(short *)(param_1 + 6) != 2) {
    iVar3 = 0x41a;
  }
  sub_0810D214(&DAT_0886a17c + *(ushort *)((int)&DAT_08869ac0 + iVar3),0,0xc);
  if ((DAT_03002a60 & 1) != 0) {
    DAT_02000a18 = CONCAT22(DAT_02000a18._2_2_ + -1,(short)DAT_02000a18 + 1);
  }
  return in_lr;
}

