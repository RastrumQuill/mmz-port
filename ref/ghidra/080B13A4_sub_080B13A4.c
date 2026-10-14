// sub_080B13A4 at 0x080B13A4 (thumb)

undefined4 sub_080B13A4(undefined4 param_1,undefined4 param_2,undefined param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02023118);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x3e;
    *(undefined4 *)(iVar1 + 0x14) = 0x80b13fd;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_020231ec;
    *(undefined *)(iVar1 + 0x1e) = DAT_0202315e;
    *(undefined *)(iVar1 + 0x10) = param_3;
    *(undefined *)(iVar1 + 0x11) = 0;
    *(undefined4 *)(iVar1 + 0x4c) = param_1;
    *(undefined4 *)(iVar1 + 0x50) = param_2;
  }
  return in_lr;
}

