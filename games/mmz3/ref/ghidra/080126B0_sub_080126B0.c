// sub_080126B0 at 0x080126B0 (thumb)

undefined8 sub_080126B0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*param_1 < 0x3c0) {
    if (0x1bf < param_1[1]) {
      if (param_1[1] < 0x260) {
        uVar1 = 0;
        goto LAB_0801274e;
      }
      goto LAB_080126dc;
    }
  }
  else {
LAB_080126dc:
    iVar2 = *param_1;
    if ((iVar2 < 0x690) && (0x11f < param_1[1])) {
      uVar1 = 1;
      goto LAB_0801274e;
    }
    if (iVar2 < 0x960) {
      uVar1 = 2;
      goto LAB_0801274e;
    }
    if (iVar2 < 0xcb0) {
      uVar1 = 3;
      goto LAB_0801274e;
    }
    if (0xf7f < iVar2) {
      if ((iVar2 < 0x13b0) && (0x25f < param_1[1])) {
        uVar1 = 4;
        goto LAB_0801274e;
      }
      if (iVar2 < 0x1430) {
        uVar1 = 5;
        goto LAB_0801274e;
      }
    }
  }
  uVar1 = 6;
LAB_0801274e:
  return CONCAT44(in_lr,uVar1);
}

