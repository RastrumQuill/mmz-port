// sub_080BB3F8 at 0x080BB3F8 (thumb)

undefined4 sub_080BB3F8(int param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  uVar2 = (uint)*(byte *)(*(int *)(param_1 + 0x28) + 10) << 0x18;
  uVar5 = uVar2 >> 0x1c & 1;
  uVar4 = uVar2 >> 0x1d & 1;
  uVar2 = (uint)*(byte *)(param_1 + 0x11);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_08012580(param_1);
  if (uVar5 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar5;
  pbVar3 = (byte *)(param_1 + 0x4a);
  *pbVar3 = *pbVar3 & 0xef | (byte)(uVar5 << 4);
  if (uVar4 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4d) = (char)uVar4;
  *pbVar3 = *pbVar3 & 0xdf | (byte)(uVar4 << 5);
  sub_080127E4(param_1,*(undefined2 *)(&DAT_083472bc + uVar2 * 2));
  if (uVar5 != 0) {
    uVar2 = 2 - uVar2;
  }
  uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
  *(uint *)(param_1 + 0x5c) = (uVar2 - 1) * 0x100 + (uVar4 * 2 >> 0x11 & 0x1ff) + -0x100;
  uVar2 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar2 & 0x7fffffff;
  *(uint *)(param_1 + 0x60) = -0x200 - (uVar2 * 2 >> 0x11 & 0x1ff);
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080BB388(param_1);
  return in_lr;
}

