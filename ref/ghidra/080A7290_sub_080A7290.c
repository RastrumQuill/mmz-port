// sub_080A7290 at 0x080A7290 (thumb)

undefined4 sub_080A7290(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (((DAT_02022ad6 & 0x10) != 0) && (iVar1 = sub_08005458(DAT_02023118), iVar1 != 0)) {
    *(undefined *)(iVar1 + 9) = 0x1f;
    *(undefined4 *)(iVar1 + 0x14) = 0x80a72f1;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_020231ae;
    *(undefined *)(iVar1 + 0x1e) = DAT_0202313f;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined *)(iVar1 + 0x11) = 0;
    uVar2 = param_1[1];
    *(undefined4 *)(iVar1 + 0x4c) = *param_1;
    *(undefined4 *)(iVar1 + 0x50) = uVar2;
  }
  return in_lr;
}

