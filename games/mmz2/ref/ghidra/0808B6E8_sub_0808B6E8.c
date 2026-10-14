// sub_0808B6E8 at 0x0808B6E8 (thumb)

void sub_0808B6E8(int param_1)

{
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0xfffffe80;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  return;
}

