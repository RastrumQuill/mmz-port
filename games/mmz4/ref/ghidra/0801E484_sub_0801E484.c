// sub_0801E484 at 0x0801E484 (thumb)

undefined8 sub_0801E484(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *param_1;
  if (((iVar2 < 0x4b000) || (iVar2 - 0xc3001U < 0xefff)) ||
     ((param_1[1] < 0x14000 && (0xe1000 < iVar2)))) {
    uVar1 = 7;
  }
  else if (*param_1 < 0xd2000) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}

