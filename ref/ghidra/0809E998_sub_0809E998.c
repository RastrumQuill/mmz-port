// sub_0809E998 at 0x0809E998 (thumb)

undefined4 sub_0809E998(undefined4 param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02023118);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 6;
    *(undefined4 *)(iVar1 + 0x14) = 0x809e9e5;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_0202317c;
    *(undefined *)(iVar1 + 0x1e) = DAT_02023126;
    *(undefined *)(iVar1 + 0x10) = 2;
    *(undefined *)(iVar1 + 0x11) = 0;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
  }
  return in_lr;
}

