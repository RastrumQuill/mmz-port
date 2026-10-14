// sub_080599B0 at 0x080599B0 (thumb)

undefined8 sub_080599B0(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xd) == '\x03') || (*(char *)(param_1 + 0xd) == '\x06')) {
    if (-1 < *(int *)(param_1 + 0x58)) {
      iVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
      uVar3 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
      if ((uVar3 & 0x80) == 0) goto LAB_08059a80;
      iVar4 = iVar2 - *(int *)(param_1 + 0x50);
      if (iVar4 < 0) {
        iVar4 = *(int *)(param_1 + 0x50) - iVar2;
      }
      if (0x3ff < iVar4) {
        iVar4 = *(int *)(param_1 + 0x58);
        goto joined_r0x08059a2c;
      }
      goto LAB_08059a8a;
    }
    iVar2 = sub_0800869C(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + -0x1400);
    if (*(int *)(param_1 + 0x50) + -0x1400 < iVar2) {
      *(int *)(param_1 + 0x50) = iVar2 + 0x1400;
    }
  }
  else {
    iVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    uVar3 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    if ((uVar3 & 0x80) == 0) {
LAB_08059a80:
      if (0x43f < iVar2 - *(int *)(param_1 + 0x50)) goto LAB_08059a8c;
    }
    else {
      iVar4 = iVar2 - *(int *)(param_1 + 0x50);
      if (iVar4 < 0) {
        iVar4 = *(int *)(param_1 + 0x50) - iVar2;
      }
      if (0x3ff < iVar4) {
        iVar4 = *(int *)(param_1 + 0x58);
joined_r0x08059a2c:
        if (iVar4 < 0x401) goto LAB_08059a8c;
      }
    }
LAB_08059a8a:
    *(int *)(param_1 + 0x50) = iVar2;
  }
LAB_08059a8c:
  bVar1 = sub_080065AC(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + 0x100);
  if (((bVar1 & 1) == 0) && (bVar1 != 0)) {
    iVar2 = *(int *)(param_1 + 0x50) + -0x1000;
    iVar4 = sub_08007EE0(*(int *)(param_1 + 0x4c) + 0xa00,iVar2);
    if (-1 < iVar4) {
      iVar4 = *(int *)(param_1 + 0x4c);
LAB_08059b20:
      iVar4 = sub_08008120(iVar4 + -0xa00,iVar2);
      if (iVar4 < 1) goto LAB_08059b40;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x50) + -0x400;
    uVar3 = sub_080079CC(*(int *)(param_1 + 0x4c) + 0xa00,iVar2);
    if (((uVar3 & 1) == 0) ||
       (iVar4 = sub_08007EE0(*(int *)(param_1 + 0x4c) + 0xa00,iVar2), -1 < iVar4)) {
      uVar3 = sub_080079CC(*(int *)(param_1 + 0x4c) + -0xa00,iVar2);
      if ((uVar3 & 1) != 0) {
        iVar4 = *(int *)(param_1 + 0x4c);
        goto LAB_08059b20;
      }
LAB_08059b40:
      uVar5 = 0;
      goto LAB_08059b42;
    }
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar4;
  uVar5 = 1;
LAB_08059b42:
  return CONCAT44(in_lr,uVar5);
}

