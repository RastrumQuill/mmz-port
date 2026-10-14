// sub_080C6BEC at 0x080C6BEC (thumb)

undefined4 sub_080C6BEC(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(iVar3 + 10) >> 4;
  uVar6 = bVar1 & 1;
  uVar5 = (uint)*(byte *)(param_1 + 0x11);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_0801749C(param_1);
  if (uVar5 == 1) {
    uVar6 = uVar6 ^ 1;
  }
  if (uVar6 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(char *)(param_1 + 0x4c) = (char)uVar6;
  pbVar4 = (byte *)(param_1 + 0x4a);
  *pbVar4 = *pbVar4 & 0xef | (byte)(uVar6 << 4);
  bVar2 = *(byte *)(iVar3 + 10) >> 5;
  uVar6 = bVar2 & 1;
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(char *)(param_1 + 0x4d) = (char)uVar6;
  *pbVar4 = *pbVar4 & 0xdf | (byte)(uVar6 << 5);
  sub_08017700(param_1,*(undefined2 *)(&DAT_0836c04c + uVar5 * 2));
  if ((bVar1 & 1) != 0) {
    uVar5 = 2 - uVar5;
  }
  uVar6 = DAT_0202f608 * 0x343fd + 0x269ec3;
  *(uint *)(param_1 + 0x5c) = (uVar5 - 1) * 0x100 + (uVar6 * 2 >> 0x11 & 0x1ff) + -0x100;
  uVar6 = (uVar6 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar6 & 0x7fffffff;
  *(uint *)(param_1 + 0x60) = -0x200 - (uVar6 * 2 >> 0x11 & 0x1ff);
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 4);
  sub_080C69BC(param_1);
  return in_lr;
}

