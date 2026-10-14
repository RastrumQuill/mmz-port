// sub_0808BD38 at 0x0808BD38 (thumb)

undefined4 sub_0808BD38(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(*(int *)(param_1 + 0x20) + 10) >> 4;
  uVar4 = (uint)*(byte *)(param_1 + 0x11);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_0800DEB4(param_1);
  *(byte *)(param_1 + 0x44) = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  sub_080033F0(param_1 + 0x6c,(&DAT_082b35b0)[uVar4]);
  if ((bVar1 & 1) != 0) {
    uVar4 = 2 - uVar4;
  }
  uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
  *(uint *)(param_1 + 0x54) = (uVar4 - 1) * 0x80 + (uVar3 * 2 >> 0x11 & 0x1ff) + -0x100;
  uVar4 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar4 & 0x7fffffff;
  *(uint *)(param_1 + 0x58) = -0x200 - (uVar4 * 2 >> 0x11 & 0x1ff);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0808BB7C(param_1);
  return in_lr;
}

