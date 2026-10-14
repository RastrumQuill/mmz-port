// sub_0805D940 at 0x0805D940 (thumb)

undefined4 sub_0805D940(undefined4 param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022e98);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x1e;
    *(undefined4 *)(iVar1 + 0x14) = 0x805d989;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022edc;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022f4e;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined *)(iVar1 + 0x11) = 0;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
  }
  return in_lr;
}

