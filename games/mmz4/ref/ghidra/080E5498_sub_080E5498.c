// sub_080E5498 at 0x080E5498 (thumb)

undefined4 sub_080E5498(int param_1)

{
  undefined4 in_lr;
  undefined4 local_10;
  int local_c;
  
  local_10 = *(undefined4 *)(param_1 + 0x54);
  local_c = *(int *)(param_1 + 0x58) + -0xa00;
  sub_080D0894(1,&local_10);
  sub_08002B10(0x2a);
  *(undefined *)(param_1 + 0x11) = 1;
  sub_080E5194(param_1 + 0x54,0x103,*(byte *)(param_1 + 10) >> 4 & 1);
  sub_080E5344(param_1);
  return in_lr;
}

