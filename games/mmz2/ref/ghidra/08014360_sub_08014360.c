// sub_08014360 at 0x08014360 (thumb)

undefined4 sub_08014360(uint param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (((param_1 & 0xffff) < 0x41) &&
     (uVar1 = (uint)DAT_0202ebfe + (param_1 & 0xffff), uVar1 < 10000)) {
    DAT_0202ebfe = (ushort)uVar1;
  }
  return in_lr;
}

