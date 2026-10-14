// sub_08013DC0 at 0x08013DC0 (thumb)

undefined8 sub_08013DC0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((*param_1 - 0x3c001U < 0x1dfff) && (param_1[1] - 0x82001U < 0x9fff)) {
    uVar1 = 4;
    goto LAB_08013e86;
  }
  iVar3 = *param_1;
  if (iVar3 < 0xc3000) {
    if (param_1[1] < 0x3c000) {
      uVar1 = 0;
      goto LAB_08013e86;
    }
    if (param_1[1] < 0x8c000) {
      uVar1 = 1;
      goto LAB_08013e86;
    }
  }
  if ((iVar3 < 0xe1000) && (0x8bfff < param_1[1])) {
    uVar1 = 2;
  }
  else if ((iVar3 - 0xf0001U < 0x86fff) && (iVar2 = param_1[1], 0x50000 < iVar2)) {
    if ((iVar3 - 0xff001U < 0x10000) && (iVar2 < 0x5a000)) {
      uVar1 = 7;
    }
    else if (iVar2 < 0x8c001) {
      uVar1 = 5;
    }
    else {
      uVar1 = 6;
    }
  }
  else {
    uVar1 = 3;
  }
LAB_08013e86:
  return CONCAT44(in_lr,uVar1);
}

