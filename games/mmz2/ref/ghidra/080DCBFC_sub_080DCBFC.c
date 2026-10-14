// sub_080DCBFC at 0x080DCBFC (thumb)

undefined8 sub_080DCBFC(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((*(short *)(*(int *)(param_1 + 0x28) + 2) == 0x201) &&
     (0 < *(short *)(*(int *)(param_1 + 0x28) + 4))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

