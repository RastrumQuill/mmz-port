// sub_080B9A2C at 0x080B9A2C (thumb)

undefined4 sub_080B9A2C(int param_1)

{
  undefined4 uVar1;
  
  if ((*(byte *)(*(int *)(param_1 + 0x20) + 1) < 2) && (1 < *(byte *)(*(int *)(param_1 + 0x20) + 2))
     ) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

