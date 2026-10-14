// sub_0808AB10 at 0x0808AB10 (thumb)

undefined4 sub_0808AB10(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x10) == '\0') && (*(char *)(param_1 + 0xc3) == '\x01')) {
    DAT_0202f4ac._0_1_ = (char)DAT_0202f4ac + -1;
  }
  sub_080635F4(param_1);
  return in_lr;
}

