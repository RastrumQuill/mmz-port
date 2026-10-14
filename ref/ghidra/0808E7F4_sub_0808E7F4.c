// sub_0808E7F4 at 0x0808E7F4 (thumb)

undefined4 sub_0808E7F4(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  sub_08088120();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_080033F0(param_1 + 0x6c,0xc);
  *(undefined4 *)(param_1 + 0x54) = 0x200;
  uVar1 = DAT_02022890 * 0x343fd + 0x269ec3;
  *(uint *)(param_1 + 0x58) = (uVar1 * 2 >> 0x11 & 0xff) + 0x400;
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x4c);
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  *(char *)(param_1 + 0x12) = (char)(uVar1 * 2 >> 0x11);
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar1 & 0x7fffffff;
  *(char *)(param_1 + 0x13) = (char)(uVar1 * 2 >> 0x11);
  *(undefined4 *)(param_1 + 0x78) = 0x1e0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0808E5D8(param_1);
  return in_lr;
}

