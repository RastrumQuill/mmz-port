// sub_080BB168 at 0x080BB168 (thumb)

undefined4 sub_080BB168(int param_1)

{
  undefined4 uVar1;
  
  if ((*(short *)(*(int *)(param_1 + 0x20) + 2) == 0x201) &&
     (0 < *(short *)(*(int *)(param_1 + 0x20) + 4))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

