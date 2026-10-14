// sub_0801E760 at 0x0801E760 (thumb)

undefined8 sub_0801E760(int *param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*param_1 < 0x195000) {
    if (*param_1 < 0xf0000) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 2;
  }
  return CONCAT44(in_lr,uVar1);
}

