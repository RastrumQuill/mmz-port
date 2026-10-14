// sub_0808B758 at 0x0808B758 (thumb)

undefined4 sub_0808B758(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202300c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0xe;
    *(undefined4 *)(iVar1 + 0x14) = 0x808b7a9;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_0202302c;
    *(undefined *)(iVar1 + 0x1e) = DAT_020230ce;
    *(undefined *)(iVar1 + 0x10) = 2;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
    *(undefined4 *)(iVar1 + 0x4c) = *param_2;
    *(undefined4 *)(iVar1 + 0x50) = param_2[1];
  }
  return in_lr;
}

