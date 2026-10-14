// sub_080BD758 at 0x080BD758 (thumb)

undefined4 sub_080BD758(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  undefined4 local_48 [4];
  undefined4 uStack_38;
  undefined4 uStack_34;
  byte abStack_30 [8];
  byte abStack_28 [8];
  
  local_48[0] = 0x8901;
  local_48[1] = 0x8903;
  local_48[2] = 0x8903;
  local_48[3] = 0x8901;
  uStack_38 = 0x8902;
  uStack_34 = 0x8902;
  sub_08128B5C(abStack_30,&DAT_081299a4,6);
  sub_08128B5C(abStack_28,&DAT_081299aa,6);
  bVar1 = *(byte *)(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  bVar2 = (&DAT_088617a0)[bVar1];
  iVar3 = *(short *)((int)&DAT_08128c10 + ((bVar2 + 0x40) * 0x1000000 >> 0x17)) * 0x380;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar3 >> 8;
  iVar3 = (short)(&DAT_08128c10)[bVar2] * 0x380;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar3 >> 8;
  sub_0801CC9C(param_1);
  uVar4 = (uint)abStack_30[bVar1];
  if (uVar4 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  uVar4 = uVar4 & 1;
  *(char *)(param_1 + 0x4c) = (char)uVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
  sub_0801CF00(param_1,*(undefined2 *)(local_48 + bVar1));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&UNK_088616e0 + (uint)abStack_28[bVar1] * 0x18,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  sub_080BDA58(param_1);
  return in_lr;
}

