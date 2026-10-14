// sub_08090C28 at 0x08090C28 (thumb)

undefined4 sub_08090C28(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x20);
  uVar4 = (uint)*(byte *)(iVar6 + 10) << 0x18;
  uVar5 = uVar4 >> 0x1c & 1;
  uVar4 = uVar4 >> 0x1d & 1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_0800DEB4(param_1,iVar6);
  sub_080033F0(param_1 + 0x6c,6);
  *(char *)(param_1 + 0x44) = (char)uVar5;
  if (uVar5 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(char *)(param_1 + 0x45) = (char)uVar4;
  if (uVar4 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar6 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar6 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar6 + 0x54);
  bVar1 = (byte)(*(char *)(iVar6 + 0xf) - 1U) < 2;
  *(bool *)(param_1 + 0x13) = bVar1;
  uVar3 = 0;
  if (bVar1) {
    uVar3 = *(undefined4 *)(iVar6 + 0x58);
  }
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  *(undefined *)(param_1 + 0x12) = 0x16;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_08090BB8(param_1);
  return in_lr;
}

