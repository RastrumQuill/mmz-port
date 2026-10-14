// sub_080BD990 at 0x080BD990 (thumb)

undefined4 sub_080BD990(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 in_lr;
  
  bVar2 = *(byte *)(*(int *)(param_1 + 0x28) + 10) >> 4;
  bVar1 = *(byte *)(param_1 + 0x11);
  uVar6 = (uint)bVar1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_08012580(param_1);
  if ((bVar2 & 1) == 0) {
    bVar3 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar3 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar3;
  *(byte *)(param_1 + 0x4c) = (byte)(bVar2 & 1);
  pbVar5 = (byte *)(param_1 + 0x4a);
  *pbVar5 = *pbVar5 & 0xef | (byte)((bVar2 & 1) << 4);
  if (uVar6 == 1) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(byte *)(param_1 + 0x4c) = bVar1;
    *pbVar5 = *pbVar5 & 0xef | 0x10;
  }
  sub_080127E4(param_1,*(undefined2 *)(&DAT_083484dc + uVar6 * 2));
  if ((bVar2 & 1) != 0) {
    uVar6 = 2 - uVar6;
  }
  uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
  *(uint *)(param_1 + 0x5c) = (uVar6 - 1) * 0x80 + (uVar4 * 2 >> 0x11 & 0x1ff) + -0x100;
  uVar6 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar6 & 0x7fffffff;
  *(uint *)(param_1 + 0x60) = -0x200 - (uVar6 * 2 >> 0x11 & 0x1ff);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080BD958(param_1);
  return in_lr;
}

