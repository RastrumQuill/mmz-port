// sub_0801D77C at 0x0801D77C (thumb)

undefined4 sub_0801D77C(int param_1)

{
  undefined4 uVar1;
  
  if ((*(char *)(param_1 + 0x18a) == '\0') || (*(char *)(param_1 + 0x18b) == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

