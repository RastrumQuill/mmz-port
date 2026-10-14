// sub_080833BC at 0x080833BC (thumb)

undefined4 sub_080833BC(int param_1,undefined param_2,undefined param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022f74);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x1f;
    *(undefined4 *)(iVar1 + 0x14) = 0x8083415;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022fbe;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022fff;
    *(undefined *)(iVar1 + 0x10) = param_2;
    *(undefined *)(iVar1 + 0x11) = param_3;
    *(int *)(iVar1 + 0x20) = param_1;
    uVar2 = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar1 + 0x50) = uVar2;
  }
  return in_lr;
}

