// sub_0801E518 at 0x0801E518 (thumb)

undefined8 sub_0801E518(int *param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((param_1[1] < 0x28001) && (*param_1 < 0x11d001)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}

