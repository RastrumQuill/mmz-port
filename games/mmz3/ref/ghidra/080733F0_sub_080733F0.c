// sub_080733F0 at 0x080733F0 (thumb)

undefined4 sub_080733F0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_080BA004();
  iVar1 = sub_080070D8(DAT_020305e8);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 0x18;
    *(undefined *)(iVar1 + 9) = 0x13;
    *(undefined4 *)(iVar1 + 0x14) = 0x8073609;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
    *(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar1 + 0x1c);
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x54) = param_1;
    *(undefined4 *)(iVar1 + 0x58) = param_2;
  }
  return in_lr;
}

