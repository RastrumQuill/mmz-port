// sub_080E2054 at 0x080E2054 (thumb)

undefined4 sub_080E2054(int param_1)

{
  undefined4 in_lr;
  
  sub_080E20E8();
  sub_080D0894(1,param_1 + 0x54);
  sub_080E2134(param_1);
  *(undefined *)(param_1 + 0x11) = 0;
  sub_080E1D28(param_1 + 0x54,0x301,*(byte *)(param_1 + 10) >> 4 & 1);
  return in_lr;
}

