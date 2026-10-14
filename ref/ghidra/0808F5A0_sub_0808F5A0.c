// sub_0808F5A0 at 0x0808F5A0 (thumb)

undefined4 sub_0808F5A0(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_0800DEB4(param_1,*(undefined4 *)(param_1 + 0x20));
  sub_080033F0(param_1 + 0x6c,4);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(undefined *)(param_1 + 0x44) = *(undefined *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0x11) == '\0') {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(undefined *)(param_1 + 0x12) = 0;
  uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
  uVar4 = uVar3 & 0x7fffffff;
  *(uint *)(param_1 + 0x58) = -0x100 - (uVar3 * 2 >> 0x11 & 0xff);
  if (*(char *)(param_1 + 0x11) == '\0') {
    uVar3 = uVar4 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar3 & 0x7fffffff;
    *(uint *)(param_1 + 0x54) = -0x100 - (uVar3 * 2 >> 0x11 & 0xff);
    iVar2 = *(int *)(param_1 + 0x4c) + -0x800;
  }
  else {
    uVar3 = uVar4 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar3 & 0x7fffffff;
    *(uint *)(param_1 + 0x54) = (uVar3 * 2 >> 0x11 & 0xff) + 0x100;
    iVar2 = *(int *)(param_1 + 0x4c) + 0x800;
  }
  *(int *)(param_1 + 0x4c) = iVar2;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0808F404(param_1);
  return in_lr;
}

