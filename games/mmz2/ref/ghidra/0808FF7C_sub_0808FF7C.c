// sub_0808FF7C at 0x0808FF7C (thumb)

undefined4 sub_0808FF7C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_0808FFD0(param_1);
  }
  else {
    sub_080900F8(param_1);
  }
  return in_lr;
}

