// sub_080B4F40 at 0x080B4F40 (thumb)

undefined4 sub_080B4F40(int param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = (param_2 << 0x18) >> 0x1b;
  pbVar2 = (byte *)(param_1 + 0x1ae + uVar3);
  bVar1 = (byte)(1 << (param_2 & 7));
  *pbVar2 = *pbVar2 & ~bVar1;
  if ((&DAT_082b6ea5)[(param_2 & 0xff) * 0xc] == '\0') {
    pbVar2 = (byte *)(param_1 + 0x1b8 + uVar3);
    *pbVar2 = bVar1 | *pbVar2;
  }
  return in_lr;
}

