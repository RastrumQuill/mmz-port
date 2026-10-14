// sub_080D8C84 at 0x080D8C84 (thumb)

undefined4 sub_080D8C84(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined param_4)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_02030630);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 0x1e;
    *(undefined *)(iVar1 + 9) = 0x1c;
    *(undefined4 *)(iVar1 + 0x14) = 0x80d8ce5;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
    *(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar1 + 0x1c);
    *(undefined *)(iVar1 + 0x10) = 1;
    *(undefined4 *)(iVar1 + 0x54) = param_2;
    *(undefined4 *)(iVar1 + 0x58) = param_3;
    *(undefined4 *)(iVar1 + 0x28) = param_1;
    *(undefined *)(iVar1 + 0x12) = param_4;
  }
  return in_lr;
}

