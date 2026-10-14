// sub_08014948 at 0x08014948 (thumb)

undefined8 sub_08014948(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((DAT_0202cac0 & 0xf) == 1) {
    iVar2 = *param_1;
    if (((iVar2 - 0x3c000U < 0x26000) || (iVar2 - 0xb4000U < 0x26000)) ||
       (iVar2 - 0x1e0000U < 0xc3000)) {
      uVar1 = 1;
      goto LAB_080149fa;
    }
    if (iVar2 - 0x77000U < 0x27000) {
      uVar1 = 2;
      goto LAB_080149fa;
    }
  }
  iVar2 = *param_1;
  if ((iVar2 - 0x12c000U < 0xf000) || (iVar2 - 0x159000U < 0x3c000)) {
    uVar1 = 3;
  }
  else if (iVar2 - 0x13b000U < 0x1e000) {
    uVar1 = 4;
  }
  else {
    uVar1 = 0;
  }
LAB_080149fa:
  return CONCAT44(in_lr,uVar1);
}

