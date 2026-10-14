// sub_08045474 at 0x08045474 (thumb)

undefined4 sub_08045474(int param_1,undefined param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022e94);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x17;
    *(undefined4 *)(iVar1 + 0x14) = 0x80454cd;
    *(undefined *)(iVar1 + 0x10) = param_2;
    *(undefined *)(iVar1 + 0x11) = 0;
    *(int *)(iVar1 + 0x20) = param_1;
    uVar2 = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar1 + 0x50) = uVar2;
    *(undefined4 *)(iVar1 + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
    *(undefined4 *)(iVar1 + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  }
  return in_lr;
}

