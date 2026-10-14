// sub_0803014C at 0x0803014C (thumb)

undefined4 sub_0803014C(int param_1,undefined param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022e94);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 8;
    *(undefined4 *)(iVar1 + 0x14) = 0x8030195;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined *)(iVar1 + 0x11) = 1;
    *(int *)(iVar1 + 0x20) = param_1;
    uVar2 = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar1 + 0x50) = uVar2;
    *(undefined *)(iVar1 + 0xca) = param_2;
  }
  return in_lr;
}

