// sub_0805567C at 0x0805567C (thumb)

undefined4 sub_0805567C(undefined4 param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022e98);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x14;
    *(undefined4 *)(iVar1 + 0x14) = 0x80556c5;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022ec8;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022f44;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined *)(iVar1 + 0x11) = 0;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
  }
  return in_lr;
}

