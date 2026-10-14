// sub_0808BF90 at 0x0808BF90 (thumb)

undefined4 sub_0808BF90(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_08088120(param_1);
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3;
  *(undefined *)(param_1 + 0x13) = 0x80;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0808BF58(param_1);
  return in_lr;
}

