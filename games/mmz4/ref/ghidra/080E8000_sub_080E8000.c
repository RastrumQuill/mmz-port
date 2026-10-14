// sub_080E8000 at 0x080E8000 (thumb)

undefined4 sub_080E8000(int param_1)

{
  short *psVar1;
  undefined4 in_lr;
  
  psVar1 = (short *)(*(int *)(param_1 + 0x28) + 0xcc);
  if (*psVar1 != 0) {
    *psVar1 = *psVar1 + -1;
  }
  sub_080D083C(param_1);
  return in_lr;
}

