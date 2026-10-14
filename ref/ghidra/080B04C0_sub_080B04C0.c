// sub_080B04C0 at 0x080B04C0 (thumb)

undefined4 sub_080B04C0(undefined4 param_1,undefined4 param_2,undefined param_3,undefined param_4)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02023118);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x3c;
    *(undefined4 *)(iVar1 + 0x14) = 0x80b0519;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_020231e8;
    *(undefined *)(iVar1 + 0x1e) = DAT_0202315c;
    *(undefined *)(iVar1 + 0x10) = param_3;
    *(undefined *)(iVar1 + 0x11) = param_4;
    *(undefined4 *)(iVar1 + 0x4c) = param_1;
    *(undefined4 *)(iVar1 + 0x50) = param_2;
  }
  return in_lr;
}

