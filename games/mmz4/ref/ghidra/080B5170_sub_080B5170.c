// sub_080B5170 at 0x080B5170 (thumb)

undefined4 sub_080B5170(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xc0) == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    iVar1 = sub_0802AD94(0,param_1,&DAT_088604b4);
    *(int *)(param_1 + 0xc0) = iVar1;
    if (iVar1 != 0) {
      sub_08005784(param_1 + 0x74,&DAT_08860484);
      sub_0801CF00(param_1,0xca0f);
    }
  }
  return in_lr;
}

