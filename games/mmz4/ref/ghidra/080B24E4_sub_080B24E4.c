// sub_080B24E4 at 0x080B24E4 (thumb)

undefined8 sub_080B24E4(int param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined uVar4;
  undefined4 in_lr;
  
  if (-1 < *(int *)(param_1 + 0x60)) {
    iVar2 = sub_08007F8C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x500);
    if (iVar2 == 0) goto LAB_080b259e;
    uVar1 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x500);
    uVar1 = uVar1 & 0xf;
    if (uVar1 == 1) {
LAB_080b2590:
      uVar4 = 0;
LAB_080b2596:
      *(undefined *)(param_1 + 0xb8) = uVar4;
      *(undefined *)(param_1 + 0xb9) = uVar4;
    }
    else {
      if ((ushort)(uVar1 - 2) < 2) {
        uVar4 = 2;
        goto LAB_080b25e6;
      }
      if (1 < (ushort)(uVar1 - 8)) {
        if ((ushort)(uVar1 - 4) < 4) {
          uVar4 = 1;
        }
        else {
          if (3 < (ushort)(uVar1 - 10)) goto LAB_080b2590;
          uVar4 = 1;
        }
        goto LAB_080b2596;
      }
      *(undefined *)(param_1 + 0xb8) = 2;
      *(undefined *)(param_1 + 0xb9) = 1;
    }
LAB_080b25ee:
    uVar3 = 1;
    goto LAB_080b25f4;
  }
  iVar2 = sub_08007DB4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x500);
  if (iVar2 == 0) {
LAB_080b259e:
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar2 = sub_0800816C(*(int *)(param_1 + 0x54) + -0x500,*(undefined4 *)(param_1 + 0x58));
      if (iVar2 != 0) {
        uVar4 = 3;
        goto LAB_080b25be;
      }
    }
    else {
      iVar2 = sub_0800834C(*(int *)(param_1 + 0x54) + 0x500,*(undefined4 *)(param_1 + 0x58));
      if (iVar2 != 0) {
        uVar4 = 3;
LAB_080b25e6:
        *(undefined *)(param_1 + 0xb8) = uVar4;
        *(undefined *)(param_1 + 0xb9) = 0;
        goto LAB_080b25ee;
      }
    }
    uVar3 = 0;
  }
  else {
    uVar4 = 0;
LAB_080b25be:
    *(undefined *)(param_1 + 0xb8) = uVar4;
    uVar3 = 1;
    *(undefined *)(param_1 + 0xb9) = 1;
  }
LAB_080b25f4:
  return CONCAT44(in_lr,uVar3);
}

