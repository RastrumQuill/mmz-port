// sub_0808F394 at 0x0808F394 (thumb)

undefined4 sub_0808F394(undefined4 param_1,undefined4 *param_2,undefined param_3,undefined param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202300c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x1b;
    *(undefined4 *)(iVar1 + 0x14) = 0x808f3ed;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02023046;
    *(undefined *)(iVar1 + 0x1e) = DAT_020230db;
    *(undefined *)(iVar1 + 0x10) = param_4;
    *(undefined *)(iVar1 + 0x11) = param_3;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
    uVar2 = param_2[1];
    *(undefined4 *)(iVar1 + 0x4c) = *param_2;
    *(undefined4 *)(iVar1 + 0x50) = uVar2;
  }
  return in_lr;
}

