// sub_0808A81C at 0x0808A81C (thumb)

undefined4 sub_0808A81C(undefined4 param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202300c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 10;
    *(undefined4 *)(iVar1 + 0x14) = 0x808a865;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02023024;
    *(undefined *)(iVar1 + 0x1e) = DAT_020230ca;
    *(undefined *)(iVar1 + 0x10) = 2;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
  }
  return in_lr;
}

