// sub_080DCC20 at 0x080DCC20 (thumb)

undefined8 sub_080DCC20(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((*(short *)(*(int *)(param_1 + 0x28) + 2) == 0x200) &&
     (0 < *(short *)(*(int *)(param_1 + 0x28) + 4))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

