// sub_08090F10 at 0x08090F10 (thumb)

undefined4 sub_08090F10(int param_1,undefined param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_020305e8);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 0x18;
    *(undefined *)(iVar1 + 9) = 0x3b;
    *(undefined4 *)(iVar1 + 0x14) = 0x8090fe9;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
    *(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar1 + 0x1c);
    *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(param_1 + 0x58);
    *(undefined *)(iVar1 + 0x10) = param_2;
    *(bool *)(iVar1 + 0x13) = 0 < *(int *)(param_1 + 0xb4);
  }
  return in_lr;
}

