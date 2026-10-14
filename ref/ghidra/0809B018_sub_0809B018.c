// sub_0809B018 at 0x0809B018 (thumb)

undefined4 sub_0809B018(int param_1,undefined4 param_2,undefined4 param_3,undefined param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202300c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x50;
    *(undefined4 *)(iVar1 + 0x14) = 0x809b07d;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_020230b0;
    *(undefined *)(iVar1 + 0x1e) = DAT_02023110;
    *(undefined *)(iVar1 + 0x10) = param_4;
    *(undefined *)(iVar1 + 0x11) = 0;
    *(int *)(iVar1 + 0x20) = param_1;
    uVar2 = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar1 + 0x50) = uVar2;
    *(undefined4 *)(iVar1 + 0x54) = param_2;
    *(undefined4 *)(iVar1 + 0x58) = param_3;
  }
  return in_lr;
}

