// sub_080E0624 at 0x080E0624 (thumb)

undefined4 sub_080E0624(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    local_10 = *(int *)(param_1 + 0x54);
    iVar1 = -0xa00;
  }
  else {
    local_10 = *(int *)(param_1 + 0x54);
    iVar1 = 0xa00;
  }
  local_10 = local_10 + iVar1;
  local_c = *(int *)(param_1 + 0x58) + 0x400;
  sub_080D0894(1,&local_10);
  sub_08002B10(0x2a);
  *(undefined *)(param_1 + 0x11) = 3;
  sub_080E04AC(param_1 + 0x54,3,4,*(byte *)(param_1 + 10) >> 4 & 1);
  return in_lr;
}

