// sub_080E14A8 at 0x080E14A8 (thumb)

undefined4 sub_080E14A8(int param_1)

{
  byte bVar1;
  undefined uVar2;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 2);
  uVar5 = (uint)bVar1;
  if (uVar5 == 1) {
LAB_080e1526:
    sVar3 = *(short *)(param_1 + 4) + 1;
    *(short *)(param_1 + 4) = sVar3;
    DAT_03002ec0 = (undefined)sVar3;
    DAT_03002ec1 = DAT_03002ec0;
    DAT_03002ec2 = DAT_03002ec0;
    if (sVar3 != 0x20) goto LAB_080e1654;
    *(undefined2 *)(param_1 + 4) = 0;
  }
  else {
    if (uVar5 < 2) {
      if (uVar5 != 0) goto LAB_080e1654;
      DAT_02000f90 = DAT_02000f90 & 0xf0f8 | 0x2500;
      DAT_02000f98 = 0x406;
      DAT_02000fa4 = uVar5;
      sub_08002638(&DAT_08391454,0x4000);
      sub_08002AEC(&DAT_08391460,0);
      sub_080EEF68(&DAT_08385798,(DAT_02000f98 & 0x1f00) * 8 + 0x6000000,0x200);
      sub_08003264(0xba);
      *(ushort *)(param_1 + 4) = (ushort)bVar1;
      *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
      goto LAB_080e1526;
    }
    if (uVar5 != 2) {
      if (uVar5 == 3) {
        sVar3 = *(short *)(param_1 + 4) + -1;
        *(short *)(param_1 + 4) = sVar3;
        DAT_03002ec0 = (undefined)sVar3;
        DAT_03002ec1 = DAT_03002ec0;
        DAT_03002ec2 = DAT_03002ec0;
        if (sVar3 == 0) {
          if (*(char *)(param_1 + 3) != '\0') {
            sub_08001100();
          }
          if (DAT_02000ca4 == '\0') {
            sub_080E0E64(param_1,0x404);
          }
          else {
            sub_080E0E64(param_1,0x504);
          }
        }
      }
      goto LAB_080e1654;
    }
    uVar4 = *(short *)(param_1 + 4) + 1;
    *(ushort *)(param_1 + 4) = uVar4;
    if ((uVar4 & 0x38) != 0) {
      sub_080DE510(&DAT_0834e9e8,0,0xc);
    }
    if ((DAT_02000d14 & 2) == 0) {
      if ((DAT_02000ca0 & 0x30) != 0x30) goto LAB_080e1654;
      sub_08003274(0xba);
      *(undefined2 *)(param_1 + 4) = 0x20;
      uVar2 = 0;
    }
    else {
      sub_08003274(0xba);
      sub_080032EC(3);
      *(undefined2 *)(param_1 + 4) = 0x20;
      uVar2 = 1;
    }
    *(undefined *)(param_1 + 3) = uVar2;
  }
  *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
LAB_080e1654:
  sub_080DE510(&DAT_0834e9d7,1,6);
  if ((DAT_03002a60 & 1) != 0) {
    DAT_02000fa4 = CONCAT22(DAT_02000fa4._2_2_ + -1,(short)DAT_02000fa4 + 1);
  }
  return in_lr;
}

