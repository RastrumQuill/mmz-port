// sub_080BB150 at 0x080BB150 (thumb)

undefined4 sub_080BB150(int param_1)

{
  undefined4 uVar1;
  
  if ((*(char *)(*(int *)(param_1 + 0x20) + 2) == '\0') &&
     (*(char *)(*(int *)(param_1 + 0x20) + 3) != '\0')) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

