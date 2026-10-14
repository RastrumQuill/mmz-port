// sub_0808D3FC at 0x0808D3FC (thumb)

undefined4 sub_0808D3FC(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_0800DEFC(param_1,*(undefined4 *)(param_1 + 0x20));
  sub_080033F0(param_1 + 0x6c,(&DAT_082b36b2)[*(byte *)(param_1 + 0x10)]);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar2 & 0x7fffffff;
  *(char *)(param_1 + 0x1f) = (char)(uVar2 * 2 >> 0x11);
  *(undefined *)(param_1 + 0x13) = 0;
  *(undefined *)(param_1 + 0x12) = 0;
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(undefined4 *)(param_1 + 0x54) = 0x80;
    *(undefined *)(param_1 + 0x44) = 1;
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    *(undefined4 *)(param_1 + 0x54) = 0xffffff80;
    *(undefined *)(param_1 + 0x44) = 0;
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar1;
  uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar2 & 0x7fffffff;
  *(uint *)(param_1 + 0x54) = 0x200 - (uVar2 * 0x40 >> 0x16);
  *(undefined4 *)(param_1 + 0x58) = 0xfffffec0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0808D234(param_1);
  return in_lr;
}

