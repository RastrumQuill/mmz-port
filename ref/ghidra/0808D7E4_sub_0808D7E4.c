// sub_0808D7E4 at 0x0808D7E4 (thumb)

undefined4 sub_0808D7E4(undefined4 *param_1,undefined param_2,undefined param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202300c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x17;
    *(undefined4 *)(iVar1 + 0x14) = 0x808d8f9;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_0202303e;
    *(undefined *)(iVar1 + 0x1e) = DAT_020230d7;
    *(undefined *)(iVar1 + 0x10) = 4;
    *(undefined *)(iVar1 + 0x11) = param_2;
    *(undefined *)(iVar1 + 0x78) = param_3;
    uVar2 = param_1[1];
    *(undefined4 *)(iVar1 + 0x4c) = *param_1;
    *(undefined4 *)(iVar1 + 0x50) = uVar2;
  }
  return in_lr;
}

