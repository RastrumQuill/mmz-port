// sub_080607B8 at 0x080607B8 (thumb)

undefined4 sub_080607B8(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  bVar1 = sub_08060800();
  *(byte *)(param_1 + 0x4c) = bVar1 & 1;
  uVar2 = sub_08060800(param_1);
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((uVar2 & 1) << 4);
  if ((uVar2 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  return in_lr;
}

