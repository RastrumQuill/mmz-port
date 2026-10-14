// sub_0801E5BC at 0x0801E5BC (thumb)

undefined8 sub_0801E5BC(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *param_1;
  if (iVar2 - 0xff000U < 0x5a000) {
    uVar1 = 3;
  }
  else if (iVar2 - 0xc3000U < 0x1e000) {
    uVar1 = 2;
  }
  else if (iVar2 - 0x4b000U < 0x1e000) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

