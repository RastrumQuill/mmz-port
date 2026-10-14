// sub_080C5BC0 at 0x080C5BC0 (thumb)

undefined4 sub_080C5BC0(int param_1)

{
  short *psVar1;
  undefined4 in_lr;
  
  psVar1 = (short *)(*(int *)(param_1 + 0x28) + 0xb4);
  *psVar1 = *psVar1 + -1;
  sub_080BD014();
  return in_lr;
}

