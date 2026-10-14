// sub_080E2810 at 0x080E2810 (thumb)

undefined4 sub_080E2810(int param_1)

{
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  local_c = *(int *)(param_1 + 0x58) + -0xc00;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    local_10 = 0x800;
  }
  else {
    local_10 = -0x800;
  }
  local_10 = *(int *)(param_1 + 0x54) + local_10;
  sub_080D0894(1,&local_10);
  sub_08002B10(0x166);
  *(undefined *)(param_1 + 0x11) = 0;
  sub_080E24A0(param_1 + 0x54,0x103,*(byte *)(param_1 + 10) >> 4 & 1);
  sub_080E2638(param_1);
  return in_lr;
}

