// sub_0808D448 at 0x0808D448 (thumb)

undefined4 sub_0808D448(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_08005784(param_1 + 0x74,&DAT_0885c4c0);
  iVar1 = sub_0802B3CC(*(undefined4 *)(param_1 + 0xbc));
  if (iVar1 != 0) {
    sub_08005784(param_1 + 0x74,&DAT_0885c400);
    *(undefined4 *)(param_1 + 0xbc) = 0;
    if (*(char *)(param_1 + 0xc1) == '\x01') {
      sub_0808D91C(param_1);
    }
    else {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

