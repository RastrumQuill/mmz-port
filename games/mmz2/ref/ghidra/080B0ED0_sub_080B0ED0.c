// sub_080B0ED0 at 0x080B0ED0 (thumb)

undefined4 sub_080B0ED0(int param_1)

{
  byte bVar1;
  short sVar2;
  byte bVar3;
  uint uVar4;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  sub_0801260C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_080127E4(param_1,0x609);
  *(undefined *)(param_1 + 0x25) = 0x1a;
  bVar3 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar3 | 2;
  bVar1 = *(byte *)(*(int *)(param_1 + 0x28) + 10) >> 4;
  uVar4 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar3 = bVar3 & 0xef | 2;
  }
  else {
    bVar3 = bVar3 | 0x12;
  }
  *(byte *)(param_1 + 10) = bVar3;
  *(char *)(param_1 + 0x4c) = (char)uVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
  sVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (sVar2 == 0) {
    sub_080B0F94(param_1);
  }
  else {
    sub_080B1228(param_1,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
    sub_080B0FE4(param_1);
  }
  return in_lr;
}

