// sub_0808B9EC at 0x0808B9EC (thumb)

void sub_0808B9EC(int param_1,byte param_2)

{
  *(uint *)(param_1 + 0x5c) = ((uint)param_2 * 2 + -1) * 0x140;
  *(byte *)(param_1 + 0xb8) = param_2;
  return;
}

