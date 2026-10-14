// sub_080B1DB4 at 0x080B1DB4 (thumb)

undefined8 sub_080B1DB4(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10);
  if (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54)) {
    *(byte *)(param_1 + 10) = bVar1 | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
  }
  else {
    *(byte *)(param_1 + 10) = bVar1 & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  }
  return CONCAT44(in_lr,(uint)((bVar1 >> 4 & 1) != (*(byte *)(param_1 + 10) >> 4 & 1)));
}

