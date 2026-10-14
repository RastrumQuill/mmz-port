// sub_0808D1BC at 0x0808D1BC (thumb)

undefined4 sub_0808D1BC(int param_1,undefined4 *param_2,undefined param_3,undefined param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202300c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x16;
    *(undefined4 *)(iVar1 + 0x14) = 0x808d21d;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_0202303c;
    *(undefined *)(iVar1 + 0x1e) = DAT_020230d6;
    *(undefined *)(iVar1 + 0x10) = param_3;
    *(undefined *)(iVar1 + 0x11) = param_4;
    *(int *)(iVar1 + 0x20) = param_1;
    uVar2 = param_2[1];
    *(undefined4 *)(iVar1 + 0x4c) = *param_2;
    *(undefined4 *)(iVar1 + 0x50) = uVar2;
    *(undefined *)(iVar1 + 0x74) = *(undefined *)(param_1 + 0x1f);
  }
  return in_lr;
}

