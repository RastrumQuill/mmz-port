// sub_080D65E8 at 0x080D65E8 (thumb)

undefined4 sub_080D65E8(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  uVar4 = (uint)*(byte *)(param_1 + 0x11);
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,*(undefined2 *)(&DAT_08864a1c + uVar4 * 2));
  sub_0801CFF0(param_1);
  bVar1 = *(byte *)(iVar3 + 10) >> 4;
  uVar2 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar2;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar2 << 4);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    uVar4 = 2 - uVar4;
  }
  uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  *(uint *)(param_1 + 0x5c) = (uVar4 - 1) * 0x80 + (uVar2 * 2 >> 0x11 & 0x1ff) + -0x100;
  uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar2 & 0x7fffffff;
  *(uint *)(param_1 + 0x60) = -0x200 - (uVar2 * 2 >> 0x11 & 0x1ff);
  *(undefined *)(param_1 + 0x12) = *(undefined *)(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  sub_080D6508(param_1);
  return in_lr;
}

