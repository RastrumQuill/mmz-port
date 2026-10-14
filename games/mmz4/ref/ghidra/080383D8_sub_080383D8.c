// sub_080383D8 at 0x080383D8 (thumb)

undefined8 sub_080383D8(int param_1,undefined param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0xf8) < 2) {
    sub_0803A904(0,param_2);
    uVar1 = 1;
  }
  else {
    sub_0803A904(1,param_2);
    uVar1 = 2;
  }
  return CONCAT44(in_lr,uVar1);
}

