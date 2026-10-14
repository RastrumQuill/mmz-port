// sub_0808AB54 at 0x0808AB54 (thumb)

undefined4 sub_0808AB54(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0xd) = 1;
  }
  return in_lr;
}

