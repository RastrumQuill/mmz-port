// sub_080CF8DC at 0x080CF8DC (thumb)

undefined4 sub_080CF8DC(int param_1)

{
  int iVar1;
  short *psVar2;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  sub_08002624(0xc5);
  psVar2 = (short *)(iVar1 + 0xcc);
  if (*psVar2 != 0) {
    *psVar2 = *psVar2 + -1;
  }
  sub_080BD014(param_1);
  return in_lr;
}

