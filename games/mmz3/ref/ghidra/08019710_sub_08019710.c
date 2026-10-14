// sub_08019710 at 0x08019710 (thumb)

undefined8 sub_08019710(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *param_1;
  if (iVar2 < 0x1e000) {
    if (param_1[1] < 0x1e000) {
LAB_08019740:
      uVar1 = 0;
      goto LAB_08019786;
    }
  }
  else if (iVar2 < 0xa5001) {
    if (param_1[1] < 0x5a000) {
      if (iVar2 < 0x63000) {
        uVar1 = 1;
      }
      else {
        uVar1 = 2;
      }
      goto LAB_08019786;
    }
  }
  else {
    if (param_1[1] < 0x14000) {
      if (iVar2 < 0xc3001) {
        uVar1 = 3;
        goto LAB_08019786;
      }
      goto LAB_08019740;
    }
    if (param_1[1] < 0x28000) {
      uVar1 = 4;
      goto LAB_08019786;
    }
  }
  uVar1 = 5;
LAB_08019786:
  return CONCAT44(in_lr,uVar1);
}

