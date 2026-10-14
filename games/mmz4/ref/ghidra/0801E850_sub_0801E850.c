// sub_0801E850 at 0x0801E850 (thumb)

undefined8 sub_0801E850(int *param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*param_1 < 0xe1000) {
    uVar1 = 0;
  }
  else if (*param_1 < 0x159000) {
    uVar1 = 2;
  }
  else {
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}

