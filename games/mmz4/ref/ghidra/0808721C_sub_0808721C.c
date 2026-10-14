// sub_0808721C at 0x0808721C (thumb)

undefined4 sub_0808721C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0x2c) != 0) && (iVar1 = sub_0802B3CC(), iVar1 != 0)) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return in_lr;
}

