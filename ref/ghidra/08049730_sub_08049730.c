// sub_08049730 at 0x08049730 (thumb)

undefined4 sub_08049730(undefined4 *param_1,undefined param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022e98);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 1;
    *(undefined4 *)(iVar1 + 0x14) = 0x80497d5;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022ea2;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022f31;
    *(undefined *)(iVar1 + 0x10) = param_2;
    *(undefined *)(iVar1 + 0x11) = 0;
    uVar2 = param_1[1];
    *(undefined4 *)(iVar1 + 0x4c) = *param_1;
    *(undefined4 *)(iVar1 + 0x50) = uVar2;
  }
  return in_lr;
}

