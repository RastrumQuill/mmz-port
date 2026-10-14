// sub_080B1D08 at 0x080B1D08 (thumb)

undefined4 sub_080B1D08(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xc0) == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    iVar1 = sub_0802AD94(0,param_1,&DAT_088600e8);
    *(int *)(param_1 + 0xc0) = iVar1;
    if (iVar1 != 0) {
      sub_08005784(param_1 + 0x74,&DAT_0885ffe0);
      sub_0801CF00(param_1,0xc207);
      sub_0801CF00(param_1,0xc207);
    }
  }
  return in_lr;
}

