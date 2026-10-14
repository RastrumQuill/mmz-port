// sub_080192D8 at 0x080192D8 (thumb)

undefined8 sub_080192D8(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *param_1;
  if (((iVar2 < 0x2c1001) && (0xeffe < iVar2 - 0x1d1001U)) &&
     ((param_1[1] < 0x36001 || (0xeffe < iVar2 - 0x21c001U)))) {
    iVar2 = *param_1;
    if (iVar2 < 0xb4000) {
      uVar1 = 0;
    }
    else if (iVar2 < 0x11f800) {
      uVar1 = 1;
    }
    else if (iVar2 < 0x177000) {
      uVar1 = 2;
    }
    else if (iVar2 < 0x1d1000) {
      uVar1 = 3;
    }
    else {
      uVar1 = 4;
    }
  }
  else {
    uVar1 = 7;
  }
  return CONCAT44(in_lr,uVar1);
}

