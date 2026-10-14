// sub_0801E6E0 at 0x0801E6E0 (thumb)

undefined8 sub_0801E6E0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *param_1;
  if (iVar2 < 0x13b000) {
    uVar1 = 0;
  }
  else if (iVar2 < 0x177000) {
    uVar1 = 1;
  }
  else if (iVar2 - 0x1d1000U < 0x69000) {
    uVar1 = 3;
  }
  else {
    uVar1 = 2;
  }
  return CONCAT44(in_lr,uVar1);
}

