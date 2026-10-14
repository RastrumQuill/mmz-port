// sub_080D60CC at 0x080D60CC (thumb)

undefined8 sub_080D60CC(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (((param_1 == param_2) && ((DAT_02000d14 & 0x20) != 0)) && ((DAT_02000d14 & 0xd0) == 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

