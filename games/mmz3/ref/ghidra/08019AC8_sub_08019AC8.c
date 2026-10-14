// sub_08019AC8 at 0x08019AC8 (thumb)

undefined4 sub_08019AC8(uint param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (((param_1 & 0xffff) < 0x41) &&
     (uVar1 = (uint)DAT_0203016e + (param_1 & 0xffff), uVar1 < 10000)) {
    DAT_0203016e = (ushort)uVar1;
  }
  return in_lr;
}

