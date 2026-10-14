// sub_0808DF4C at 0x0808DF4C (thumb)

undefined4 sub_0808DF4C(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  sub_08088120();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,0x11);
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
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
    iVar3 = -0x180 - (uVar2 * 2 >> 0x11 & 0x7f);
  }
  else {
    uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
    iVar3 = (uVar2 * 2 >> 0x11 & 0x7f) + 0x180;
  }
  DAT_02022890 = uVar2 & 0x7fffffff;
  *(int *)(param_1 + 0x54) = iVar3;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0808D910(param_1);
  return in_lr;
}

