// sub_080AA6D4 at 0x080AA6D4 (thumb)

undefined4 sub_080AA6D4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xc0) == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    iVar1 = sub_0802AD94(0,param_1,&DAT_0885f624);
    *(int *)(param_1 + 0xc0) = iVar1;
    if (iVar1 != 0) {
      sub_08005784(param_1 + 0x74,&DAT_0885f5cc);
      sub_0801CF00(param_1,0x9400);
      if (*(char *)(param_1 + 0xd) == '\x03') {
        iVar1 = *(int *)(param_1 + 0x2c);
        if ((iVar1 != 0) && (*(byte *)(iVar1 + 0xc) < 2)) {
          *(undefined *)(iVar1 + 0x12) = 0;
        }
        *(undefined4 *)(param_1 + 0x2c) = 0;
        *(undefined *)(param_1 + 0xb4) = 0;
      }
    }
  }
  return in_lr;
}

