// sub_080BC258 at 0x080BC258 (thumb)

undefined4 sub_080BC258(uint param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  char acStack_24 [16];
  undefined4 uStack_4;
  
  uStack_4 = in_lr;
  acStack_24[param_4 * 0x10000 >> 0x10] = '\0';
  for (iVar1 = param_4 * 0x10000 + -0x10000; -1 < iVar1; iVar1 = ((iVar1 >> 0x10) + -1) * 0x10000) {
    uVar2 = (param_1 & 0xf) + 0x30;
    acStack_24[iVar1 >> 0x10] = (char)uVar2;
    if (0x39 < uVar2) {
      acStack_24[iVar1 >> 0x10] = (char)(param_1 & 0xf) + '7';
    }
    param_1 = param_1 >> 4;
  }
  sub_080BC174(acStack_24,param_2,param_3);
  return uStack_4;
}

