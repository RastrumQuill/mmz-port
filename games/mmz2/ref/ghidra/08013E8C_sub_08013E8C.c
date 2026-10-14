// sub_08013E8C at 0x08013E8C (thumb)

undefined8 sub_08013E8C(int *param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((*param_1 < 0x168001) || (0x8bfff < param_1[1])) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}

