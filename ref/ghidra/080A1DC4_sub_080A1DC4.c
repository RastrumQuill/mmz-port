// sub_080A1DC4 at 0x080A1DC4 (thumb)

undefined4 sub_080A1DC4(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02023118);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x11;
    *(undefined4 *)(iVar1 + 0x14) = 0x80a1e15;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02023192;
    *(undefined *)(iVar1 + 0x1e) = DAT_02023131;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined *)(iVar1 + 0x11) = 0;
    uVar2 = param_1[1];
    *(undefined4 *)(iVar1 + 0x4c) = *param_1;
    *(undefined4 *)(iVar1 + 0x50) = uVar2;
  }
  return in_lr;
}

