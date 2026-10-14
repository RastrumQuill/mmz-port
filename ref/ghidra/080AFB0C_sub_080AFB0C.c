// sub_080AFB0C at 0x080AFB0C (thumb)

undefined4 sub_080AFB0C(undefined4 *param_1,undefined param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02023118);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x39;
    *(undefined4 *)(iVar1 + 0x14) = 0x80afb65;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_020231e2;
    *(undefined *)(iVar1 + 0x1e) = DAT_02023159;
    *(undefined *)(iVar1 + 0x10) = param_2;
    *(undefined *)(iVar1 + 0x11) = 0;
    uVar2 = param_1[1];
    *(undefined4 *)(iVar1 + 0x4c) = *param_1;
    *(undefined4 *)(iVar1 + 0x50) = uVar2;
  }
  return in_lr;
}

