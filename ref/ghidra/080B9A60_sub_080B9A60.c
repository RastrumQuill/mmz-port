// sub_080B9A60 at 0x080B9A60 (thumb)

undefined4 sub_080B9A60(int param_1)

{
  undefined4 uVar1;
  
  if ((*(byte *)(*(int *)(param_1 + 0x20) + 1) < 2) &&
     (*(short *)(*(int *)(param_1 + 0x20) + 2) == 0x100)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

