// sub_0806F318 at 0x0806F318 (thumb)

undefined4 sub_0806F318(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10) >> 4;
  uVar2 = bVar1 & 1;
  sub_0801CDBC();
  sub_0801CEEC(param_1);
  *(char *)(param_1 + 0x4c) = (char)uVar2;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar2 << 4);
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(undefined2 *)(param_1 + 0x50) = 0xea;
  *(undefined2 *)(param_1 + 0x52) = 0xea;
  return in_lr;
}

