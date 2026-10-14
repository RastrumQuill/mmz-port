// sub_080B27D8 at 0x080B27D8 (thumb)

undefined8 sub_080B27D8(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_lr;
  int local_2c [4];
  
  local_2c[2] = 0xfffffff5;
  local_2c[3] = 0xb;
  local_2c[0] = -0x10;
  local_2c[1] = 0x10;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    sVar1 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
    if (sVar1 != 0) {
      uVar5 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar5;
    }
    sub_080B2A4C(param_1);
    sVar1 = sub_08007C7C(*(int *)(param_1 + 0x54) +
                         *(int *)((int)local_2c +
                                 ((int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 4U)) * 0x100,
                         *(int *)(param_1 + 0x58) + 0x800);
    if (sVar1 == 0) {
      sub_080B277C(param_1);
      uVar5 = 1;
      goto LAB_080b2908;
    }
  }
  else {
    sVar1 = sub_08007C7C(*(int *)(param_1 + 0x54) + -0xb00,*(undefined4 *)(param_1 + 0x58));
    iVar6 = local_2c[3] * 0x100;
    sVar2 = sub_08007C7C(*(int *)(param_1 + 0x54) + iVar6,*(undefined4 *)(param_1 + 0x58));
    if ((sVar1 == 0) && (sVar2 == 0)) {
      iVar3 = sub_08008534(*(int *)(param_1 + 0x54) + -0xb00,*(undefined4 *)(param_1 + 0x58));
      iVar4 = sub_08008534(*(int *)(param_1 + 0x54) + iVar6,*(undefined4 *)(param_1 + 0x58));
      if (iVar3 < iVar4) {
        *(int *)(param_1 + 0x58) = iVar3;
      }
      else {
        *(int *)(param_1 + 0x58) = iVar4;
      }
    }
    if (sVar1 == 1) {
      iVar6 = *(int *)(param_1 + 0x54) + -0xb00;
LAB_080b286e:
      uVar5 = sub_08008534(iVar6,*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar5;
    }
    else if (sVar2 == 1) {
      iVar6 = *(int *)(param_1 + 0x54) + iVar6;
      goto LAB_080b286e;
    }
    sVar1 = sub_08007C7C(*(int *)(param_1 + 0x54) +
                         *(int *)((int)local_2c +
                                 ((int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 4U)) * 0x100,
                         *(int *)(param_1 + 0x58) + 0x800);
    if (sVar1 == 0) {
      uVar5 = 1;
      *(undefined *)(param_1 + 0xb7) = 1;
      goto LAB_080b2908;
    }
  }
  uVar5 = 0;
LAB_080b2908:
  return CONCAT44(in_lr,uVar5);
}

