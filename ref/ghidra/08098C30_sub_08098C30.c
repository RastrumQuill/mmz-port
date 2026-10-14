// sub_08098C30 at 0x08098C30 (thumb)

undefined4 sub_08098C30(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  bVar2 = *(byte *)(*(int *)(param_1 + 0x20) + 10) >> 4;
  bVar1 = *(byte *)(param_1 + 0x11);
  uVar5 = (uint)bVar1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_0800DEB4(param_1);
  *(byte *)(param_1 + 0x44) = bVar2 & 1;
  if ((bVar2 & 1) == 0) {
    bVar3 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar3 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar3;
  if (uVar5 == 1) {
    *(byte *)(param_1 + 0x44) = bVar1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
  }
  sub_080033F0(param_1 + 0x6c,(&DAT_082b4f50)[uVar5]);
  if ((bVar2 & 1) != 0) {
    uVar5 = 2 - uVar5;
  }
  uVar4 = DAT_02022890 * 0x343fd + 0x269ec3;
  *(uint *)(param_1 + 0x54) = (uVar5 - 1) * 0x80 + (uVar4 * 2 >> 0x11 & 0x1ff) + -0x100;
  uVar5 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar5 & 0x7fffffff;
  *(uint *)(param_1 + 0x58) = -0x200 - (uVar5 * 2 >> 0x11 & 0x1ff);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_08098BF8(param_1);
  return in_lr;
}

