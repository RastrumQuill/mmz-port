// sub_080DAAA8 at 0x080DAAA8 (thumb)

undefined8 sub_080DAAA8(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((*(byte *)(*(int *)(param_1 + 0x28) + 1) < 2) &&
     (*(char *)(*(int *)(param_1 + 0x28) + 2) != '\0')) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

