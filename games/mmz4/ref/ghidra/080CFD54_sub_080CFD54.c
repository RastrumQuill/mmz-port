// sub_080CFD54 at 0x080CFD54 (thumb)

undefined4 sub_080CFD54(int param_1)

{
  short *psVar1;
  undefined4 in_lr;
  
  psVar1 = (short *)(*(int *)(param_1 + 0x28) + 0xcc);
  if (*psVar1 != 0) {
    *psVar1 = *psVar1 + -1;
  }
  sub_080BD014(param_1);
  return in_lr;
}

