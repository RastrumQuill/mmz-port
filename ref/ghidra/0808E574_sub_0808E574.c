// sub_0808E574 at 0x0808E574 (thumb)

undefined4 sub_0808E574(undefined4 param_1,undefined4 param_2,undefined param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202300c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x18;
    *(undefined4 *)(iVar1 + 0x14) = 0x808e5c1;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02023040;
    *(undefined *)(iVar1 + 0x1e) = DAT_020230d8;
    *(undefined *)(iVar1 + 0x10) = param_3;
    *(undefined4 *)(iVar1 + 0x4c) = param_1;
    *(undefined4 *)(iVar1 + 0x50) = param_2;
  }
  return in_lr;
}

