// sub_080B0818 at 0x080B0818 (thumb)

undefined4 sub_080B0818(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xc0) == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    iVar1 = sub_0802AD94(0,param_1,&DAT_0885fe94);
    *(int *)(param_1 + 0xc0) = iVar1;
    if (iVar1 != 0) {
      if (*(char *)(param_1 + 0x12) == -1) {
        sub_08005784(param_1 + 0x74,&DAT_0885fd70 + (uint)*(byte *)(param_1 + 0x11) * 0x30);
      }
      else {
        sub_08005784(param_1 + 0x74,&DAT_0885fe48);
      }
    }
  }
  return in_lr;
}

