// sub_080B1644 at 0x080B1644 (thumb)

undefined4 sub_080B1644(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0xc0);
  if ((iVar1 == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    DAT_0885ff98 = 0xfffff400;
    DAT_0885ff94 = iVar1;
    iVar1 = sub_0802AD94(0,param_1);
    *(int *)(param_1 + 0xc0) = iVar1;
    if (iVar1 != 0) {
      sub_08005784(param_1 + 0x74,&DAT_0885ff7c);
      sub_0801CF00(param_1,0xbb04);
    }
  }
  return in_lr;
}

