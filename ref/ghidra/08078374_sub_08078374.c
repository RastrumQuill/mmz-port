// sub_08078374 at 0x08078374 (thumb)

undefined4 sub_08078374(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022f74);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 8;
    *(undefined4 *)(iVar1 + 0x14) = 0x80783d1;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022f90;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022fe8;
    *(undefined4 *)(iVar1 + 0x4c) = *param_1;
    *(undefined4 *)(iVar1 + 0x50) = param_1[1];
    *(int *)(iVar1 + 0x54) = param_2;
    *(bool *)(iVar1 + 0x12) = 0 < param_2;
    *(undefined *)(iVar1 + 0x10) = 0;
  }
  return in_lr;
}

