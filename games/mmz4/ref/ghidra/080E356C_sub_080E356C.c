// sub_080E356C at 0x080E356C (thumb)

undefined4 sub_080E356C(int param_1)

{
  undefined4 in_lr;
  undefined4 local_10;
  int local_c;
  
  sub_080E33E4();
  local_10 = *(undefined4 *)(param_1 + 0x54);
  local_c = *(int *)(param_1 + 0x58) + -0x1200;
  sub_080D0894(1,&local_10);
  sub_08002B10(0x2a);
  *(undefined *)(param_1 + 0x11) = 1;
  sub_080E32E4(param_1 + 0x54,0x202,*(byte *)(param_1 + 10) >> 4 & 1);
  sub_080E35BC(param_1);
  return in_lr;
}

