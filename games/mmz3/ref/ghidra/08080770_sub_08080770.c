// sub_08080770 at 0x08080770 (thumb)

undefined4 sub_08080770(int param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar1 = sub_080070D8(DAT_020305e8);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 0x18;
    *(undefined *)(iVar1 + 9) = 0x26;
    *(undefined4 *)(iVar1 + 0x14) = 0x8080b9d;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
    *(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar1 + 0x1c);
    *(undefined *)(iVar1 + 0x10) = 5;
    *(byte *)(iVar1 + 0x11) = param_2;
    *(uint *)(iVar1 + 0x54) = *(int *)(param_1 + 0x54) + -0x1700 + (uint)param_2 * 0x2e00;
    *(int *)(iVar1 + 0x58) = *(int *)(param_1 + 0x58) + -0x400;
    *(int *)(iVar1 + 0x28) = param_1;
  }
  iVar3 = 0;
  do {
    iVar2 = sub_0800710C(DAT_020305e8);
    iVar3 = iVar3 + 1;
    if (iVar2 != 0) {
      *(undefined *)(iVar2 + 0x25) = 0x18;
      *(undefined *)(iVar2 + 9) = 0x26;
      *(undefined4 *)(iVar2 + 0x14) = 0x8080b9d;
      *(undefined2 *)(iVar2 + 0x20) = 0;
      *(undefined *)(iVar2 + 0x22) = 0;
      *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
      *(undefined *)(iVar2 + 0x1d) = *(undefined *)(iVar2 + 0x1c);
      *(undefined *)(iVar2 + 0x10) = 4;
      *(byte *)(iVar2 + 0x11) = param_2;
      *(int *)(iVar2 + 0x28) = param_1;
      *(int *)(iVar2 + 0x2c) = iVar1;
      *(char *)(iVar2 + 0x12) = (char)iVar3;
    }
  } while (iVar3 < 6);
  return in_lr;
}

