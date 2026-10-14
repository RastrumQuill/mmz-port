// sub_080B90F8 at 0x080B90F8 (thumb)

undefined4 sub_080B90F8(int param_1)

{
  short *psVar1;
  undefined4 in_lr;
  
  DAT_02000a40 = 0;
  *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) & 0xf3;
  psVar1 = (short *)(*(int *)(param_1 + 0x28) + 0xcc);
  if (*psVar1 != 0) {
    *psVar1 = *psVar1 + -1;
  }
  sub_0807F804(param_1);
  return in_lr;
}

