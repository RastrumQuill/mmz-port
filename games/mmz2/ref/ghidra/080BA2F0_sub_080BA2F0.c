// sub_080BA2F0 at 0x080BA2F0 (thumb)

undefined4 sub_080BA2F0(undefined4 param_1,undefined param_2,undefined param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08006B84(DAT_0202f084);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x32;
    *(undefined4 *)(iVar1 + 0x14) = 0x80ba39d;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x28) = param_1;
    *(undefined *)(iVar1 + 0x74) = param_2;
    *(undefined *)(iVar1 + 0x75) = param_3;
  }
  iVar1 = sub_08006B84(DAT_0202f084);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x32;
    *(undefined4 *)(iVar1 + 0x14) = 0x80ba39d;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = 1;
    *(undefined4 *)(iVar1 + 0x28) = param_1;
    *(undefined *)(iVar1 + 0x74) = param_2;
    *(undefined *)(iVar1 + 0x75) = param_3;
  }
  return in_lr;
}

