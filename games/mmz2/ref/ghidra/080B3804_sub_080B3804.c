// sub_080B3804 at 0x080B3804 (thumb)

undefined4 sub_080B3804(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(*(int *)(param_1 + 0x28) + 10) >> 4;
  uVar3 = bVar1 & 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_08012580(param_1);
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
  sub_080127E4(param_1,0x1801);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined *)(param_1 + 0x12) = 0x10;
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    uVar2 = 0xfffffdc0;
  }
  else {
    *(uint *)(param_1 + 0x5c) = ((uint)*(byte *)(param_1 + 0x11) * -2 + 1) * 0x280;
    uVar2 = 0xfffffbc0;
  }
  *(undefined4 *)(param_1 + 0x60) = uVar2;
  sub_080B38B0(param_1);
  return in_lr;
}

