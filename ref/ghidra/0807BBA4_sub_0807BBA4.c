// sub_0807BBA4 at 0x0807BBA4 (thumb)

undefined4 sub_0807BBA4(int param_1,undefined param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022f74);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x13;
    *(undefined4 *)(iVar1 + 0x14) = 0x807bed5;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022fa6;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022ff3;
    *(undefined *)(iVar1 + 0x10) = 1;
    *(undefined *)(iVar1 + 0x11) = param_2;
    *(int *)(iVar1 + 0x20) = param_1;
    uVar2 = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar1 + 0x50) = uVar2;
  }
  return in_lr;
}

