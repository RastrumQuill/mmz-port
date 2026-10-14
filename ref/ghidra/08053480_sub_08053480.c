// sub_08053480 at 0x08053480 (thumb)

undefined4 sub_08053480(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005428(DAT_02022e98);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0xe;
    *(undefined4 *)(iVar1 + 0x14) = 0x8053569;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022ebc;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022f3e;
    *(undefined4 *)(iVar1 + 0x4c) = param_1;
    *(undefined4 *)(iVar1 + 0x50) = param_2;
    *(undefined *)(iVar1 + 0x10) = 1;
    *(undefined4 *)(iVar1 + 0x5c) = 0;
  }
  return in_lr;
}

