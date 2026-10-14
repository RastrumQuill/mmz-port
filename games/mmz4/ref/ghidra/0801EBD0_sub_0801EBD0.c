// sub_0801EBD0 at 0x0801EBD0 (thumb)

undefined4 sub_0801EBD0(uint param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (((param_1 & 0xffff) < 0x41) &&
     (uVar1 = (uint)DAT_0202e8ee + (param_1 & 0xffff), uVar1 < 10000)) {
    DAT_0202e8ee = (ushort)uVar1;
  }
  return in_lr;
}

