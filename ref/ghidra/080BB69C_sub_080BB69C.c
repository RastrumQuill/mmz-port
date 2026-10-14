// sub_080BB69C at 0x080BB69C (thumb)

undefined4 sub_080BB69C(int param_1)

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

