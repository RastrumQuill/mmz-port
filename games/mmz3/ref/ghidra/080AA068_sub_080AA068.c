// sub_080AA068 at 0x080AA068 (thumb)

undefined4 sub_080AA068(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_020305f8);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 8;
    *(undefined *)(iVar1 + 9) = 0x1e;
    *(undefined4 *)(iVar1 + 0x14) = 0x80aa0bd;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x54) = param_1;
    *(undefined4 *)(iVar1 + 0x58) = param_2;
    *(undefined4 *)(iVar1 + 0x5c) = param_3;
    *(undefined4 *)(iVar1 + 0x60) = param_4;
  }
  return in_lr;
}

