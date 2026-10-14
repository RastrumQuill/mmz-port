// sub_08034868 at 0x08034868 (thumb)

undefined4 sub_08034868(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0802582C();
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 0x10;
    *(undefined *)(iVar1 + 9) = 1;
    *(undefined4 *)(iVar1 + 0x14) = 0x80348a9;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x54) = param_2;
    *(undefined4 *)(iVar1 + 0x58) = param_3;
    *(undefined4 *)(iVar1 + 0x28) = param_1;
  }
  return in_lr;
}

