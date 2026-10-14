// sub_08038AD8 at 0x08038AD8 (thumb)

byte sub_08038AD8(int param_1)

{
  byte bVar1;
  
  if (*(int *)(param_1 + 0x4c) == *(int *)(DAT_0202286c + 0x4c)) {
    bVar1 = *(byte *)(param_1 + 10) >> 4 & 1;
  }
  else {
    bVar1 = 0;
    if (*(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c)) {
      bVar1 = 1;
    }
  }
  return bVar1;
}

