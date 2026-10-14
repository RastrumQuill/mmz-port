// sub_080902B4 at 0x080902B4 (thumb)

undefined4 sub_080902B4(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  bVar2 = *(byte *)(iVar3 + 10) >> 4;
  bVar1 = *(byte *)(param_1 + 0x11);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_0800DEB4(param_1);
  *(byte *)(param_1 + 0x44) = bVar2 & 1;
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  sub_080033F0(param_1 + 0x6c,(&DAT_082b3893)[bVar1]);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar3 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar3 + 0x50);
  iVar3 = (uint)*(byte *)(param_1 + 0x12) * -0x300 + 0x180;
  *(int *)(param_1 + 0x54) = iVar3;
  iVar3 = iVar3 * ((uint)*(byte *)(param_1 + 0x11) * 0x60 + 0x140);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x54) = iVar3 >> 8;
  uVar4 = *(byte *)(param_1 + 0x11) ^ 1;
  *(uint *)(param_1 + 0x58) = uVar4 * -0x140 + -0x200;
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | (byte)((uVar4 + 2 & 3) << 2);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0808FFA0(param_1);
  return in_lr;
}

