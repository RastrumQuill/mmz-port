// sub_080E1DB8 at 0x080E1DB8 (thumb)

undefined4 sub_080E1DB8(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0xb4);
  DAT_0202f5d0 = 0;
  pbVar2 = (byte *)(DAT_0203063c + (uint)*(byte *)(iVar3 + 0x121));
  *pbVar2 = *pbVar2 | 2;
  *(short *)(iVar3 + 0xb8) = *(short *)(iVar3 + 0xb8) + 1;
  bVar1 = *(byte *)(DAT_02030160 + 0x4c);
  if (bVar1 < 99) {
    *(byte *)(DAT_02030160 + 0x4c) = bVar1 + 1;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e24c)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

