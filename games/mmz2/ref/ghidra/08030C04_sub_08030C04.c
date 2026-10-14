// sub_08030C04 at 0x08030C04 (thumb)

undefined4 sub_08030C04(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  sub_080EF118(param_1,*(undefined4 *)(&DAT_0833441c + (uint)*(byte *)(param_1 + 0x179) * 4));
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

