// sub_080AD338 at 0x080AD338 (thumb)

undefined4 sub_080AD338(int param_1)

{
  byte bVar1;
  undefined uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  sub_08017528();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08017700(param_1,0x6a05);
  sub_080177F4(param_1);
  *(undefined *)(param_1 + 0x24) = 0;
  if (*(byte *)(param_1 + 0x11) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  uVar3 = *(byte *)(param_1 + 0x11) & 1;
  *(char *)(param_1 + 0x4c) = (char)uVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined *)(param_1 + 0x13) = 0;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    uVar2 = 4;
  }
  else {
    uVar2 = 0xfc;
  }
  *(undefined *)(param_1 + 0x13) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 4);
  sub_080AD0E0(param_1);
  return in_lr;
}

