// sub_080754EC at 0x080754EC (thumb)

undefined4 sub_080754EC(undefined4 param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022e98);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x41;
    *(undefined4 *)(iVar1 + 0x14) = 0x8075541;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022f22;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022f71;
    *(undefined *)(iVar1 + 0x10) = 4;
    *(undefined *)(iVar1 + 0x11) = 0;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
  }
  return in_lr;
}

