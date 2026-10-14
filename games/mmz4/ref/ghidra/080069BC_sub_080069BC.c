// sub_080069BC at 0x080069BC (thumb)

undefined4 sub_080069BC(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  bVar1 = (&DAT_02000a70)[(uint)(param_1 << 0x10) >> 0x13];
  uVar2 = (param_1 << 0x10 & 0x70000U) >> 0x10;
  if (((int)(uint)bVar1 >> uVar2 & 1U) != 0) {
    (&DAT_02000a70)[(uint)(param_1 << 0x10) >> 0x13] = bVar1 & ~(byte)(1 << uVar2);
    DAT_02000aa8 = 1;
  }
  return in_lr;
}

