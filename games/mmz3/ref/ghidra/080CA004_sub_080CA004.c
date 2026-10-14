// sub_080CA004 at 0x080CA004 (thumb)

undefined4 sub_080CA004(int param_1,undefined param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_080070D8(DAT_02030630);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 0x1e;
    *(undefined *)(iVar1 + 9) = 1;
    *(undefined4 *)(iVar1 + 0x14) = 0x80ca06d;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
    *(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar1 + 0x1c);
    *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(int *)(iVar1 + 0x58) = *(int *)(param_1 + 0x58) + -0x1500;
    *(undefined *)(iVar1 + 0x10) = param_2;
    *(int *)(iVar1 + 0x28) = param_1;
  }
  return in_lr;
}

