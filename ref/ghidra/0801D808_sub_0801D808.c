// sub_0801D808 at 0x0801D808 (thumb)

undefined4 sub_0801D808(int param_1,char param_2)

{
  undefined4 uVar1;
  
  if (((*(char *)(param_1 + 0x18a) == '\x03') || (*(char *)(param_1 + 0x18b) == '\x03')) &&
     ((*(char *)(param_1 + 0x19d) == param_2 || (*(byte *)(param_1 + 0xbf) < 2)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

