// sub_0808AB6C at 0x0808AB6C (thumb)

void sub_0808AB6C(int param_1)

{
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0xfffffe80;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
  *(undefined *)(param_1 + 0x4c) = 1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
  return;
}

