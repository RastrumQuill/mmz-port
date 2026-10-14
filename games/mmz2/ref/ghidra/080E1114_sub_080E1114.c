// sub_080E1114 at 0x080E1114 (thumb)

undefined4 sub_080E1114(int param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  short sVar4;
  uint uVar5;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 2);
  uVar5 = (uint)bVar1;
  if (uVar5 == 1) {
LAB_080e11ce:
    iVar3 = *(ushort *)(param_1 + 4) - 1;
    *(short *)(param_1 + 4) = (short)iVar3;
    if (iVar3 * 0x10000 >> 0x10 != -1) goto LAB_080e12a2;
  }
  else {
    if (uVar5 < 2) {
      if (uVar5 != 0) goto LAB_080e12a2;
      sub_0800120C();
      sub_08001F98();
      DAT_03002ec2 = 0x20;
      DAT_03002ec1 = 0x20;
      DAT_03002ec0 = 0x20;
      sub_08002C18();
      DAT_02000fd0 = (ushort)bVar1;
      DAT_02000fec._2_1_ = 0xff;
      DAT_02000ff0 = (ushort)bVar1;
      DAT_02000fe0 = DAT_02000fd0;
      DAT_03002ac0 = DAT_02000ff0;
      sub_0800319C();
      sub_080DE1BC();
      sub_080DE274();
      DAT_02000f90 = DAT_02000f90 & 0xf0f8 | 0x2500;
      DAT_02000f98 = 0x406;
      DAT_02000f9c = uVar5;
      sub_08002638(&DAT_08391454,0x4000);
      sub_08002AEC(&DAT_08391460,0);
      sub_080EEF68(&DAT_08385798,(DAT_02000f98 & 0x1f00) * 8 + 0x6000000,0x200);
      *(undefined2 *)(param_1 + 4) = 0x3c;
      *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
      goto LAB_080e11ce;
    }
    if (uVar5 != 2) {
      if (uVar5 == 3) {
        sVar4 = *(short *)(param_1 + 4) + -1;
        *(short *)(param_1 + 4) = sVar4;
        DAT_03002ec0 = (undefined)sVar4;
        DAT_03002ec1 = DAT_03002ec0;
        DAT_03002ec2 = DAT_03002ec0;
        if (sVar4 == 0) {
          DAT_02000f90 = DAT_02000f90 & 0xdbff;
          sub_08001100();
        }
      }
      goto LAB_080e12a2;
    }
    uVar2 = *(short *)(param_1 + 4) + 1;
    *(ushort *)(param_1 + 4) = uVar2;
    if ((uVar2 & 0x38) != 0) {
      sub_080DE510(&DAT_0834e9e8,0,0xc);
    }
    if ((DAT_02000d14 & 2) == 0) goto LAB_080e12a2;
    sub_080032EC(3);
    *(undefined2 *)(param_1 + 4) = 0x20;
  }
  *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
LAB_080e12a2:
  sub_080DE510(&DAT_0834ea88,0,6);
  if ((DAT_03002a60 & 1) != 0) {
    DAT_02000fa4._0_2_ = (short)DAT_02000fa4 + 1;
    DAT_02000fa4._2_2_ = DAT_02000fa4._2_2_ + -1;
  }
  return in_lr;
}

