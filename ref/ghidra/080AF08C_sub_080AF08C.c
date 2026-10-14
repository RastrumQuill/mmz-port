// sub_080AF08C at 0x080AF08C (thumb)

undefined4 sub_080AF08C(undefined4 *param_1,undefined param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02023118);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x36;
    *(undefined4 *)(iVar1 + 0x14) = 0x80af0e5;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_020231dc;
    *(undefined *)(iVar1 + 0x1e) = DAT_02023156;
    *(undefined *)(iVar1 + 0x10) = param_2;
    *(undefined *)(iVar1 + 0x11) = 0;
    uVar2 = param_1[1];
    *(undefined4 *)(iVar1 + 0x4c) = *param_1;
    *(undefined4 *)(iVar1 + 0x50) = uVar2;
  }
  return in_lr;
}

