// sub_08013F20 at 0x08013F20 (thumb)

undefined8 sub_08013F20(int *param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((param_1[1] < 0x41000) || ((param_1[1] < 0x5f000 && (*param_1 < 0x52000)))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

