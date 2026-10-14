// sub_080DCBE0 at 0x080DCBE0 (thumb)

undefined8 sub_080DCBE0(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((*(char *)(*(int *)(param_1 + 0x28) + 2) == '\0') &&
     (*(char *)(*(int *)(param_1 + 0x28) + 3) != '\0')) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

