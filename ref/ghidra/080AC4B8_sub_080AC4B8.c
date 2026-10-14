// sub_080AC4B8 at 0x080AC4B8 (thumb)

undefined4 sub_080AC4B8(void)

{
  if ((*(uint *)(DAT_02022b20 + 0x14) & 4) != 0) {
    if ((*(byte *)(DAT_0202286c + 0x188) & 4) == 0) {
      return 0;
    }
    if ((*(byte *)(DAT_0202286c + 0x188) & 8) == 0) {
      return 3;
    }
  }
  return 6;
}

