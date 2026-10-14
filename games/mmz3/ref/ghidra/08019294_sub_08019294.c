// sub_08019294 at 0x08019294 (thumb)

undefined8 sub_08019294(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *param_1;
  if (((iVar2 < 0x4b000) || (iVar2 - 0xc3001U < 0xefff)) ||
     ((param_1[1] < 0x14000 && (0xe1000 < iVar2)))) {
    uVar1 = 7;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

