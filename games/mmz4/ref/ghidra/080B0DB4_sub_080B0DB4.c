// sub_080B0DB4 at 0x080B0DB4 (thumb)

undefined4 sub_080B0DB4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0x28) == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    iVar1 = sub_0802AD94(0,param_1,&DAT_0885ff04);
    *(int *)(param_1 + 0x28) = iVar1;
    if (iVar1 != 0) {
      sub_08005784(param_1 + 0x74,&DAT_0885feec);
      *(undefined *)(param_1 + 0xc2) = 0xf;
    }
  }
  return in_lr;
}

