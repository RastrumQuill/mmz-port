// sub_0808C378 at 0x0808C378 (thumb)

void sub_0808C378(int param_1)

{
  DAT_02004f30 = DAT_02004f30 & 0xc7ff;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 0x10);
  return;
}

