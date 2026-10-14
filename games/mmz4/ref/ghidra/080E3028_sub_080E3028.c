// sub_080E3028 at 0x080E3028 (thumb)

undefined4 sub_080E3028(int param_1)

{
  undefined4 in_lr;
  undefined4 local_10;
  int local_c;
  
  local_10 = *(undefined4 *)(param_1 + 0x54);
  local_c = *(int *)(param_1 + 0x58) + -0x1c00;
  sub_080D0894(1,&local_10);
  sub_08002B10(0x2a);
  local_c = *(int *)(param_1 + 0x58) + -0x700;
  sub_080D0894(1,&local_10);
  sub_08002B10(0x2a);
  sub_080E2C9C(param_1 + 0x54,1,3);
  *(undefined *)(param_1 + 0x11) = 2;
  sub_080E2EB4(param_1);
  return in_lr;
}

