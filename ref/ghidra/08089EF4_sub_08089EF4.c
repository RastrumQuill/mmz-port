// sub_08089EF4 at 0x08089EF4 (thumb)

undefined4 sub_08089EF4(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar2 = (uint)*(byte *)(*(int *)(param_1 + 0x20) + 10) << 0x18;
  uVar3 = uVar2 >> 0x1c & 1;
  uVar2 = uVar2 >> 0x1d & 1;
  uVar4 = (uint)*(byte *)(param_1 + 0x11);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_0800DEB4(param_1);
  *(char *)(param_1 + 0x44) = (char)uVar3;
  if (uVar3 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x45) = (char)uVar2;
  if (uVar2 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar1;
  sub_080033F0(param_1 + 0x6c,(&DAT_082b3468)[uVar4]);
  if (uVar3 != 0) {
    uVar4 = 2 - uVar4;
  }
  uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
  *(uint *)(param_1 + 0x54) = (uVar4 - 1) * 0x100 + (uVar2 * 2 >> 0x11 & 0x1ff) + -0x100;
  uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar2 & 0x7fffffff;
  *(uint *)(param_1 + 0x58) = -0x200 - (uVar2 * 2 >> 0x11 & 0x1ff);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_08089E84(param_1);
  return in_lr;
}

