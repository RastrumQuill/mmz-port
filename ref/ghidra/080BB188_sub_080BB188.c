// sub_080BB188 at 0x080BB188 (thumb)

undefined4 sub_080BB188(int param_1)

{
  undefined4 uVar1;
  
  if ((*(short *)(*(int *)(param_1 + 0x20) + 2) == 0x200) &&
     (0 < *(short *)(*(int *)(param_1 + 0x20) + 4))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

