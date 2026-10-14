// sub_080DD0E0 at 0x080DD0E0 (thumb)

undefined8 sub_080DD0E0(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((**(byte **)(param_1 + 0x28) < 2) && ((*(byte **)(param_1 + 0x28))[1] != 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

