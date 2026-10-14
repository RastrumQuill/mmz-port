// sub_080D4EB4 at 0x080D4EB4 (thumb)

undefined8 sub_080D4EB4(int param_1,short param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xbc) = 1;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + param_3;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + param_4;
  if ((param_2 == 0) || (1 < *(byte *)(param_1 + 0xc))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}

