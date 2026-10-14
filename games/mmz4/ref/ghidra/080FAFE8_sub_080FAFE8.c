// sub_080FAFE8 at 0x080FAFE8 (thumb)

undefined4 sub_080FAFE8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xc0) == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    iVar1 = sub_0802AD94(0,param_1,&DAT_088675e4);
    *(int *)(param_1 + 0xc0) = iVar1;
    if ((iVar1 != 0) &&
       (sub_08005784(param_1 + 0x74,&DAT_08867474), *(char *)(param_1 + 0xd) == '\x01')) {
      sub_0801CF00(param_1,0x9601);
      if ((DAT_0202cac0 & 0xf) == 0) {
        if (99 < *(byte *)(param_1 + 0x12)) {
          return in_lr;
        }
      }
      else if (0x31 < *(byte *)(param_1 + 0x12)) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

