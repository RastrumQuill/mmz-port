// sub_0808BBEC at 0x0808BBEC (thumb)

undefined4 sub_0808BBEC(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  bVar1 = *(byte *)(iVar3 + 10) >> 4;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_0800DEB4(param_1,iVar3);
  sub_080033F0(param_1 + 0x6c,6);
  *(byte *)(param_1 + 0x44) = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar3 + 0x4c);
  *(int *)(param_1 + 0x50) = *(int *)(iVar3 + 0x50) + -0x1400;
  uVar2 = 0x180;
  *(undefined4 *)(param_1 + 0x54) = 0x180;
  if (0 < *(int *)(iVar3 + 0xc0)) {
    uVar2 = 0xfffffe80;
  }
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  *(undefined4 *)(param_1 + 0x58) = 0xfffffd00;
  *(undefined *)(param_1 + 0x12) = 0x18;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0808BB7C(param_1);
  return in_lr;
}

