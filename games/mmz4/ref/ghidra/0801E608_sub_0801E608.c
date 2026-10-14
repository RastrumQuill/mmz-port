// sub_0801E608 at 0x0801E608 (thumb)

undefined8 sub_0801E608(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *param_1;
  if (0xd1fff < iVar2) {
    if ((iVar2 - 0xff000U < 0xf000) && (0x31fff < param_1[1])) {
      uVar1 = 4;
    }
    else {
      uVar1 = 3;
    }
    goto LAB_0801e692;
  }
  if (iVar2 < 0x4b000) {
LAB_0801e690:
    uVar1 = 0;
  }
  else {
    if (param_1[1] < 0x6e000) {
      if ((0x59fff < iVar2) || (param_1[1] < 0x3c000)) {
        if (0x7ffff < *param_1) {
          uVar1 = 1;
          goto LAB_0801e692;
        }
        goto LAB_0801e690;
      }
    }
    else if (0xbbfff < iVar2) {
      uVar1 = 7;
      goto LAB_0801e692;
    }
    uVar1 = 2;
  }
LAB_0801e692:
  return CONCAT44(in_lr,uVar1);
}

