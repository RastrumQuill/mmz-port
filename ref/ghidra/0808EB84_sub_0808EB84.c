// sub_0808EB84 at 0x0808EB84 (thumb)

undefined4 sub_0808EB84(undefined4 param_1,undefined4 param_2,undefined param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202300c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x19;
    *(undefined4 *)(iVar1 + 0x14) = 0x808ebd5;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02023042;
    *(undefined *)(iVar1 + 0x1e) = DAT_020230d9;
    *(undefined *)(iVar1 + 0x10) = param_3;
    *(undefined *)(iVar1 + 0x11) = param_3;
    *(undefined4 *)(iVar1 + 0x4c) = param_1;
    *(undefined4 *)(iVar1 + 0x50) = param_2;
  }
  return in_lr;
}

