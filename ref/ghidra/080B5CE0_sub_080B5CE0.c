// sub_080B5CE0 at 0x080B5CE0 (thumb)

undefined4 sub_080B5CE0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  sub_080B5C04(param_1,&local_10);
  iVar1 = local_10 - *(int *)(param_1 + 0x4c);
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) * 0xf + local_10 >> 4;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) * 0xf + local_c + (iVar1 >> 1) >> 4;
  return in_lr;
}

