// sub_080E1300 at 0x080E1300 (thumb)

undefined4 sub_080E1300(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 2);
  uVar5 = (uint)bVar1;
  if (uVar5 == 1) {
LAB_080e137e:
    sVar2 = *(short *)(param_1 + 4) + 1;
    *(short *)(param_1 + 4) = sVar2;
    DAT_03002ec0 = (undefined)sVar2;
    DAT_03002ec1 = DAT_03002ec0;
    DAT_03002ec2 = DAT_03002ec0;
    if (sVar2 != 0x20) goto LAB_080e1454;
    uVar3 = 0;
  }
  else {
    if (uVar5 < 2) {
      if (uVar5 != 0) goto LAB_080e1454;
      DAT_02000f90 = DAT_02000f90 & 0xf0f8 | 0x2500;
      DAT_02000f98 = 0x406;
      DAT_02000fa4 = uVar5;
      sub_08002638(&DAT_08391454,0x4000);
      sub_08002AEC(&DAT_08391460,0);
      sub_080EEF68(&DAT_08385798,(DAT_02000f98 & 0x1f00) * 8 + 0x6000000,0x200);
      sub_08003264(0xba);
      *(ushort *)(param_1 + 4) = (ushort)bVar1;
      *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
      goto LAB_080e137e;
    }
    if (uVar5 != 2) {
      if (uVar5 == 3) {
        sVar2 = *(short *)(param_1 + 4) + -1;
        *(short *)(param_1 + 4) = sVar2;
        DAT_03002ec0 = (undefined)sVar2;
        DAT_03002ec1 = DAT_03002ec0;
        DAT_03002ec2 = DAT_03002ec0;
        if (sVar2 == 0) {
          sub_08001100();
        }
      }
      goto LAB_080e1454;
    }
    uVar4 = *(short *)(param_1 + 4) + 1;
    *(ushort *)(param_1 + 4) = uVar4;
    if ((uVar4 & 0x38) != 0) {
      sub_080DE510(&DAT_0834e9e8,0,0xc);
    }
    if ((DAT_02000d14 & 2) == 0) goto LAB_080e1454;
    sub_08003274(0xba);
    sub_080032EC(3);
    uVar3 = 0x20;
  }
  *(undefined2 *)(param_1 + 4) = uVar3;
  *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
LAB_080e1454:
  sub_080DE510(&DAT_0834eb0c,1,6);
  if ((DAT_03002a60 & 1) != 0) {
    DAT_02000fa4 = CONCAT22(DAT_02000fa4._2_2_ + -1,(short)DAT_02000fa4 + 1);
  }
  return in_lr;
}

