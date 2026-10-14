// sub_080A509C at 0x080A509C (thumb)

undefined4 sub_080A509C(undefined4 param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02023118);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x1a;
    *(undefined4 *)(iVar1 + 0x14) = 0x80a50e5;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_020231a4;
    *(undefined *)(iVar1 + 0x1e) = DAT_0202313a;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined *)(iVar1 + 0x11) = 0;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
  }
  return in_lr;
}

