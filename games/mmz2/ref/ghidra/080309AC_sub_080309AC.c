// sub_080309AC at 0x080309AC (thumb)

undefined4 sub_080309AC(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 1;
  *(undefined *)(param_1 + 0x2b7) = 5;
  sub_0801E9FC(param_1,0x61);
  bVar1 = *(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195));
  if ((bVar1 & 0xc) != 0) {
    *(byte *)(param_1 + 0x4c) = bVar1 >> 3 & 1;
    bVar1 = *(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195)) >> 3;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar1 & 1) << 4);
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
  }
  return in_lr;
}

