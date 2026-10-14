// sub_0809046C at 0x0809046C (thumb)

undefined4 sub_0809046C(int param_1,int param_2,int param_3,undefined param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202300c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x1f;
    *(undefined4 *)(iVar1 + 0x14) = 0x80904d1;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_0202304e;
    *(undefined *)(iVar1 + 0x1e) = DAT_020230df;
    *(undefined *)(iVar1 + 0x10) = 2;
    *(undefined *)(iVar1 + 0x11) = param_4;
    *(int *)(iVar1 + 0x20) = param_1;
    uVar2 = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar1 + 0x50) = uVar2;
    *(int *)(iVar1 + 0x4c) = *(int *)(iVar1 + 0x4c) + param_2;
    *(int *)(iVar1 + 0x50) = *(int *)(iVar1 + 0x50) + param_3;
  }
  return in_lr;
}

