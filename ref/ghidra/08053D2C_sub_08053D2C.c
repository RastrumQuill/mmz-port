// sub_08053D2C at 0x08053D2C (thumb)

undefined4 sub_08053D2C(undefined4 param_1,undefined param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022e98);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0xf;
    *(undefined4 *)(iVar1 + 0x14) = 0x8053d79;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022ebe;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022f3f;
    *(undefined *)(iVar1 + 0x10) = param_2;
    *(undefined *)(iVar1 + 0x11) = 0;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
  }
  return in_lr;
}

