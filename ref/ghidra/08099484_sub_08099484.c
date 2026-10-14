// sub_08099484 at 0x08099484 (thumb)

undefined4
sub_08099484(int param_1,undefined4 param_2,undefined4 param_3,undefined param_4,undefined param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202300c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x4b;
    *(undefined4 *)(iVar1 + 0x14) = 0x80994f9;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_020230a6;
    *(undefined *)(iVar1 + 0x1e) = DAT_0202310b;
    *(undefined *)(iVar1 + 0x10) = param_4;
    *(undefined *)(iVar1 + 0x11) = param_5;
    *(int *)(iVar1 + 0x20) = param_1;
    uVar2 = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar1 + 0x50) = uVar2;
    *(undefined4 *)(iVar1 + 0x54) = param_2;
    *(undefined4 *)(iVar1 + 0x58) = param_3;
  }
  return in_lr;
}

