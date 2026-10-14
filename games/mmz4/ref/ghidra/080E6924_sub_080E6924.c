// sub_080E6924 at 0x080E6924 (thumb)

undefined4 sub_080E6924(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  local_18 = *(undefined4 *)(param_1 + 0x54);
  local_14 = *(int *)(param_1 + 0x58) + -0xf00;
  sub_080D0894(1,&local_18);
  sub_08002B10(0xa7);
  *(undefined *)(param_1 + 0x11) = 1;
  iVar1 = param_1 + 0x54;
  sub_080E65E0(iVar1,0x102,*(byte *)(param_1 + 10) >> 4 & 1);
  sub_080E65E0(iVar1,0x103,*(byte *)(param_1 + 10) >> 4 & 1);
  sub_080E65E0(iVar1,0x104,*(byte *)(param_1 + 10) >> 4 & 1);
  sub_080E67A8(param_1);
  return in_lr;
}

