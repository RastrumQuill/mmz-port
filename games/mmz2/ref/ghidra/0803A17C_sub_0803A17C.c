// sub_0803A17C at 0x0803A17C (thumb)

undefined4 sub_0803A17C(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_2 + 0xd) == '\x02') {
    uVar2 = ~(uint)(*(byte *)(param_2 + 10) >> 4);
  }
  else {
    uVar2 = (uint)(*(byte *)(param_2 + 10) >> 4);
  }
  uVar2 = uVar2 & 1;
  if (uVar2 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar2;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar2 << 4);
  return in_lr;
}

