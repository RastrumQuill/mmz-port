// sub_080B9A44 at 0x080B9A44 (thumb)

undefined4 sub_080B9A44(int param_1)

{
  undefined4 uVar1;
  
  if ((*(byte *)(*(int *)(param_1 + 0x20) + 1) < 2) &&
     (*(char *)(*(int *)(param_1 + 0x20) + 2) != '\0')) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

