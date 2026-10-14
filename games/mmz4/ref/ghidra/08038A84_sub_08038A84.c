// sub_08038A84 at 0x08038A84 (thumb)

undefined8 sub_08038A84(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0xc4) & 0xffffff) == 0x1a1309) &&
     ((*(uint *)(param_1 + 0xf0) & 0xffffff00) == 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

