// sub_0808AA90 at 0x0808AA90 (thumb)

undefined4 sub_0808AA90(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0xd) = 0xb;
  }
  return in_lr;
}

