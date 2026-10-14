// sub_080A29B4 at 0x080A29B4 (thumb)

undefined4 sub_080A29B4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = 0;
  param_1 = param_1 + -0x1c00;
  do {
    iVar1 = sub_080070D8(DAT_020305f8);
    if (iVar1 != 0) {
      *(undefined *)(iVar1 + 0x25) = 8;
      *(undefined *)(iVar1 + 9) = 0x12;
      *(undefined4 *)(iVar1 + 0x14) = 0x80a2a29;
      *(undefined2 *)(iVar1 + 0x20) = 0;
      *(undefined *)(iVar1 + 0x22) = 0;
      *(undefined *)(iVar1 + 0x10) = 0;
      *(int *)(iVar1 + 0x54) = param_1;
      *(int *)(iVar1 + 0x58) = param_2 + 0x800;
      *(char *)(iVar1 + 0x12) = (char)iVar2;
    }
    param_1 = param_1 + 0x3800;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  return in_lr;
}

