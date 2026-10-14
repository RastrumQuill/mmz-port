// sub_0809DD90 at 0x0809DD90 (thumb)

undefined4 sub_0809DD90(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xc0) == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    iVar1 = sub_0802AD94(0,param_1,&DAT_0885e020);
    *(int *)(param_1 + 0xc0) = iVar1;
    if (iVar1 == 0) {
      if (*(int *)(DAT_0202dbf0 + 0x54) < *(int *)(param_1 + 0x54)) {
        *(undefined *)(param_1 + 0xbc) = 1;
      }
      else {
        *(undefined *)(param_1 + 0xbc) = 0;
      }
    }
    else {
      sub_08005784(param_1 + 0x74,&DAT_0885dff8);
      sub_0801CF00(param_1,0x6e05);
    }
    if ((byte)(*(char *)(param_1 + 0xd) - 2U) < 2) {
      *(undefined *)(param_1 + 0x12) = 0xb4;
    }
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x13) = 8;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

