// sub_080C5BAC at 0x080C5BAC (thumb)

undefined4 sub_080C5BAC(int param_1)

{
  short *psVar1;
  undefined4 in_lr;
  
  psVar1 = (short *)(*(int *)(param_1 + 0x28) + 0xb4);
  *psVar1 = *psVar1 + -1;
  sub_080BD014();
  return in_lr;
}

