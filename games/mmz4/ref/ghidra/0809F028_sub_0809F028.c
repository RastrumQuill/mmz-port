// sub_0809F028 at 0x0809F028 (thumb)

undefined4 sub_0809F028(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xc0) == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    iVar1 = sub_0802AD94(0,param_1,&DAT_0885e238);
    *(int *)(param_1 + 0xc0) = iVar1;
    if (iVar1 != 0) {
      sub_08005784(param_1 + 0x74,&DAT_0885e220);
      sub_0801CF00(param_1,0x7500);
    }
  }
  return in_lr;
}

