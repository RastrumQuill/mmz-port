// sub_080A6F6C at 0x080A6F6C (thumb)

undefined4 sub_080A6F6C(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (((DAT_02022ad6 & 0x10) == 0) && (iVar1 = sub_08005458(DAT_02023118), iVar1 != 0)) {
    *(undefined *)(iVar1 + 9) = 0x1e;
    *(undefined4 *)(iVar1 + 0x14) = 0x80a6fd5;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_020231ac;
    *(undefined *)(iVar1 + 0x1e) = DAT_0202313e;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined *)(iVar1 + 0x11) = 0;
    uVar2 = param_1[1];
    *(undefined4 *)(iVar1 + 0x4c) = *param_1;
    *(undefined4 *)(iVar1 + 0x50) = uVar2;
    DAT_02022ad6 = DAT_02022ad6 | 0x10;
  }
  return in_lr;
}

