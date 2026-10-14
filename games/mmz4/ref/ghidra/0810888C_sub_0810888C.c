// sub_0810888C at 0x0810888C (thumb)

undefined4 sub_0810888C(uint param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  pbVar4 = (byte *)(DAT_0202eda8 + ((param_1 << 0x18) >> 0x19));
  bVar1 = *pbVar4;
  iVar3 = (param_1 & 1) << 2;
  uVar2 = (int)(uint)bVar1 >> iVar3 & 0xf;
  if (uVar2 < 9) {
    *pbVar4 = (byte)(uVar2 + 1 << iVar3) | bVar1 & ~(byte)(0xf << iVar3);
  }
  return in_lr;
}

