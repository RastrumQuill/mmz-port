// sub_0803A5F4 at 0x0803A5F4 (thumb)

undefined4 sub_0803A5F4(undefined4 param_1,undefined param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022e94);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x10;
    *(undefined4 *)(iVar1 + 0x14) = 0x803a62d;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined *)(iVar1 + 0x11) = param_2;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
  }
  return in_lr;
}

