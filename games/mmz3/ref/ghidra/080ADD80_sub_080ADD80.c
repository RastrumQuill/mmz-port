// sub_080ADD80 at 0x080ADD80 (thumb)

undefined4 sub_080ADD80(int param_1,char param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_020305f8);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 8;
    *(undefined *)(iVar1 + 9) = 0x26;
    *(undefined4 *)(iVar1 + 0x14) = 0x80adf5d;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = 3;
    *(char *)(iVar1 + 0x12) = param_2 * '3';
    *(int *)(iVar1 + 0x28) = param_1;
    *(int *)(iVar1 + 0x58) = *(int *)(param_1 + 0x58) + -0x3000;
  }
  return in_lr;
}

