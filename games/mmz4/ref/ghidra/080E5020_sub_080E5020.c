// sub_080E5020 at 0x080E5020 (thumb)

undefined4 sub_080E5020(int param_1)

{
  undefined4 in_lr;
  undefined4 local_10;
  int local_c;
  
  local_10 = *(undefined4 *)(param_1 + 0x54);
  local_c = *(int *)(param_1 + 0x58) + -0xc00;
  sub_080D0894(1,&local_10);
  *(undefined *)(param_1 + 0x11) = 2;
  sub_080E4D94(param_1 + 0x54,1,4);
  sub_080E4F14(param_1);
  return in_lr;
}

