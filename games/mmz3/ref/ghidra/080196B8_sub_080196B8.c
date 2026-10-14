// sub_080196B8 at 0x080196B8 (thumb)

undefined8 sub_080196B8(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((param_1[1] < 0x32000) && (iVar2 = *param_1, iVar2 < 0x1ba801)) {
    if (iVar2 < 0x170001) {
      if (iVar2 < 0x159001) {
        if (0xca7ff < iVar2) {
          uVar1 = 1;
          goto LAB_0801970a;
        }
        if (iVar2 < 0xa5001) {
          uVar1 = 0;
          goto LAB_0801970a;
        }
      }
      uVar1 = 6;
    }
    else {
      uVar1 = 2;
    }
  }
  else {
    uVar1 = 7;
  }
LAB_0801970a:
  return CONCAT44(in_lr,uVar1);
}

