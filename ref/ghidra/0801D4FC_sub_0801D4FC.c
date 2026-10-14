// sub_0801D4FC at 0x0801D4FC (thumb)

uint sub_0801D4FC(int param_1,uint param_2)

{
  uint uVar1;
  
  param_2 = param_2 & 0xff;
  uVar1 = *(byte *)(param_1 + 0x11e) + param_2;
  if (0xff < uVar1) {
    param_2 = param_2 - (uVar1 - 0xff) & 0xff;
    uVar1 = 0xff;
  }
  *(byte *)(param_1 + 0x11e) = (byte)uVar1;
  return param_2;
}

