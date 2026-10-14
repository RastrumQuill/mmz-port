// sub_081284FC at 0x081284FC (thumb)

undefined8 sub_081284FC(short param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = 0;
  if (param_1 == 4) {
    DAT_0203d7b0 = &DAT_08827a30;
  }
  else if (param_1 == 0x40) {
    DAT_0203d7b0 = &DAT_08827a3c;
  }
  else {
    DAT_0203d7b0 = &DAT_08827a30;
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}

