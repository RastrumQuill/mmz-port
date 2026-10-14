// sub_080AA688 at 0x080AA688 (thumb)

undefined4 sub_080AA688(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  int local_c;
  int local_8;
  undefined4 uStack_4;
  
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    local_c = *(int *)(param_1 + 0x54);
    iVar1 = 0x1300;
  }
  else {
    local_c = *(int *)(param_1 + 0x54);
    iVar1 = -0x1300;
  }
  local_c = local_c + iVar1;
  local_8 = *(int *)(param_1 + 0x58) + -0x1800;
  uStack_4 = in_lr;
  sub_080E24A0(&local_c,0x307,*(byte *)(param_1 + 10) >> 4 & 1);
  return uStack_4;
}

