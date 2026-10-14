// sub_0808ADA8 at 0x0808ADA8 (thumb)

undefined4 sub_0808ADA8(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_0800DEFC(param_1,*(undefined4 *)(param_1 + 0x20));
  sub_080033F0(param_1 + 0x6c,(&DAT_082b3508)[*(byte *)(param_1 + 0x11)]);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  uVar1 = DAT_02022890 * 0x343fd + 0x269ec3;
  *(byte *)(param_1 + 0x12) = ((byte)(uVar1 * 2 >> 0x11) & 3) + 2;
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  uVar2 = uVar1 & 0x7fffffff;
  *(char *)(param_1 + 0x13) = (char)(uVar1 * 2 >> 0x11);
  if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
    uVar1 = uVar2 * 0x343fd + 0x269ec3;
    *(uint *)(param_1 + 0x54) = (uVar1 * 2 >> 0x11 & 0xff) + 0xc0;
    iVar3 = -0x380;
  }
  else {
    uVar1 = uVar2 * 0x343fd + 0x269ec3;
    *(uint *)(param_1 + 0x54) = (uVar1 * 2 >> 0x11 & 0xff) + 0x80;
    iVar3 = -0x500;
  }
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar1 & 0x7fffffff;
  *(uint *)(param_1 + 0x58) = iVar3 - (uVar1 * 0x80 >> 0x17);
  if (*(byte *)(param_1 + 0x11) < 2) {
    *(int *)(param_1 + 0x54) = -*(int *)(param_1 + 0x54);
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0808AD70(param_1);
  return in_lr;
}

