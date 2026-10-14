// sub_080E70DC at 0x080E70DC (thumb)

undefined4 sub_080E70DC(int param_1)

{
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  local_18 = *(undefined4 *)(param_1 + 0x54);
  local_14 = *(int *)(param_1 + 0x58) + -0xd00;
  sub_080D0894(1,&local_18);
  sub_08002B10(0x2a);
  *(undefined *)(param_1 + 0x11) = 1;
  sub_080E6B38(param_1 + 0x54,0x202,*(byte *)(param_1 + 10) >> 4 & 1);
  sub_080E6B38(param_1 + 0x54,0x203,*(byte *)(param_1 + 10) >> 4 & 1);
  sub_080E6E98(param_1);
  return in_lr;
}

