// sub_08075960 at 0x08075960 (thumb)

undefined4 sub_08075960(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = 0;
  do {
    iVar1 = sub_080070D8(DAT_020305e8);
    if (iVar1 != 0) {
      *(undefined *)(iVar1 + 0x25) = 0x18;
      *(undefined *)(iVar1 + 9) = 0x16;
      *(undefined4 *)(iVar1 + 0x14) = 0x8075c71;
      *(undefined2 *)(iVar1 + 0x20) = 0;
      *(undefined *)(iVar1 + 0x22) = 0;
      *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
      *(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar1 + 0x1c);
      *(undefined *)(iVar1 + 0x10) = 2;
      *(char *)(iVar1 + 0x11) = (char)iVar2;
      *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(param_1 + 0x54);
      *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(param_1 + 0x58);
      *(undefined *)(iVar1 + 0xb9) = 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  return in_lr;
}

