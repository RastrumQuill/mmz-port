// sub_08064D10 at 0x08064D10 (thumb)

undefined4 sub_08064D10(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022e98);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x29;
    *(undefined4 *)(iVar1 + 0x14) = 0x8064d6d;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022ef2;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022f59;
    *(undefined *)(iVar1 + 0x10) = 5;
    *(undefined *)(iVar1 + 0x11) = 0;
    uVar2 = param_1[1];
    *(undefined4 *)(iVar1 + 0x4c) = *param_1;
    *(undefined4 *)(iVar1 + 0x50) = uVar2;
    *(undefined4 *)(iVar1 + 0x20) = param_2;
  }
  return in_lr;
}

