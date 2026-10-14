// sub_080DAA8C at 0x080DAA8C (thumb)

undefined8 sub_080DAA8C(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((*(byte *)(*(int *)(param_1 + 0x28) + 1) < 2) && (1 < *(byte *)(*(int *)(param_1 + 0x28) + 2))
     ) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

