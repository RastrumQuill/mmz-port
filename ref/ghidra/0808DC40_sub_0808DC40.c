// sub_0808DC40 at 0x0808DC40 (thumb)

undefined4 sub_0808DC40(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_08088120();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,0xd);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  uVar1 = DAT_02022890 * 0x343fd + 0x269ec3;
  *(byte *)(param_1 + 0x12) = ((byte)(uVar1 * 2 >> 0x11) & 7) + 0x3c;
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  iVar2 = *(int *)(param_1 + 0x4c) + ((uVar1 * 2 >> 0x11 & 3) - 2) * 0x100;
  *(int *)(param_1 + 0x4c) = iVar2;
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  *(uint *)(param_1 + 0x58) = (uVar1 * 2 >> 0x11 & 0x3f) + 0xc0;
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar1 & 0x7fffffff;
  if ((uVar1 * 2 >> 0x11 & 1) != 0) {
    uVar1 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar1 & 0x7fffffff;
    sub_0808D8A8(iVar2 + ((uVar1 * 2 >> 0x11 & 3) - 2) * 0x100,*(undefined4 *)(param_1 + 0x50));
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0808D910(param_1);
  return in_lr;
}

