// sub_080ADE60 at 0x080ADE60 (thumb)

undefined4 sub_080ADE60(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_020305f8);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 8;
    *(undefined *)(iVar1 + 9) = 0x26;
    *(undefined4 *)(iVar1 + 0x14) = 0x80adf5d;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = 5;
    *(byte *)(iVar1 + 0x12) = *(byte *)(param_1 + 10) >> 4 & 1;
    iVar3 = *(int *)(param_1 + 0x54);
    iVar2 = iVar3 + -0x1a00;
    *(int *)(iVar1 + 0x54) = iVar2;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      iVar2 = iVar3 + 0x1a00;
    }
    *(int *)(iVar1 + 0x54) = iVar2;
    *(int *)(iVar1 + 0x58) = *(int *)(param_1 + 0x58) + -0x1700;
  }
  return in_lr;
}

