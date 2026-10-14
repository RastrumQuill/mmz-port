// sub_080E18C4 at 0x080E18C4 (thumb)

undefined4 sub_080E18C4(int param_1)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 2);
  if (bVar1 == 1) {
LAB_080e18f8:
    sVar3 = *(short *)(param_1 + 4) + 1;
    *(short *)(param_1 + 4) = sVar3;
    DAT_03002ec0 = (undefined)sVar3;
    DAT_03002ec1 = DAT_03002ec0;
    DAT_03002ec2 = DAT_03002ec0;
    if (sVar3 < 0x20) goto LAB_080e19c2;
    sub_0800170C(param_1 + 0x2050,(short *)(param_1 + 0x2054),4);
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
LAB_080e1934:
    iVar4 = sub_080E3D88(param_1);
    if (iVar4 * 0x10000 < 0) {
      return in_lr;
    }
    if ((DAT_02000cdc & 0x10) == 0) goto LAB_080e19c2;
    if (*(short *)(param_1 + 0x2054) != 0x5431) {
      sub_080E0E64(param_1,0x104);
      return in_lr;
    }
    *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_1 + 0x2056);
    *(undefined2 *)(param_1 + 4) = 0x20;
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_080e19c2;
      sub_08003264(0xb9);
      *(undefined2 *)(param_1 + 4) = 0;
      *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
      goto LAB_080e18f8;
    }
    if (bVar1 == 2) goto LAB_080e1934;
    if (bVar1 != 3) goto LAB_080e19c2;
  }
  sVar3 = *(short *)(param_1 + 4) + -1;
  *(short *)(param_1 + 4) = sVar3;
  uVar2 = DAT_02000ca2;
  DAT_03002ec0 = (undefined)sVar3;
  DAT_03002ec1 = DAT_03002ec0;
  DAT_03002ec2 = DAT_03002ec0;
  if (sVar3 == 0) {
    DAT_02000ca2 = DAT_02000ca2 & 0xfffd;
    sub_080E0E64(param_1,0x604,uVar2);
  }
LAB_080e19c2:
  sub_080DE510(&DAT_0834ea63,0,8);
  if ((DAT_03002a60 & 1) != 0) {
    DAT_02000fa4._0_2_ = (short)DAT_02000fa4 + 1;
    DAT_02000fa4._2_2_ = DAT_02000fa4._2_2_ + -1;
  }
  return in_lr;
}

