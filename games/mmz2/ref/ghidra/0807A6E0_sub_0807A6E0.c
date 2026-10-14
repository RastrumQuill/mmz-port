// sub_0807A6E0 at 0x0807A6E0 (thumb)

undefined4
sub_0807A6E0(undefined4 param_1,undefined2 param_2,undefined param_3,undefined param_4,
            undefined param_5)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08006B84(DAT_0202f078);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 0x18;
    *(undefined *)(iVar1 + 9) = 0x23;
    *(undefined4 *)(iVar1 + 0x14) = 0x807a769;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
    *(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar1 + 0x1c);
    *(undefined4 *)(iVar1 + 0x28) = param_1;
    *(undefined *)(iVar1 + 0x10) = 1;
    *(undefined *)(iVar1 + 0x11) = 0;
    *(undefined *)(iVar1 + 0x12) = param_4;
    *(undefined *)(iVar1 + 0x13) = param_5;
    *(undefined2 *)(iVar1 + 0xc0) = param_2;
    *(undefined *)(iVar1 + 0xbd) = param_3;
  }
  return in_lr;
}

