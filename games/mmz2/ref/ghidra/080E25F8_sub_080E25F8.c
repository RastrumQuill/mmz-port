// sub_080E25F8 at 0x080E25F8 (thumb)

undefined4 sub_080E25F8(int param_1)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_lr;
  
  iVar3 = 0x209c;
  if (DAT_02000ca4 == '\0') {
    iVar3 = 0x20e8;
  }
  piVar4 = (int *)(param_1 + iVar3);
  iVar3 = sub_080E3D88(param_1);
  if (iVar3 * 0x10000 < 0) {
    return in_lr;
  }
  switch(*(undefined *)(param_1 + 2)) {
  case 0:
    sub_080DE274();
    DAT_02000f98 = 0x406;
    sub_08002638(&DAT_08391454,0x4000);
    sub_08002AEC(&DAT_08391460,0);
    sub_080EEF68(&DAT_08385798,(DAT_02000f98 & 0x1f00) * 8 + 0x6000000,0x200);
    *(undefined2 *)(param_1 + 4) = 0;
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
  case 1:
    sVar2 = *(short *)(param_1 + 4) + 1;
    *(short *)(param_1 + 4) = sVar2;
    DAT_03002ec0 = (undefined)sVar2;
    DAT_03002ec1 = DAT_03002ec0;
    DAT_03002ec2 = DAT_03002ec0;
    if (0x1f < sVar2) {
      sub_0800170C((undefined4 *)(param_1 + 0x2050),param_1 + 0x209c,0x4c);
      *(undefined4 *)(param_1 + 0x2050) = 0x3c76f490;
      sub_080EEF68(param_1 + 0x7324,param_1 + 0x2054,0x10);
      sub_080EEF6C(param_1 + 0x7364,param_1 + 0x2094,&DAT_04000002);
      if (DAT_02000ca4 == '\0') {
        DAT_02000cdc = DAT_02000cdc & 0xdf;
        DAT_02000d02 = 0;
        *(undefined *)(param_1 + 2) = 2;
      }
      else {
        DAT_02000cdc = DAT_02000cdc & 0xef;
        DAT_02000d00 = 0;
        *(undefined *)(param_1 + 2) = 6;
      }
    }
    break;
  case 2:
  case 7:
    sub_08001810();
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
  case 3:
  case 8:
    if (DAT_02000ce0 == '\0') {
LAB_080e2858:
      *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
    }
    break;
  case 4:
  case 6:
    if (DAT_02000ca4 == '\0') {
      if ((DAT_02000cdc & 0x20) == 0) break;
      sub_080EEF68(piVar4 + 1,param_1 + 0x74d8,0x10);
      sub_080EEF6C(piVar4 + 0x11,param_1 + 0x7518,&DAT_04000002);
      sub_08031008(param_1 + 0x74d8,0);
      iVar3 = *piVar4;
    }
    else {
      if ((DAT_02000cdc & 0x10) == 0) break;
      sub_080EEF68(piVar4 + 1,param_1 + 0x74d8,0x10);
      sub_080EEF6C(piVar4 + 0x11,param_1 + 0x7518,&DAT_04000002);
      sub_08031008(param_1 + 0x74d8,0);
      iVar3 = *piVar4;
    }
    if (iVar3 != 0x3c76f490) {
      sub_080E0E64(param_1,0x104);
      return in_lr;
    }
    goto LAB_080e2858;
  case 5:
  case 9:
    sub_08003274(0xb9);
    *(undefined2 *)(param_1 + 4) = 0x20;
    *(undefined *)(param_1 + 2) = 10;
  case 10:
    sVar2 = *(short *)(param_1 + 4) + -1;
    *(short *)(param_1 + 4) = sVar2;
    uVar1 = DAT_02000ca2;
    DAT_03002ec0 = (undefined)sVar2;
    DAT_03002ec1 = DAT_03002ec0;
    DAT_03002ec2 = DAT_03002ec0;
    if (sVar2 == 0) {
      DAT_02000ca2 = DAT_02000ca2 & 0xfffd;
      sub_080E0E64(param_1,0x904,uVar1);
    }
    break;
  default:
    break;
  }
  sub_080DE510(&DAT_0834e9d7,1,9);
  if ((DAT_03002a60 & 1) != 0) {
    DAT_02000fa4._0_2_ = (short)DAT_02000fa4 + 1;
    DAT_02000fa4._2_2_ = DAT_02000fa4._2_2_ + -1;
  }
  return in_lr;
}

