// sub_08013A38 at 0x08013A38 (thumb)

undefined8 sub_08013A38(int *param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((*param_1 < 0x5a000) && (param_1[1] < 0x1e000)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}

