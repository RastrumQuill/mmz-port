// sub_08029C48 at 0x08029C48 (thumb)

undefined4 sub_08029C48(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = (int)*(short *)(param_1 + 0xfa);
  if (iVar1 != -1) {
    sub_08004768(iVar1);
    *(short *)(param_1 + 0xfa) = -1;
  }
  sub_080258D8(param_1);
  return in_lr;
}

