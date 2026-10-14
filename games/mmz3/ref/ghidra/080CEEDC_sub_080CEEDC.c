// sub_080CEEDC at 0x080CEEDC (thumb)

undefined8 sub_080CEEDC(int param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 in_lr;
  
  sVar1 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if ((((sVar1 == 0) &&
       (sVar1 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800),
       sVar1 == 0)) &&
      (sVar1 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x1000),
      sVar1 == 0)) &&
     (((sVar1 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x1800),
       sVar1 == 0 &&
       (sVar1 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x2000),
       sVar1 == 0)) &&
      (sVar1 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x2800),
      sVar1 == 0)))) {
    iVar2 = 0x3200;
    iVar5 = *(int *)(param_1 + 0x58) + 0x3200;
  }
  else {
    iVar5 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    iVar2 = iVar5 - *(int *)(param_1 + 0x58);
  }
  if (iVar2 < 0x2000) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    iVar5 = -iVar2 + 0x2000;
    if (iVar5 < 0) {
      iVar5 = -iVar2 + 0x200f;
    }
    iVar5 = *(int *)(param_1 + 0x58) - (iVar5 >> 4);
  }
  else if (iVar2 < 0x2800) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    iVar5 = iVar5 + -0x2000;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x60) + 0x15;
    *(int *)(param_1 + 0x60) = iVar2;
    if (0x700 < iVar2) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    iVar5 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  }
  *(int *)(param_1 + 0x58) = iVar5;
  iVar2 = *(int *)(param_1 + 0x54) + -0x1e00;
  if (0 < *(int *)(param_1 + 0x5c)) {
    iVar2 = *(int *)(param_1 + 0x54) + 0x1e00;
  }
  piVar6 = (int *)(param_1 + 0xb8);
  iVar2 = sub_08009B28(iVar2,*piVar6);
  iVar5 = *(int *)(param_1 + 0x54) + -0x1e00;
  if (0 < *(int *)(param_1 + 0x5c)) {
    iVar5 = *(int *)(param_1 + 0x54) + 0x1e00;
  }
  uVar3 = sub_08008FEC(iVar5,*piVar6);
  if (iVar2 == 0) {
    sVar1 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*piVar6);
    if (((sVar1 == 0) &&
        (sVar1 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*piVar6 + 0x800), sVar1 == 0)) &&
       ((sVar1 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*piVar6 + 0x1000), sVar1 == 0 &&
        (((sVar1 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*piVar6 + 0x1800), sVar1 == 0 &&
          (sVar1 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*piVar6 + 0x2000), sVar1 == 0)) &&
         (sVar1 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*piVar6 + 0x2800), sVar1 == 0)))))) {
      iVar2 = *(int *)(param_1 + 0x58);
    }
    else {
      iVar5 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*piVar6);
      iVar2 = *(int *)(param_1 + 0x58);
      if (iVar5 < iVar2) {
        *piVar6 = iVar5;
        goto LAB_080cf0de;
      }
    }
LAB_080cf0dc:
    *piVar6 = iVar2;
  }
  else {
    if ((iVar2 < 0) && (-0xa00 < iVar2)) {
      iVar2 = *piVar6 + iVar2;
      goto LAB_080cf0dc;
    }
    if ((uVar3 & 0x8000) == 0) {
      uVar4 = 1;
      goto LAB_080cf0e0;
    }
  }
LAB_080cf0de:
  uVar4 = 0;
LAB_080cf0e0:
  return CONCAT44(in_lr,uVar4);
}

