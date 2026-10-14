// sub_080B58A4 at 0x080B58A4 (thumb)

undefined4 sub_080B58A4(int param_1)

{
  short *psVar1;
  undefined4 in_lr;
  
  psVar1 = (short *)(*(int *)(param_1 + 0x28) + 0xcc);
  if (*psVar1 != 0) {
    *psVar1 = *psVar1 + -1;
  }
  sub_0807F804(param_1);
  return in_lr;
}

