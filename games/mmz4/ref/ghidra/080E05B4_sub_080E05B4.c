// sub_080E05B4 at 0x080E05B4 (thumb)

undefined4 sub_080E05B4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    local_18 = *(int *)(param_1 + 0x54);
    iVar1 = -0xa00;
  }
  else {
    local_18 = *(int *)(param_1 + 0x54);
    iVar1 = 0xa00;
  }
  local_18 = local_18 + iVar1;
  local_14 = *(int *)(param_1 + 0x58) + 0x400;
  sub_080D0894(1,&local_18);
  sub_08002B10(0x2a);
  *(undefined *)(param_1 + 0x11) = 2;
  sub_080E04AC(param_1 + 0x54,3,3,*(byte *)(param_1 + 10) >> 4 & 1);
  sub_080E04AC(param_1 + 0x54,3,4,*(byte *)(param_1 + 10) >> 4 & 1);
  return in_lr;
}

