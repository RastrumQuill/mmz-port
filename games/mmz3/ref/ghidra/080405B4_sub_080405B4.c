// sub_080405B4 at 0x080405B4 (thumb)

undefined8 sub_080405B4(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 in_lr;
  
  if (param_2 == 0) {
    puVar1 = (undefined4 *)(param_1 + 0xd4);
  }
  else if (param_2 == 1) {
    puVar1 = (undefined4 *)(param_1 + 0xd8);
  }
  else if (param_2 == 2) {
    puVar1 = (undefined4 *)(param_1 + 0xdc);
  }
  else {
    puVar1 = (undefined4 *)(param_1 + 0xe0);
  }
  return CONCAT44(in_lr,*puVar1);
}

