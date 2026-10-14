// sub_0808FFB4 at 0x0808FFB4 (thumb)

undefined4 sub_0808FFB4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080903F4(param_1);
  }
  else {
    sub_08090460(param_1);
  }
  return in_lr;
}

