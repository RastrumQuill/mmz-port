// sub_0807AEA4 at 0x0807AEA4 (thumb)

undefined4 sub_0807AEA4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_080070D8(DAT_020305e8);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 0x18;
    *(undefined *)(iVar1 + 9) = 0x1d;
    *(undefined4 *)(iVar1 + 0x14) = 0x807af3d;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
    *(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar1 + 0x1c);
    *(undefined *)(iVar1 + 0x10) = 1;
    *(undefined4 *)(iVar1 + 0x54) = param_1;
    *(undefined4 *)(iVar1 + 0x58) = param_2;
  }
  return in_lr;
}

