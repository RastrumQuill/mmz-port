// sub_0808C330 at 0x0808C330 (thumb)

void sub_0808C330(int param_1)

{
  *(int *)(*(int *)(param_1 + 0x2c) + 0xb4) =
       *(int *)(DAT_0202e130 + 0x54) - *(int *)(*(int *)(param_1 + 0x2c) + 0x54);
  return;
}

