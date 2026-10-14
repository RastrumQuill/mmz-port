// sub_080CBC4C at 0x080CBC4C (thumb)

undefined4 sub_080CBC4C(int param_1,undefined param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005500(DAT_0202ed94);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 8;
    *(undefined *)(iVar1 + 9) = 0x2a;
    *(undefined4 *)(iVar1 + 0x14) = 0x80cbca9;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(int *)(iVar1 + 0x28) = param_1;
    uVar2 = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(iVar1 + 0x58) = uVar2;
    *(undefined *)(iVar1 + 0x10) = 4;
    *(undefined *)(iVar1 + 0x11) = param_2;
    *(undefined4 *)(iVar1 + 100) = param_3;
  }
  return in_lr;
}

